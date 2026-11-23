#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A82320507625B3ED.h"

namespace System { class String; }

#define F0ED5E7943333EE7__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D3C640)

inline static constexpr unsigned int F0ED5E7943333EE7_TypeDefinitionIndex = 10967;

class F0ED5E7943333EE7 : public ::A82320507625B3ED
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_E14D19E6A9D78496()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(F0ED5E7943333EE7_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F0ED5E7943333EE7__CCTOR_OFFSET))();
	}
};
