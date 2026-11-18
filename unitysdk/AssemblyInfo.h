#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ASSEMBLYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF79C70)

inline static constexpr unsigned int AssemblyInfo_TypeDefinitionIndex = 96137;

class AssemblyInfo : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSEMBLYINFO__CTOR_OFFSET))(this);
	}
};
