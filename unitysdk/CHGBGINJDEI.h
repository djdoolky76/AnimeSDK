#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class MNCOPNHONHO;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelRuntimeInspector; }

#define CHGBGINJDEI_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xCF40790)
#define CHGBGINJDEI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF40780)
#define CHGBGINJDEI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xCF40890)
#define CHGBGINJDEI_JCOIGCGPMDJ_OFFSET UNITYSDK_OFFSET(0xCF40E60)
#define CHGBGINJDEI_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xCF40D30)

inline static constexpr unsigned int CHGBGINJDEI_TypeDefinitionIndex = 76811;

	class CHGBGINJDEI : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelRuntimeInspector* AJICFFBAAKJ; // 0x10
		::BABNOKHOBCF* FKINCGODJEP; // 0x18
		::MNCOPNHONHO* PDENFEFCAGN; // 0x20
		::System::Boolean MHLHNOLKFNE; // 0x28
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + CHGBGINJDEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGBGINJDEI_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGBGINJDEI_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGBGINJDEI_TEARDOWN_OFFSET))(this);
		}

		::System::Void JCOIGCGPMDJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHGBGINJDEI_JCOIGCGPMDJ_OFFSET))(this, a1);
		}

	};
