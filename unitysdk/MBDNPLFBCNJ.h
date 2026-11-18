#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MBDNPLFBCNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15691AA0)

inline static constexpr unsigned int MBDNPLFBCNJ_TypeDefinitionIndex = 48571;

class MBDNPLFBCNJ : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* MJNMAGNJACK; // 0x10
	::System::Int32 OBNIAHNMHPF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDNPLFBCNJ__CTOR_OFFSET))(this);
	}
};
