#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardIdentifier.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class COOONBGCCCM;
class HKAJMEMCBLC;

#define COOONBGCCCM_CTOR_OFFSET UNITYSDK_OFFSET(0xE612590)
#define COOONBGCCCM_GET_CARDCONFIG_OFFSET UNITYSDK_OFFSET(0xE612790)
#define COOONBGCCCM_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xE612690)
#define COOONBGCCCM_GET_COPIEDSOURCECARD_OFFSET UNITYSDK_OFFSET(0xE6127B0)
#define COOONBGCCCM_GET_FINALAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xE612630)
#define COOONBGCCCM_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xE612610)
#define COOONBGCCCM_GET_ID_OFFSET UNITYSDK_OFFSET(0xE612600)
#define COOONBGCCCM_GET_MANACOSTRAW_OFFSET UNITYSDK_OFFSET(0xE612670)
#define COOONBGCCCM_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0xE612650)
#define COOONBGCCCM_GET_NEEDRELEASETARGET_OFFSET UNITYSDK_OFFSET(0xE6126D0)
#define COOONBGCCCM_GET_RAWCASTER_OFFSET UNITYSDK_OFFSET(0xE6126B0)
#define COOONBGCCCM_GET_UID_OFFSET UNITYSDK_OFFSET(0xE612620)
#define COOONBGCCCM_NDKHHMILBNJ_OFFSET UNITYSDK_OFFSET(0xE6126F0)
#define COOONBGCCCM_OKDKDNKKCOM_OFFSET UNITYSDK_OFFSET(0xE612740)
#define COOONBGCCCM_SET_CARDCONFIG_OFFSET UNITYSDK_OFFSET(0xE6127A0)
#define COOONBGCCCM_SET_CASTER_OFFSET UNITYSDK_OFFSET(0xE6126A0)
#define COOONBGCCCM_SET_COPIEDSOURCECARD_OFFSET UNITYSDK_OFFSET(0xE6127C0)
#define COOONBGCCCM_SET_FINALAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xE612640)
#define COOONBGCCCM_SET_MANACOSTRAW_OFFSET UNITYSDK_OFFSET(0xE612680)
#define COOONBGCCCM_SET_MANACOST_OFFSET UNITYSDK_OFFSET(0xE612660)
#define COOONBGCCCM_SET_NEEDRELEASETARGET_OFFSET UNITYSDK_OFFSET(0xE6126E0)
#define COOONBGCCCM_SET_RAWCASTER_OFFSET UNITYSDK_OFFSET(0xE6126C0)

inline static constexpr unsigned int COOONBGCCCM_TypeDefinitionIndex = 83879;

	class COOONBGCCCM : public ::System::Object
	{
	public:
		::HKAJMEMCBLC* _CardConfig_k__BackingField; // 0x10
		::COOONBGCCCM* _CopiedSourceCard_k__BackingField; // 0x18
		::System::Int32 _ManaCostRaw_k__BackingField; // 0x20
		::System::UInt32 _UID_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::Boolean _NeedReleaseTarget_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 _ManaCost_k__BackingField; // 0x30
		::RPG::GameCore::FateRinCardCasterSource _Caster_k__BackingField; // 0x34
		::RPG::GameCore::FixPoint _FinalAmplification_k__BackingField; // 0x38
		::RPG::GameCore::FateRinCardCasterSource _RawCaster_k__BackingField; // 0x40
		::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier _Identifier_k__BackingField; // 0x44
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + COOONBGCCCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_ID_OFFSET))(this);
		}

		::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier get_Identifier()
		{
			return ((::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_UID_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_FinalAmplification()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_FINALAMPLIFICATION_OFFSET))(this);
		}

		::System::Void set_FinalAmplification(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + COOONBGCCCM_SET_FINALAMPLIFICATION_OFFSET))(this, a1);
		}

		::System::Int32 get_ManaCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_MANACOST_OFFSET))(this);
		}

		::System::Void set_ManaCost(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COOONBGCCCM_SET_MANACOST_OFFSET))(this, a1);
		}

		::System::Int32 get_ManaCostRaw()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_MANACOSTRAW_OFFSET))(this);
		}

		::System::Void set_ManaCostRaw(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COOONBGCCCM_SET_MANACOSTRAW_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinCardCasterSource get_Caster()
		{
			return ((::RPG::GameCore::FateRinCardCasterSource(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_CASTER_OFFSET))(this);
		}

		::System::Void set_Caster(::RPG::GameCore::FateRinCardCasterSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCardCasterSource))((::PBYTE)hIl2Cpp + COOONBGCCCM_SET_CASTER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinCardCasterSource get_RawCaster()
		{
			return ((::RPG::GameCore::FateRinCardCasterSource(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_RAWCASTER_OFFSET))(this);
		}

		::System::Void set_RawCaster(::RPG::GameCore::FateRinCardCasterSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCardCasterSource))((::PBYTE)hIl2Cpp + COOONBGCCCM_SET_RAWCASTER_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedReleaseTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_NEEDRELEASETARGET_OFFSET))(this);
		}

		::System::Void set_NeedReleaseTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COOONBGCCCM_SET_NEEDRELEASETARGET_OFFSET))(this, a1);
		}

		::System::Boolean NDKHHMILBNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_NDKHHMILBNJ_OFFSET))(this);
		}

		::System::Boolean OKDKDNKKCOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_OKDKDNKKCOM_OFFSET))(this);
		}

		::HKAJMEMCBLC* get_CardConfig()
		{
			return ((::HKAJMEMCBLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_CARDCONFIG_OFFSET))(this);
		}

		::System::Void set_CardConfig(::HKAJMEMCBLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + COOONBGCCCM_SET_CARDCONFIG_OFFSET))(this, a1);
		}

		::COOONBGCCCM* get_CopiedSourceCard()
		{
			return ((::COOONBGCCCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + COOONBGCCCM_GET_COPIEDSOURCECARD_OFFSET))(this);
		}

		::System::Void set_CopiedSourceCard(::COOONBGCCCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COOONBGCCCM*))((::PBYTE)hIl2Cpp + COOONBGCCCM_SET_COPIEDSOURCECARD_OFFSET))(this, a1);
		}

	};
