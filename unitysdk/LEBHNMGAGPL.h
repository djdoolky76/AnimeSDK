#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define LEBHNMGAGPL_LBCLKFCPJCE_OFFSET UNITYSDK_OFFSET(0x15246A80)
#define LEBHNMGAGPL__CTOR_OFFSET UNITYSDK_OFFSET(0x15246A70)

inline static constexpr unsigned int LEBHNMGAGPL_TypeDefinitionIndex = 42828;

class LEBHNMGAGPL : public ::System::Attribute
{
public:
	::Il2CppArray<::System::String*>* _EFPHGNGOAJP_k__BackingField; // 0x10

	::System::Void _ctor(::Il2CppArray<::System::String*>* DJGONKEIBAG)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + LEBHNMGAGPL__CTOR_OFFSET))(this, DJGONKEIBAG);
	}

	::Il2CppArray<::System::String*>* LBCLKFCPJCE()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBHNMGAGPL_LBCLKFCPJCE_OFFSET))(this);
	}
};
