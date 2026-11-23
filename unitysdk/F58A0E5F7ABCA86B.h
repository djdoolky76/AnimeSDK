#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E16F84B751D8EDF0/E93799C6E76029D0.h"
#include "unitysdk/System/Object.h"

#define F58A0E5F7ABCA86B__CCTOR_OFFSET UNITYSDK_OFFSET(0x3EA85A0)
#define F58A0E5F7ABCA86B__CTOR_OFFSET UNITYSDK_OFFSET(0x3EA8610)

inline static constexpr unsigned int F58A0E5F7ABCA86B_TypeDefinitionIndex = 15045;

class F58A0E5F7ABCA86B : public ::System::Object
{
public:
	static ::F58A0E5F7ABCA86B** StaticGet_ABFACF4B79951FBB()
	{
		return (::F58A0E5F7ABCA86B**)Il2CppClass::FromTypeDefinitionIndex(F58A0E5F7ABCA86B_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Boolean BEEAE43F8172F6C9; // 0x10
	::System::Byte _padding0[0x3];
	::E16F84B751D8EDF0::E93799C6E76029D0 F348785B6AC37076; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F58A0E5F7ABCA86B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F58A0E5F7ABCA86B__CCTOR_OFFSET))();
	}
};
