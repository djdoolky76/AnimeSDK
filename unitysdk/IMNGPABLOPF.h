#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IJNCJFFEMPL;
namespace System::Reflection { class FieldInfo; }

#define IMNGPABLOPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4398A0)

inline static constexpr unsigned int IMNGPABLOPF_TypeDefinitionIndex = 28906;

class IMNGPABLOPF : public ::System::Object
{
public:
	::System::Reflection::FieldInfo* KALNFNBBABH; // 0x10
	::IJNCJFFEMPL* NIONJCJOGNJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNGPABLOPF__CTOR_OFFSET))(this);
	}
};
