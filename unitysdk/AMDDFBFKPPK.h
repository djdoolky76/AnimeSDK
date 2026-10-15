#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class DDKPJAGBNCK;
class MNCOPNHONHO;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }

#define AMDDFBFKPPK_AHFLCAJKFEN_OFFSET UNITYSDK_OFFSET(0x1556DBF0)
#define AMDDFBFKPPK_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x1556C320)
#define AMDDFBFKPPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1556EC70)
#define AMDDFBFKPPK_CKNGJJDOEDA_OFFSET UNITYSDK_OFFSET(0x1556D7A0)
#define AMDDFBFKPPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1556C310)
#define AMDDFBFKPPK_EFKMPINKCJJ_OFFSET UNITYSDK_OFFSET(0x1556CA60)
#define AMDDFBFKPPK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1556DD30)
#define AMDDFBFKPPK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1556C380)
#define AMDDFBFKPPK_JCOIGCGPMDJ_OFFSET UNITYSDK_OFFSET(0x1556E550)
#define AMDDFBFKPPK_JLOGBMOCILO_OFFSET UNITYSDK_OFFSET(0x1556DC70)
#define AMDDFBFKPPK_KDAPOLAMFDD_OFFSET UNITYSDK_OFFSET(0x1556D0E0)
#define AMDDFBFKPPK_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x1556E470)
#define AMDDFBFKPPK_MBCGGLPAEEO_OFFSET UNITYSDK_OFFSET(0x1556E950)
#define AMDDFBFKPPK_NOKBMFGHMJG_OFFSET UNITYSDK_OFFSET(0x1556CE90)
#define AMDDFBFKPPK_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1556D8D0)
#define AMDDFBFKPPK___PLAYERTELEPORTFADEINEFFECT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1556ECB0)

inline static constexpr unsigned int AMDDFBFKPPK_TypeDefinitionIndex = 76781;

	class AMDDFBFKPPK : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::DDKPJAGBNCK* EABEGANEMOP; // 0x18
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* FDFBDBKGIHH; // 0x20
		::BABNOKHOBCF* FKINCGODJEP; // 0x28
		::System::Single LLEBIHLMPHK; // 0x30
		::System::Boolean EBHJLEAFMFE; // 0x34
		static ::RPG::Client::RPGProfilerMarker** StaticGet_JLCGJKBAJHO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x5BB60);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JPKLLJIAEAI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x5BB68);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CPDIIIHICON()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x5BB70);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_BBOOFCKLJOK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x5BB78);
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
