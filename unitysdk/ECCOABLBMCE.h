#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALCOGHNNPMF.h"
#include "unitysdk/System/Object.h"
class OLABFALNLJM;
class PFFMOOLAIHJ;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ECCOABLBMCE_BMKJGIMCDIK_OFFSET UNITYSDK_OFFSET(0x12D05250)
#define ECCOABLBMCE_CTOR_OFFSET UNITYSDK_OFFSET(0x12D05C30)
#define ECCOABLBMCE_DMJGEGKFNCO_OFFSET UNITYSDK_OFFSET(0x12D042A0)
#define ECCOABLBMCE_EKIAMLCKMDL_OFFSET UNITYSDK_OFFSET(0x12D047D0)
#define ECCOABLBMCE_FDNDJDKPHNL_OFFSET UNITYSDK_OFFSET(0x12D04490)
#define ECCOABLBMCE_FKAEECDHAEI_OFFSET UNITYSDK_OFFSET(0x12D05830)
#define ECCOABLBMCE_GADEFCEPLJN_OFFSET UNITYSDK_OFFSET(0x12D04A50)
#define ECCOABLBMCE_GET_MUTEPOSITIONNTF_OFFSET UNITYSDK_OFFSET(0x12D040A0)
#define ECCOABLBMCE_GET_MUTESCALENTF_OFFSET UNITYSDK_OFFSET(0x12D04080)
#define ECCOABLBMCE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x12D040C0)
#define ECCOABLBMCE_JANFGBFBJPD_OFFSET UNITYSDK_OFFSET(0x12D04390)
#define ECCOABLBMCE_JHAMLAHHDMC_OFFSET UNITYSDK_OFFSET(0x12D041A0)
#define ECCOABLBMCE_JKPAPEHMNAJ_OFFSET UNITYSDK_OFFSET(0x12D05570)
#define ECCOABLBMCE_NNKCACOHEJP_OFFSET UNITYSDK_OFFSET(0x12D04E70)
#define ECCOABLBMCE_PEGDIADLHGL_OFFSET UNITYSDK_OFFSET(0x12D059B0)
#define ECCOABLBMCE_SET_MUTEPOSITIONNTF_OFFSET UNITYSDK_OFFSET(0x12D040B0)
#define ECCOABLBMCE_SET_MUTESCALENTF_OFFSET UNITYSDK_OFFSET(0x12D04090)

inline static constexpr unsigned int ECCOABLBMCE_TypeDefinitionIndex = 56945;

	class ECCOABLBMCE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* NBEHFFIMIPI; // 0x10
		::System::Collections::Generic::List_1<::PFFMOOLAIHJ*>* JDJDCLGPLOE; // 0x18
		::RPG::GameCore::GameEntity* IHIAEKHPBMH; // 0x20
		::System::Collections::Generic::List_1<::ALCOGHNNPMF>* EJPGOGENLJO; // 0x28
		::System::Boolean _MutePositionNtf_k__BackingField; // 0x30
		::System::Boolean AJAPHKJNOHO; // 0x31
		::System::Boolean _MuteScaleNtf_k__BackingField; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCOABLBMCE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_MuteScaleNtf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCOABLBMCE_GET_MUTESCALENTF_OFFSET))(this);
		}

		::System::Void set_MuteScaleNtf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECCOABLBMCE_SET_MUTESCALENTF_OFFSET))(this, a1);
		}

		::System::Boolean get_MutePositionNtf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCOABLBMCE_GET_MUTEPOSITIONNTF_OFFSET))(this);
		}

		::System::Void set_MutePositionNtf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECCOABLBMCE_SET_MUTEPOSITIONNTF_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCOABLBMCE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JANFGBFBJPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCOABLBMCE_JANFGBFBJPD_OFFSET))(this);
		}

		::System::Void JHAMLAHHDMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCOABLBMCE_JHAMLAHHDMC_OFFSET))(this);
		}

		::System::Void FDNDJDKPHNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCOABLBMCE_FDNDJDKPHNL_OFFSET))(this);
		}

		::System::Void DMJGEGKFNCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCOABLBMCE_DMJGEGKFNCO_OFFSET))(this);
		}

		::System::Void EKIAMLCKMDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCOABLBMCE_EKIAMLCKMDL_OFFSET))(this);
		}

		::System::Void GADEFCEPLJN(::OLABFALNLJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLABFALNLJM*))((::PBYTE)hIl2Cpp + ECCOABLBMCE_GADEFCEPLJN_OFFSET))(this, a1);
		}

		::System::Void NNKCACOHEJP(::OLABFALNLJM* a1, ::System::Collections::Generic::List_1<::ALCOGHNNPMF>* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OLABFALNLJM*, ::System::Collections::Generic::List_1<::ALCOGHNNPMF>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECCOABLBMCE_NNKCACOHEJP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BMKJGIMCDIK(::OLABFALNLJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLABFALNLJM*))((::PBYTE)hIl2Cpp + ECCOABLBMCE_BMKJGIMCDIK_OFFSET))(this, a1);
		}

		::System::Void JKPAPEHMNAJ(::OLABFALNLJM* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::ALCOGHNNPMF>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OLABFALNLJM*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::ALCOGHNNPMF>*))((::PBYTE)hIl2Cpp + ECCOABLBMCE_JKPAPEHMNAJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FKAEECDHAEI(::System::Boolean a1, ::OLABFALNLJM* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::OLABFALNLJM*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECCOABLBMCE_FKAEECDHAEI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PEGDIADLHGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCOABLBMCE_PEGDIADLHGL_OFFSET))(this);
		}

	};
