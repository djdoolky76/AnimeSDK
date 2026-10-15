#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FABMDCOFHCG;

#define DMDLPHCBMIC_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB3260)
#define DMDLPHCBMIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEB3210)

inline static constexpr unsigned int DMDLPHCBMIC_TypeDefinitionIndex = 56093;

	class DMDLPHCBMIC : public ::System::Object
	{
	public:
		::FABMDCOFHCG* JMJMFEBBGOJ; // 0x10
		::System::UInt32 HCDEOKNIGKG; // 0x18
		::System::UInt32 DFEJABODPGM; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDLPHCBMIC_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDLPHCBMIC_DISPOSE_OFFSET))(this);
		}

	};
