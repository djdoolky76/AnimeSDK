#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class ParameterInfo; }

#define BHMAABAEOFO___C_ELNGIOIPIOD_OFFSET UNITYSDK_OFFSET(0x1EF4C5E0)
#define BHMAABAEOFO___C_IGDJIJFIANB_OFFSET UNITYSDK_OFFSET(0x1EF4C580)
#define BHMAABAEOFO___C_JHEBNFFBMIM_OFFSET UNITYSDK_OFFSET(0x1EF4C610)
#define BHMAABAEOFO___C_NOAJBMFHDFA_OFFSET UNITYSDK_OFFSET(0x1EF4C670)
#define BHMAABAEOFO___C_PDAMIPFFIKP_OFFSET UNITYSDK_OFFSET(0x1EF4C6A0)
#define BHMAABAEOFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF4C530)
#define BHMAABAEOFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4C570)

inline static constexpr unsigned int BHMAABAEOFO___c_TypeDefinitionIndex = 30145;

class BHMAABAEOFO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BHMAABAEOFO___c_TypeDefinitionIndex)->GetStaticField(0x26160);
	}
	static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__125_0()
	{
		return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BHMAABAEOFO___c_TypeDefinitionIndex)->GetStaticField(0x26168);
	}
	static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__34_1()
	{
		return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BHMAABAEOFO___c_TypeDefinitionIndex)->GetStaticField(0x26170);
	}
	static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__101_0()
	{
		return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(BHMAABAEOFO___c_TypeDefinitionIndex)->GetStaticField(0x26178);
	}
	static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__34_0()
	{
		return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BHMAABAEOFO___c_TypeDefinitionIndex)->GetStaticField(0x26180);
	}
	static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__109_0()
	{
		return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(BHMAABAEOFO___c_TypeDefinitionIndex)->GetStaticField(0x26188);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHMAABAEOFO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMAABAEOFO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean IGDJIJFIANB(::System::Reflection::ConstructorInfo* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + BHMAABAEOFO___C_IGDJIJFIANB_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::String* ELNGIOIPIOD(::System::Type* IMLLDOHDCNC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BHMAABAEOFO___C_ELNGIOIPIOD_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::String* JHEBNFFBMIM(::System::Type* IMLLDOHDCNC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BHMAABAEOFO___C_JHEBNFFBMIM_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Type* NOAJBMFHDFA(::System::Reflection::ParameterInfo* JNDDJMAHNAI)
	{
		return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + BHMAABAEOFO___C_NOAJBMFHDFA_OFFSET))(this, JNDDJMAHNAI);
	}

	::System::Type* PDAMIPFFIKP(::System::Reflection::ParameterInfo* JNDDJMAHNAI)
	{
		return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + BHMAABAEOFO___C_PDAMIPFFIKP_OFFSET))(this, JNDDJMAHNAI);
	}
};
