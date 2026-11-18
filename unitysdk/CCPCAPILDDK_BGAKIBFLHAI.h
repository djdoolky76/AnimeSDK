#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHIPCHKEHME;

#define CCPCAPILDDK_BGAKIBFLHAI_OAODJBKILBN_OFFSET UNITYSDK_OFFSET(0x128C7B40)
#define CCPCAPILDDK_BGAKIBFLHAI__CTOR_OFFSET UNITYSDK_OFFSET(0x128C7B30)

inline static constexpr unsigned int CCPCAPILDDK_BGAKIBFLHAI_TypeDefinitionIndex = 42485;

class CCPCAPILDDK_BGAKIBFLHAI : public ::System::Object
{
public:
	::System::Single EEMEGFJOIFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPCAPILDDK_BGAKIBFLHAI__CTOR_OFFSET))(this);
	}

	::System::Boolean OAODJBKILBN(::LHIPCHKEHME* HHJGENIJBLM)
	{
		return ((::System::Boolean(*)(::PVOID, ::LHIPCHKEHME*))((::PBYTE)hIl2Cpp + CCPCAPILDDK_BGAKIBFLHAI_OAODJBKILBN_OFFSET))(this, HHJGENIJBLM);
	}
};
