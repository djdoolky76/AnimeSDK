#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OEEKHELGHKF.h"
class BABNOKHOBCF;
class MNCOPNHONHO;

#define JGLAHKEALJM_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xB1965D0)
#define JGLAHKEALJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB1965C0)
#define JGLAHKEALJM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB196900)
#define JGLAHKEALJM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB196610)
#define JGLAHKEALJM_LLDIACFIFAB_OFFSET UNITYSDK_OFFSET(0xB1966D0)

inline static constexpr unsigned int JGLAHKEALJM_TypeDefinitionIndex = 76774;

	class JGLAHKEALJM : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::BABNOKHOBCF* FKINCGODJEP; // 0x18
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
