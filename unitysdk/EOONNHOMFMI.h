#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPEGPGHAJI.h"

#define EOONNHOMFMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71E4C0)

inline static constexpr unsigned int EOONNHOMFMI_TypeDefinitionIndex = 94187;

class EOONNHOMFMI : public ::BIPEGPGHAJI
{
public:
	::Il2CppArray<::System::UInt32>* LDBJJHJMBOK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOONNHOMFMI__CTOR_OFFSET))(this);
	}
};
