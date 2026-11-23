#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define BA382EB502630596_B5ED89A5E912F5DC_B6960E1B6FD930B2_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BA382EB502630596_B5ED89A5E912F5DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int BA382EB502630596_B5ED89A5E912F5DC_TypeDefinitionIndex = 20983;

class BA382EB502630596_B5ED89A5E912F5DC : public ::System::Object
{
public:
	::System::Reflection::MethodInfo* E55E31FD29E7B0F1; // 0x10

	::System::Void _ctor(::System::Reflection::MethodInfo* EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + BA382EB502630596_B5ED89A5E912F5DC__CTOR_OFFSET))(this, EA8FABEC6D125B33);
	}

	::System::Reflection::MethodInfo* B6960E1B6FD930B2()
	{
		return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BA382EB502630596_B5ED89A5E912F5DC_B6960E1B6FD930B2_OFFSET))(this);
	}
};
