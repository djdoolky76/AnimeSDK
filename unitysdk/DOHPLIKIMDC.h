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

#define DOHPLIKIMDC_CGDCDLPKIJG_OFFSET UNITYSDK_OFFSET(0x191A7580)
#define DOHPLIKIMDC_CTOR_OFFSET UNITYSDK_OFFSET(0x191A75C0)
#define DOHPLIKIMDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x191A7690)
#define DOHPLIKIMDC_FONJPMMINEF_OFFSET UNITYSDK_OFFSET(0x191A7860)
#define DOHPLIKIMDC_GDGAFFCFHCF_OFFSET UNITYSDK_OFFSET(0x191A7540)
#define DOHPLIKIMDC_GET_BLOCKREFS_OFFSET UNITYSDK_OFFSET(0x191A7870)
#define DOHPLIKIMDC_IKKHJCGECGP_OFFSET UNITYSDK_OFFSET(0x191A7880)
#define DOHPLIKIMDC_LAAIMCOJJJK_1_OFFSET UNITYSDK_OFFSET(0x191A7770)
#define DOHPLIKIMDC_LAAIMCOJJJK_OFFSET UNITYSDK_OFFSET(0x191A76F0)

inline static constexpr unsigned int DOHPLIKIMDC_TypeDefinitionIndex = 75991;

	class DOHPLIKIMDC : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* OLLHLFNKOLH; // 0x10
		::System::String* GNNLGGOLNIC; // 0x18
		::RPG::Client::FMSystem* JONFOGGAKHC; // 0x20
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* GLELOFCFBCO; // 0x28
		::System::String* OINEOFGIPAA; // 0x30
		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* PHLOALPKEFC; // 0x38
		::System::Collections::Generic::List_1<::KEGBGDCJHDH*>* _BlockRefs_k__BackingField; // 0x40
		::System::String* KPHGMBFAKDB; // 0x48
		::Il2CppArray<::System::String*>* PLHEFECGEGO; // 0x50
		::RPG::GameCore::StageGrassOverrideConfig* IGAEFMFMKOM; // 0x58
		::MCLHMGFGEFK BFLIFKBEOPJ; // 0x60
		::RPG::GameCore::UnifiedBattleAreaConfig* IHKIPAGFBGB; // 0x78
		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* EADCDAIMHOE; // 0x80
		::System::UInt32 ALPOBFGOLOL; // 0x88
		::RPG::GameCore::EnviromentControlPriority JJCGJLGGEJL; // 0x8C
		::System::Boolean FBAHPEIIGNL; // 0x90
		::System::Boolean LJNIEOADLEI; // 0x91
		::System::Byte _padding0[0x2];
		::UnityEngine::Quaternion BLLHKAPFLLO; // 0x94
		::UnityEngine::Vector3 NPNKJAPMINI; // 0xA4
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
