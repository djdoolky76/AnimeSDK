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

#define DOHPLIKIMDC_CGDCDLPKIJG_OFFSET UNITYSDK_OFFSET(0x12DE2CE0)
#define DOHPLIKIMDC_CTOR_OFFSET UNITYSDK_OFFSET(0x12DE2D20)
#define DOHPLIKIMDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12DE2DF0)
#define DOHPLIKIMDC_FONJPMMINEF_OFFSET UNITYSDK_OFFSET(0x12DE2FC0)
#define DOHPLIKIMDC_GDGAFFCFHCF_OFFSET UNITYSDK_OFFSET(0x12DE2CA0)
#define DOHPLIKIMDC_GET_BLOCKREFS_OFFSET UNITYSDK_OFFSET(0x12DE2FD0)
#define DOHPLIKIMDC_IKKHJCGECGP_OFFSET UNITYSDK_OFFSET(0x12DE2FE0)
#define DOHPLIKIMDC_LAAIMCOJJJK_1_OFFSET UNITYSDK_OFFSET(0x12DE2ED0)
#define DOHPLIKIMDC_LAAIMCOJJJK_OFFSET UNITYSDK_OFFSET(0x12DE2E50)

inline static constexpr unsigned int DOHPLIKIMDC_TypeDefinitionIndex = 75992;

	class DOHPLIKIMDC : public ::System::Object
	{
	public:
		::System::String* OINEOFGIPAA; // 0x10
		::RPG::GameCore::UnifiedBattleAreaConfig* IHKIPAGFBGB; // 0x18
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* GLELOFCFBCO; // 0x20
		::System::String* KPHGMBFAKDB; // 0x28
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* EADCDAIMHOE; // 0x30
		::RPG::GameCore::StageGrassOverrideConfig* IGAEFMFMKOM; // 0x38
		::System::String* GNNLGGOLNIC; // 0x40
		::MCLHMGFGEFK BFLIFKBEOPJ; // 0x48
		::RPG::Client::FMSystem* JONFOGGAKHC; // 0x60
		::System::Collections::Generic::List_1<::KEGBGDCJHDH*>* _BlockRefs_k__BackingField; // 0x68
		::RPG::Client::MonoEffect* OLLHLFNKOLH; // 0x70
		::Il2CppArray<::System::String*>* PLHEFECGEGO; // 0x78
		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* PHLOALPKEFC; // 0x80
		::UnityEngine::Vector3 NPNKJAPMINI; // 0x88
		::System::Boolean LJNIEOADLEI; // 0x94
		::System::Boolean FBAHPEIIGNL; // 0x95
		::System::Byte _padding0[0x2];
		::System::UInt32 ALPOBFGOLOL; // 0x98
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
