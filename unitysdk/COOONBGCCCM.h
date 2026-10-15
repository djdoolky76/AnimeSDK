#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardIdentifier.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class COOONBGCCCM;
class HKAJMEMCBLC;

#define COOONBGCCCM_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBEDD0)
#define COOONBGCCCM_GET_CARDCONFIG_OFFSET UNITYSDK_OFFSET(0xDCBEFD0)
#define COOONBGCCCM_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xDCBEED0)
#define COOONBGCCCM_GET_COPIEDSOURCECARD_OFFSET UNITYSDK_OFFSET(0xDCBEFF0)
#define COOONBGCCCM_GET_FINALAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xDCBEE70)
#define COOONBGCCCM_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDCBEE50)
#define COOONBGCCCM_GET_ID_OFFSET UNITYSDK_OFFSET(0xDCBEE40)
#define COOONBGCCCM_GET_MANACOSTRAW_OFFSET UNITYSDK_OFFSET(0xDCBEEB0)
#define COOONBGCCCM_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0xDCBEE90)
#define COOONBGCCCM_GET_NEEDRELEASETARGET_OFFSET UNITYSDK_OFFSET(0xDCBEF10)
#define COOONBGCCCM_GET_RAWCASTER_OFFSET UNITYSDK_OFFSET(0xDCBEEF0)
#define COOONBGCCCM_GET_UID_OFFSET UNITYSDK_OFFSET(0xDCBEE60)
#define COOONBGCCCM_NDKHHMILBNJ_OFFSET UNITYSDK_OFFSET(0xDCBEF30)
#define COOONBGCCCM_OKDKDNKKCOM_OFFSET UNITYSDK_OFFSET(0xDCBEF80)
#define COOONBGCCCM_SET_CARDCONFIG_OFFSET UNITYSDK_OFFSET(0xDCBEFE0)
#define COOONBGCCCM_SET_CASTER_OFFSET UNITYSDK_OFFSET(0xDCBEEE0)
#define COOONBGCCCM_SET_COPIEDSOURCECARD_OFFSET UNITYSDK_OFFSET(0xDCBF000)
#define COOONBGCCCM_SET_FINALAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xDCBEE80)
#define COOONBGCCCM_SET_MANACOSTRAW_OFFSET UNITYSDK_OFFSET(0xDCBEEC0)
#define COOONBGCCCM_SET_MANACOST_OFFSET UNITYSDK_OFFSET(0xDCBEEA0)
#define COOONBGCCCM_SET_NEEDRELEASETARGET_OFFSET UNITYSDK_OFFSET(0xDCBEF20)
#define COOONBGCCCM_SET_RAWCASTER_OFFSET UNITYSDK_OFFSET(0xDCBEF00)

inline static constexpr unsigned int COOONBGCCCM_TypeDefinitionIndex = 81098;

	class COOONBGCCCM : public ::System::Object
	{
	public:
		::HKAJMEMCBLC* _CardConfig_k__BackingField; // 0x10
		::COOONBGCCCM* _CopiedSourceCard_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Int32 _ManaCost_k__BackingField; // 0x24
		::RPG::GameCore::FateRinCardCasterSource _Caster_k__BackingField; // 0x28
		::System::UInt32 _UID_k__BackingField; // 0x2C
		::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier _Identifier_k__BackingField; // 0x30
		::System::Boolean _NeedReleaseTarget_k__BackingField; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint _FinalAmplification_k__BackingField; // 0x38
		::System::Int32 _ManaCostRaw_k__BackingField; // 0x40
		::RPG::GameCore::FateRinCardCasterSource _RawCaster_k__BackingField; // 0x44
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
