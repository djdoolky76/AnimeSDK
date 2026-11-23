#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define F37D5293FFF93681_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x38B8FE0)
#define F37D5293FFF93681__CTOR_OFFSET UNITYSDK_OFFSET(0x38B9010)

inline static constexpr unsigned int F37D5293FFF93681_TypeDefinitionIndex = 20267;

class F37D5293FFF93681 : public ::System::Object
{
public:
	::System::Reflection::MethodInfo* B49D97541C111CC9; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F37D5293FFF93681__CTOR_OFFSET))(this);
	}

	::System::Object* A4CFF253D56ECB2D(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F37D5293FFF93681_A4CFF253D56ECB2D_OFFSET))(this, A86A90C31A146E9C);
	}
};
