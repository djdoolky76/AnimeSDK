#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F5B84E36D3E135DD;
class FB0F15E1263102F9;

#define F9199225A2EB5F55__CCTOR_OFFSET UNITYSDK_OFFSET(0x4427380)
#define F9199225A2EB5F55__CTOR_OFFSET UNITYSDK_OFFSET(0x4427410)

inline static constexpr unsigned int F9199225A2EB5F55_TypeDefinitionIndex = 18955;

class F9199225A2EB5F55 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_F199737DE5C4990B()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(F9199225A2EB5F55_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::F5B84E36D3E135DD* ABE73C9C5802D554; // 0x10
	::FB0F15E1263102F9* BF071AC05110C5D4; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F9199225A2EB5F55__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9199225A2EB5F55__CTOR_OFFSET))(this);
	}
};
