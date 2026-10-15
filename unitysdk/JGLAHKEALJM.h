#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OEEKHELGHKF.h"
class BABNOKHOBCF;
class MNCOPNHONHO;

#define JGLAHKEALJM_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xB19C940)
#define JGLAHKEALJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB19C930)
#define JGLAHKEALJM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB19CC80)
#define JGLAHKEALJM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB19C980)
#define JGLAHKEALJM_LLDIACFIFAB_OFFSET UNITYSDK_OFFSET(0xB19CA40)

inline static constexpr unsigned int JGLAHKEALJM_TypeDefinitionIndex = 76775;

	class JGLAHKEALJM : public ::System::Object
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x10
		::MNCOPNHONHO* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + JGLAHKEALJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLAHKEALJM_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLAHKEALJM_INITIALIZE_OFFSET))(this);
		}

		::System::Void LLDIACFIFAB(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + JGLAHKEALJM_LLDIACFIFAB_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLAHKEALJM_EXECUTE_OFFSET))(this);
		}

	};
