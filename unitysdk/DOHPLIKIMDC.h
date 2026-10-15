#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCLHMGFGEFK.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KEGBGDCJHDH;
class KLEFGGIHGMI;
namespace RPG::Client { class FMSystem; }
namespace RPG::Client { class LevelStageVisableController; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace RPG::GameCore { class UnifiedBattleAreaConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOHPLIKIMDC_CGDCDLPKIJG_OFFSET UNITYSDK_OFFSET(0x11FE9530)
#define DOHPLIKIMDC_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE9570)
#define DOHPLIKIMDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE9640)
#define DOHPLIKIMDC_FONJPMMINEF_OFFSET UNITYSDK_OFFSET(0x11FE9810)
#define DOHPLIKIMDC_GDGAFFCFHCF_OFFSET UNITYSDK_OFFSET(0x11FE94F0)
#define DOHPLIKIMDC_GET_BLOCKREFS_OFFSET UNITYSDK_OFFSET(0x11FE9820)
#define DOHPLIKIMDC_IKKHJCGECGP_OFFSET UNITYSDK_OFFSET(0x11FE9830)
#define DOHPLIKIMDC_LAAIMCOJJJK_1_OFFSET UNITYSDK_OFFSET(0x11FE9720)
#define DOHPLIKIMDC_LAAIMCOJJJK_OFFSET UNITYSDK_OFFSET(0x11FE96A0)

	class DOHPLIKIMDC : public ::System::Object
	{
	public:
		::RPG::Client::FMSystem* JONFOGGAKHC; // 0x10
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* EADCDAIMHOE; // 0x18
		::System::String* OINEOFGIPAA; // 0x20
		::RPG::Client::MonoEffect* OLLHLFNKOLH; // 0x28
		::System::String* GNNLGGOLNIC; // 0x30
		::RPG::GameCore::UnifiedBattleAreaConfig* IHKIPAGFBGB; // 0x38
		::System::Collections::Generic::List_1<::KEGBGDCJHDH*>* _BlockRefs_k__BackingField; // 0x40
		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* PHLOALPKEFC; // 0x48
		::System::String* KPHGMBFAKDB; // 0x50
		::Il2CppArray<::System::String*>* PLHEFECGEGO; // 0x58
		::MCLHMGFGEFK BFLIFKBEOPJ; // 0x60
		::RPG::GameCore::StageGrassOverrideConfig* IGAEFMFMKOM; // 0x78
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* GLELOFCFBCO; // 0x80
		::System::UInt32 ALPOBFGOLOL; // 0x88
		::System::Boolean LJNIEOADLEI; // 0x8C
		::System::Boolean FBAHPEIIGNL; // 0x8D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 NPNKJAPMINI; // 0x90
		::UnityEngine::Quaternion BLLHKAPFLLO; // 0x9C
		::RPG::GameCore::EnviromentControlPriority JJCGJLGGEJL; // 0xAC
		::System::Void _ctor(::MCLHMGFGEFK a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCLHMGFGEFK))((::PBYTE)hIl2Cpp + DOHPLIKIMDC_CTOR_OFFSET))(this, a1);
		}

		::System::String* GDGAFFCFHCF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHPLIKIMDC_GDGAFFCFHCF_OFFSET))(this);
		}

		::System::String* CGDCDLPKIJG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHPLIKIMDC_CGDCDLPKIJG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHPLIKIMDC_DISPOSE_OFFSET))(this);
		}

		::System::Void LAAIMCOJJJK(::RPG::GameCore::LevelBattleAreaInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleAreaInfo*))((::PBYTE)hIl2Cpp + DOHPLIKIMDC_LAAIMCOJJJK_OFFSET))(this, a1);
		}

		::System::Void LAAIMCOJJJK_1(::RPG::GameCore::UnifiedBattleAreaConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UnifiedBattleAreaConfig*))((::PBYTE)hIl2Cpp + DOHPLIKIMDC_LAAIMCOJJJK_1_OFFSET))(this, a1);
		}

		::System::Boolean FONJPMMINEF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHPLIKIMDC_FONJPMMINEF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KEGBGDCJHDH*>* get_BlockRefs()
		{
			return ((::System::Collections::Generic::List_1<::KEGBGDCJHDH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHPLIKIMDC_GET_BLOCKREFS_OFFSET))(this);
		}

		::RPG::Client::LevelStageVisableController* IKKHJCGECGP()
		{
			return ((::RPG::Client::LevelStageVisableController*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHPLIKIMDC_IKKHJCGECGP_OFFSET))(this);
		}

	};
