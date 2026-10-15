#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
class JJNNABINOOH;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelInfiniteWaveProgressChange; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define PJHPIHHNHMH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC283440)
#define PJHPIHHNHMH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC283700)
#define PJHPIHHNHMH_CBEPPEGOIBB_OFFSET UNITYSDK_OFFSET(0xC282150)
#define PJHPIHHNHMH_CFHMAPCNJJO_OFFSET UNITYSDK_OFFSET(0xC282570)
#define PJHPIHHNHMH_CTOR_OFFSET UNITYSDK_OFFSET(0xC283980)
#define PJHPIHHNHMH_DHCNIBIIBHI_OFFSET UNITYSDK_OFFSET(0xC2832C0)
#define PJHPIHHNHMH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC281E50)
#define PJHPIHHNHMH_FLFDFMBPONF_OFFSET UNITYSDK_OFFSET(0xC2831D0)
#define PJHPIHHNHMH_GDBMIPFPDBD_OFFSET UNITYSDK_OFFSET(0xC281F80)
#define PJHPIHHNHMH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC281C40)
#define PJHPIHHNHMH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xC281C60)
#define PJHPIHHNHMH_GGONCFMJAOE_OFFSET UNITYSDK_OFFSET(0xC283380)
#define PJHPIHHNHMH_GHHDJNKDGDN_OFFSET UNITYSDK_OFFSET(0xC282FE0)
#define PJHPIHHNHMH_HACDOPJBPKD_OFFSET UNITYSDK_OFFSET(0xC281EA0)
#define PJHPIHHNHMH_JBPGFLOJHJF_OFFSET UNITYSDK_OFFSET(0xC2825C0)
#define PJHPIHHNHMH_KCNFCEPOOEH_OFFSET UNITYSDK_OFFSET(0xC2824F0)
#define PJHPIHHNHMH_KIAPJDMFDOP_OFFSET UNITYSDK_OFFSET(0xC282D70)
#define PJHPIHHNHMH_LPEAAPKFOPB_OFFSET UNITYSDK_OFFSET(0xC282CC0)
#define PJHPIHHNHMH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC281CA0)
#define PJHPIHHNHMH_NOHKNMAEAFK_OFFSET UNITYSDK_OFFSET(0xC283030)
#define PJHPIHHNHMH_NPNGLADKDLH_OFFSET UNITYSDK_OFFSET(0xC282F10)
#define PJHPIHHNHMH_ONKELLLEFLD_OFFSET UNITYSDK_OFFSET(0xC282230)
#define PJHPIHHNHMH_PAOGEELPEDH_OFFSET UNITYSDK_OFFSET(0xC282100)
#define PJHPIHHNHMH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xC281C50)
#define PJHPIHHNHMH__ONBIND_OFFSET UNITYSDK_OFFSET(0xC281A70)

inline static constexpr unsigned int PJHPIHHNHMH_TypeDefinitionIndex = 72202;

	class PJHPIHHNHMH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x60
		::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0x68
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x70
		::RPG::Client::LocalizedText* FMMNHDOAFKO; // 0x78
		::UnityEngine::Transform* OHILBJNLHNM; // 0x80
		::UnityEngine::RectTransform* COEJPMFOOHP; // 0x88
		::RPG::Client::PrefabLoadMeta* BFHFJPGOCHN; // 0x90
		::System::Collections::Generic::List_1<::JJNNABINOOH*>* AGHFEGGHEJI; // 0x98
		::System::Int32 _Index_k__BackingField; // 0xA0
		::System::Int32 JMBIILLKGDC; // 0xA4
		::System::Single CJEKOPIKOKD; // 0xA8
		::System::Int32 BBBAIHDEEMP; // 0xAC
		::System::Boolean ALGPHGKKOCA; // 0xB0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_GET_TRANS_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void PAOGEELPEDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_PAOGEELPEDH_OFFSET))(this);
		}

		::System::Void CBEPPEGOIBB(::RPG::GameCore::LevelInfiniteWaveProgressChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelInfiniteWaveProgressChange*))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_CBEPPEGOIBB_OFFSET))(this, a1);
		}

		::System::Void CFHMAPCNJJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_CFHMAPCNJJO_OFFSET))(this);
		}

		::System::Void HACDOPJBPKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_HACDOPJBPKD_OFFSET))(this);
		}

		::System::Void JBPGFLOJHJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_JBPGFLOJHJF_OFFSET))(this);
		}

		::System::Void GDBMIPFPDBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_GDBMIPFPDBD_OFFSET))(this);
		}

		::System::Void ONKELLLEFLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_ONKELLLEFLD_OFFSET))(this, a1);
		}

		::System::Void KCNFCEPOOEH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_KCNFCEPOOEH_OFFSET))(this, a1);
		}

		::System::Boolean GHHDJNKDGDN(::RPG::GameCore::MonsterRank a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_GHHDJNKDGDN_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonsterRank LPEAAPKFOPB(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonsterRank(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_LPEAAPKFOPB_OFFSET))(this, a1);
		}

		::System::Int32 NPNGLADKDLH(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_NPNGLADKDLH_OFFSET))(this, a1);
		}

		::System::Int32 KIAPJDMFDOP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_KIAPJDMFDOP_OFFSET))(this, a1);
		}

		::System::Int32 NOHKNMAEAFK(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_NOHKNMAEAFK_OFFSET))(this, a1);
		}

		::System::Void FLFDFMBPONF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_FLFDFMBPONF_OFFSET))(this, a1);
		}

		::System::Void DHCNIBIIBHI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_DHCNIBIIBHI_OFFSET))(this, a1);
		}

		::System::Void GGONCFMJAOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_GGONCFMJAOE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHPIHHNHMH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
