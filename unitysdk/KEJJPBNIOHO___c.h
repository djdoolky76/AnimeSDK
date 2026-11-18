#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KEJJPBNIOHO;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KEJJPBNIOHO___C_FDEBAEMBJJL_OFFSET UNITYSDK_OFFSET(0x1FAA6A00)
#define KEJJPBNIOHO___C_PCFDKCMLOFC_OFFSET UNITYSDK_OFFSET(0x1FAA69A0)
#define KEJJPBNIOHO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA6950)
#define KEJJPBNIOHO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA6990)

inline static constexpr unsigned int KEJJPBNIOHO___c_TypeDefinitionIndex = 18138;

class KEJJPBNIOHO___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__38_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KEJJPBNIOHO___c_TypeDefinitionIndex)->GetStaticField(0x8660);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KEJJPBNIOHO___c_TypeDefinitionIndex)->GetStaticField(0x8668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEJJPBNIOHO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJJPBNIOHO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean PCFDKCMLOFC(::System::String* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEJJPBNIOHO___C_PCFDKCMLOFC_OFFSET))(this, JNDDJMAHNAI);
	}

	::KEJJPBNIOHO* FDEBAEMBJJL()
	{
		return ((::KEJJPBNIOHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJJPBNIOHO___C_FDEBAEMBJJL_OFFSET))(this);
	}
};
