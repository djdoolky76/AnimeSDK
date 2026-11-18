#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MGIBONABFJB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x156A93C0)
#define MGIBONABFJB__CTOR_OFFSET UNITYSDK_OFFSET(0x156A93B0)

inline static constexpr unsigned int MGIBONABFJB_TypeDefinitionIndex = 85738;

class MGIBONABFJB : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* MJKCBLKAAKJ; // 0x10
	::Il2CppArray<::System::String*>* JEFIMHBLBOE; // 0x18
	::System::Boolean DEBGKPLOPCG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIBONABFJB__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIBONABFJB_NPOLNFDBOOD_OFFSET))(this);
	}
};
