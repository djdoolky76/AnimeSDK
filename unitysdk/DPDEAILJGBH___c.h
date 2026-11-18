#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DPDEAILJGBH___C_AOOBHACJAJL_OFFSET UNITYSDK_OFFSET(0x10F18AC0)
#define DPDEAILJGBH___C_JEJEBFDIEEE_OFFSET UNITYSDK_OFFSET(0x10F18AB0)
#define DPDEAILJGBH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F18A60)
#define DPDEAILJGBH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F18AA0)

inline static constexpr unsigned int DPDEAILJGBH___c_TypeDefinitionIndex = 83160;

class DPDEAILJGBH___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DPDEAILJGBH___c_TypeDefinitionIndex)->GetStaticField(0x3D9C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DPDEAILJGBH___c_TypeDefinitionIndex)->GetStaticField(0x3D9C8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DPDEAILJGBH___c_TypeDefinitionIndex)->GetStaticField(0x3D9D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPDEAILJGBH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDEAILJGBH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JEJEBFDIEEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDEAILJGBH___C_JEJEBFDIEEE_OFFSET))(this);
	}

	::System::Boolean AOOBHACJAJL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDEAILJGBH___C_AOOBHACJAJL_OFFSET))(this);
	}
};
