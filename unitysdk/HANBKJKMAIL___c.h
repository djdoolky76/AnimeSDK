#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHLOCKICGOJ;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HANBKJKMAIL___C_KENIGKEOAOD_OFFSET UNITYSDK_OFFSET(0x146D9FD0)
#define HANBKJKMAIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146D9F80)
#define HANBKJKMAIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x146D9FC0)

inline static constexpr unsigned int HANBKJKMAIL___c_TypeDefinitionIndex = 46753;

class HANBKJKMAIL___c : public ::System::Object
{
public:
	static ::System::Func_2<::MHLOCKICGOJ*, ::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::MHLOCKICGOJ*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HANBKJKMAIL___c_TypeDefinitionIndex)->GetStaticField(0x441C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HANBKJKMAIL___c_TypeDefinitionIndex)->GetStaticField(0x441C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANBKJKMAIL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANBKJKMAIL___C__CTOR_OFFSET))(this);
	}

	::System::String* KENIGKEOAOD(::MHLOCKICGOJ* HMMMOCJAEOA)
	{
		return ((::System::String*(*)(::PVOID, ::MHLOCKICGOJ*))((::PBYTE)hIl2Cpp + HANBKJKMAIL___C_KENIGKEOAOD_OFFSET))(this, HMMMOCJAEOA);
	}
};
