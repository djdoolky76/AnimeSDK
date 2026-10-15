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

#define DOHPLIKIMDC_CGDCDLPKIJG_OFFSET UNITYSDK_OFFSET(0x11FE4140)
#define DOHPLIKIMDC_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE4180)
#define DOHPLIKIMDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE4250)
#define DOHPLIKIMDC_FONJPMMINEF_OFFSET UNITYSDK_OFFSET(0x11FE4400)
#define DOHPLIKIMDC_GDGAFFCFHCF_OFFSET UNITYSDK_OFFSET(0x11FE4100)
#define DOHPLIKIMDC_GET_BLOCKREFS_OFFSET UNITYSDK_OFFSET(0x11FE4410)
#define DOHPLIKIMDC_IKKHJCGECGP_OFFSET UNITYSDK_OFFSET(0x11FE4420)
#define DOHPLIKIMDC_LAAIMCOJJJK_1_OFFSET UNITYSDK_OFFSET(0x11FE4320)
#define DOHPLIKIMDC_LAAIMCOJJJK_OFFSET UNITYSDK_OFFSET(0x11FE42B0)

inline static constexpr unsigned int DOHPLIKIMDC_TypeDefinitionIndex = 73865;

	class DOHPLIKIMDC : public ::System::Object
	{
	public:
		::RPG::GameCore::UnifiedBattleAreaConfig* IHKIPAGFBGB; // 0x10
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* EADCDAIMHOE; // 0x18
		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* PHLOALPKEFC; // 0x20
		::RPG::Client::FMSystem* JONFOGGAKHC; // 0x28
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* GLELOFCFBCO; // 0x30
		::RPG::Client::MonoEffect* OLLHLFNKOLH; // 0x38
		::System::String* KPHGMBFAKDB; // 0x40
		::System::String* OINEOFGIPAA; // 0x48
		::RPG::GameCore::StageGrassOverrideConfig* IGAEFMFMKOM; // 0x50
		::Il2CppArray<::System::String*>* PLHEFECGEGO; // 0x58
		::System::String* GNNLGGOLNIC; // 0x60
		::MCLHMGFGEFK BFLIFKBEOPJ; // 0x68
		::System::Collections::Generic::List_1<::KEGBGDCJHDH*>* _BlockRefs_k__BackingField; // 0x80
		::RPG::GameCore::EnviromentControlPriority JJCGJLGGEJL; // 0x88
		::System::UInt32 ALPOBFGOLOL; // 0x8C
		::UnityEngine::Vector3 NPNKJAPMINI; // 0x90
		::UnityEngine::Quaternion BLLHKAPFLLO; // 0x9C
		::System::Boolean LJNIEOADLEI; // 0xAC
		::System::Boolean FBAHPEIIGNL; // 0xAD
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
