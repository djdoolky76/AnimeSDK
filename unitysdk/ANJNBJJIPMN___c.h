#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJAKGNFCOCK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define ANJNBJJIPMN___C_POCJFJFPKAC_OFFSET UNITYSDK_OFFSET(0x1D9ED320)
#define ANJNBJJIPMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9ED2D0)
#define ANJNBJJIPMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ED310)

inline static constexpr unsigned int ANJNBJJIPMN___c_TypeDefinitionIndex = 94225;

class ANJNBJJIPMN___c : public ::System::Object
{
public:
	static ::System::Func_2<::EJAKGNFCOCK*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::EJAKGNFCOCK*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ANJNBJJIPMN___c_TypeDefinitionIndex)->GetStaticField(0x52760);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ANJNBJJIPMN___c_TypeDefinitionIndex)->GetStaticField(0x52768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANJNBJJIPMN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJNBJJIPMN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 POCJFJFPKAC(::EJAKGNFCOCK* IMLLDOHDCNC)
	{
		return ((::System::Int32(*)(::PVOID, ::EJAKGNFCOCK*))((::PBYTE)hIl2Cpp + ANJNBJJIPMN___C_POCJFJFPKAC_OFFSET))(this, IMLLDOHDCNC);
	}
};
