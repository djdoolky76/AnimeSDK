#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class BPGMFAKEGDD;
class MNCOPNHONHO;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }

#define BHBJFNNIFDP_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xB46FCC0)
#define BHBJFNNIFDP_BJDKGPJCKPH_OFFSET UNITYSDK_OFFSET(0xB471FD0)
#define BHBJFNNIFDP_CTOR_OFFSET UNITYSDK_OFFSET(0xB46FCB0)
#define BHBJFNNIFDP_DHLKAHEPKLB_OFFSET UNITYSDK_OFFSET(0xB471E50)
#define BHBJFNNIFDP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB470580)
#define BHBJFNNIFDP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB46FD20)
#define BHBJFNNIFDP_JCOIGCGPMDJ_OFFSET UNITYSDK_OFFSET(0xB470600)
#define BHBJFNNIFDP_KDLCJPHHOFI_OFFSET UNITYSDK_OFFSET(0xB472100)
#define BHBJFNNIFDP_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB470450)

	class BHBJFNNIFDP : public ::System::Object
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x10
		::MNCOPNHONHO* PDENFEFCAGN; // 0x18
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* FDFBDBKGIHH; // 0x20
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + BHBJFNNIFDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJFNNIFDP_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJFNNIFDP_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJFNNIFDP_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBJFNNIFDP_EXECUTE_OFFSET))(this);
		}

		::System::Void JCOIGCGPMDJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHBJFNNIFDP_JCOIGCGPMDJ_OFFSET))(this, a1);
		}

		static ::System::Void BJDKGPJCKPH(::BPGMFAKEGDD* a1)
		{
			return ((::System::Void(*)(::BPGMFAKEGDD*))((::PBYTE)hIl2Cpp + BHBJFNNIFDP_BJDKGPJCKPH_OFFSET))(a1);
		}

		::System::Boolean KDLCJPHHOFI(::BPGMFAKEGDD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPGMFAKEGDD*))((::PBYTE)hIl2Cpp + BHBJFNNIFDP_KDLCJPHHOFI_OFFSET))(this, a1);
		}

		::System::Void DHLKAHEPKLB(::BPGMFAKEGDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPGMFAKEGDD*))((::PBYTE)hIl2Cpp + BHBJFNNIFDP_DHLKAHEPKLB_OFFSET))(this, a1);
		}

	};
