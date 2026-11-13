#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardIdentifier.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class COOONBGCCCM;
class HKAJMEMCBLC;

#define COOONBGCCCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1916FF20)
#define COOONBGCCCM_GET_CARDCONFIG_OFFSET UNITYSDK_OFFSET(0x19170120)
#define COOONBGCCCM_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x19170020)
#define COOONBGCCCM_GET_COPIEDSOURCECARD_OFFSET UNITYSDK_OFFSET(0x19170140)
#define COOONBGCCCM_GET_FINALAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0x1916FFC0)
#define COOONBGCCCM_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1916FFA0)
#define COOONBGCCCM_GET_ID_OFFSET UNITYSDK_OFFSET(0x1916FF90)
#define COOONBGCCCM_GET_MANACOSTRAW_OFFSET UNITYSDK_OFFSET(0x19170000)
#define COOONBGCCCM_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0x1916FFE0)
#define COOONBGCCCM_GET_NEEDRELEASETARGET_OFFSET UNITYSDK_OFFSET(0x19170060)
#define COOONBGCCCM_GET_RAWCASTER_OFFSET UNITYSDK_OFFSET(0x19170040)
#define COOONBGCCCM_GET_UID_OFFSET UNITYSDK_OFFSET(0x1916FFB0)
#define COOONBGCCCM_NDKHHMILBNJ_OFFSET UNITYSDK_OFFSET(0x19170080)
#define COOONBGCCCM_OKDKDNKKCOM_OFFSET UNITYSDK_OFFSET(0x191700D0)
#define COOONBGCCCM_SET_CARDCONFIG_OFFSET UNITYSDK_OFFSET(0x19170130)
#define COOONBGCCCM_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x19170030)
#define COOONBGCCCM_SET_COPIEDSOURCECARD_OFFSET UNITYSDK_OFFSET(0x19170150)
#define COOONBGCCCM_SET_FINALAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0x1916FFD0)
#define COOONBGCCCM_SET_MANACOSTRAW_OFFSET UNITYSDK_OFFSET(0x19170010)
#define COOONBGCCCM_SET_MANACOST_OFFSET UNITYSDK_OFFSET(0x1916FFF0)
#define COOONBGCCCM_SET_NEEDRELEASETARGET_OFFSET UNITYSDK_OFFSET(0x19170070)
#define COOONBGCCCM_SET_RAWCASTER_OFFSET UNITYSDK_OFFSET(0x19170050)

inline static constexpr unsigned int COOONBGCCCM_TypeDefinitionIndex = 83878;

	class COOONBGCCCM : public ::System::Object
	{
	public:
		::COOONBGCCCM* _CopiedSourceCard_k__BackingField; // 0x10
		::HKAJMEMCBLC* _CardConfig_k__BackingField; // 0x18
		::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier _Identifier_k__BackingField; // 0x20
		::RPG::GameCore::FateRinCardCasterSource _RawCaster_k__BackingField; // 0x24
		::RPG::GameCore::FateRinCardCasterSource _Caster_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::Boolean _NeedReleaseTarget_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 _UID_k__BackingField; // 0x34
		::RPG::GameCore::FixPoint _FinalAmplification_k__BackingField; // 0x38
		::System::Int32 _ManaCost_k__BackingField; // 0x40
		::System::Int32 _ManaCostRaw_k__BackingField; // 0x44
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
