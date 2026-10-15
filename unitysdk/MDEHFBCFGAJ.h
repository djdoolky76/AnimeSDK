#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class MNCOPNHONHO;

#define MDEHFBCFGAJ_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xB89BC60)
#define MDEHFBCFGAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB89BC50)
#define MDEHFBCFGAJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB89BCE0)
#define MDEHFBCFGAJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB89BCA0)

inline static constexpr unsigned int MDEHFBCFGAJ_TypeDefinitionIndex = 76743;

	class MDEHFBCFGAJ : public ::System::Object
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x10
		::MNCOPNHONHO* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + MDEHFBCFGAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEHFBCFGAJ_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEHFBCFGAJ_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEHFBCFGAJ_EXECUTE_OFFSET))(this);
		}

	};
