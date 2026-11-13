#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class DDKPJAGBNCK;
class MNCOPNHONHO;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }

#define AMDDFBFKPPK_AHFLCAJKFEN_OFFSET UNITYSDK_OFFSET(0x197D3A70)
#define AMDDFBFKPPK_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x197D2190)
#define AMDDFBFKPPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x197D4B10)
#define AMDDFBFKPPK_CKNGJJDOEDA_OFFSET UNITYSDK_OFFSET(0x197D3620)
#define AMDDFBFKPPK_CTOR_OFFSET UNITYSDK_OFFSET(0x197D2180)
#define AMDDFBFKPPK_EFKMPINKCJJ_OFFSET UNITYSDK_OFFSET(0x197D28E0)
#define AMDDFBFKPPK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x197D3BB0)
#define AMDDFBFKPPK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x197D21F0)
#define AMDDFBFKPPK_JCOIGCGPMDJ_OFFSET UNITYSDK_OFFSET(0x197D43E0)
#define AMDDFBFKPPK_JLOGBMOCILO_OFFSET UNITYSDK_OFFSET(0x197D3AF0)
#define AMDDFBFKPPK_KDAPOLAMFDD_OFFSET UNITYSDK_OFFSET(0x197D2F60)
#define AMDDFBFKPPK_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x197D4300)
#define AMDDFBFKPPK_MBCGGLPAEEO_OFFSET UNITYSDK_OFFSET(0x197D47F0)
#define AMDDFBFKPPK_NOKBMFGHMJG_OFFSET UNITYSDK_OFFSET(0x197D2D10)
#define AMDDFBFKPPK_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x197D3750)
#define AMDDFBFKPPK___PLAYERTELEPORTFADEINEFFECT_B__7_0_OFFSET UNITYSDK_OFFSET(0x197D4B50)

inline static constexpr unsigned int AMDDFBFKPPK_TypeDefinitionIndex = 79114;

	class AMDDFBFKPPK : public ::System::Object
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x10
		::MNCOPNHONHO* PDENFEFCAGN; // 0x18
		::DDKPJAGBNCK* EABEGANEMOP; // 0x20
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* FDFBDBKGIHH; // 0x28
		::System::Boolean EBHJLEAFMFE; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single LLEBIHLMPHK; // 0x34
		static ::RPG::Client::RPGProfilerMarker** StaticGet_JPKLLJIAEAI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x54570);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JLCGJKBAJHO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x54578);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CPDIIIHICON()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x54580);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_BBOOFCKLJOK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x54588);
		}

		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMDDFBFKPPK_CCTOR_OFFSET))();
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_INITIALIZE_OFFSET))(this);
		}

		::System::Void CKNGJJDOEDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_CKNGJJDOEDA_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_TEARDOWN_OFFSET))(this);
		}

		::System::Void KDAPOLAMFDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_KDAPOLAMFDD_OFFSET))(this);
		}

		::System::Boolean JLOGBMOCILO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_JLOGBMOCILO_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_EXECUTE_OFFSET))(this);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void JCOIGCGPMDJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_JCOIGCGPMDJ_OFFSET))(this, a1);
		}

		::System::Void MBCGGLPAEEO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_MBCGGLPAEEO_OFFSET))(this, a1);
		}

		::System::Void EFKMPINKCJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_EFKMPINKCJJ_OFFSET))(this);
		}

		::System::Void NOKBMFGHMJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_NOKBMFGHMJG_OFFSET))(this);
		}

		::System::Void AHFLCAJKFEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK_AHFLCAJKFEN_OFFSET))(this);
		}

		::System::Void __PlayerTeleportFadeInEffect_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDDFBFKPPK___PLAYERTELEPORTFADEINEFFECT_B__7_0_OFFSET))(this);
		}

	};
