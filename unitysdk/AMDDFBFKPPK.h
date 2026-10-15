#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class DDKPJAGBNCK;
class MNCOPNHONHO;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }

#define AMDDFBFKPPK_AHFLCAJKFEN_OFFSET UNITYSDK_OFFSET(0x15579350)
#define AMDDFBFKPPK_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x15577A80)
#define AMDDFBFKPPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1557A3E0)
#define AMDDFBFKPPK_CKNGJJDOEDA_OFFSET UNITYSDK_OFFSET(0x15578F00)
#define AMDDFBFKPPK_CTOR_OFFSET UNITYSDK_OFFSET(0x15577A70)
#define AMDDFBFKPPK_EFKMPINKCJJ_OFFSET UNITYSDK_OFFSET(0x155781C0)
#define AMDDFBFKPPK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15579490)
#define AMDDFBFKPPK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15577AE0)
#define AMDDFBFKPPK_JCOIGCGPMDJ_OFFSET UNITYSDK_OFFSET(0x15579CC0)
#define AMDDFBFKPPK_JLOGBMOCILO_OFFSET UNITYSDK_OFFSET(0x155793D0)
#define AMDDFBFKPPK_KDAPOLAMFDD_OFFSET UNITYSDK_OFFSET(0x15578840)
#define AMDDFBFKPPK_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x15579BE0)
#define AMDDFBFKPPK_MBCGGLPAEEO_OFFSET UNITYSDK_OFFSET(0x1557A0C0)
#define AMDDFBFKPPK_NOKBMFGHMJG_OFFSET UNITYSDK_OFFSET(0x155785F0)
#define AMDDFBFKPPK_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15579030)
#define AMDDFBFKPPK___PLAYERTELEPORTFADEINEFFECT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1557A420)

	class AMDDFBFKPPK : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* FDFBDBKGIHH; // 0x18
		::BABNOKHOBCF* FKINCGODJEP; // 0x20
		::DDKPJAGBNCK* EABEGANEMOP; // 0x28
		::System::Boolean EBHJLEAFMFE; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single LLEBIHLMPHK; // 0x34
		static ::RPG::Client::RPGProfilerMarker** StaticGet_CPDIIIHICON()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x5ED40);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JLCGJKBAJHO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x5ED48);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_BBOOFCKLJOK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x5ED50);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JPKLLJIAEAI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AMDDFBFKPPK")->GetStaticField(0x5ED58);
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
