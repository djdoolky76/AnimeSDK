#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F5332973C906716E;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define FA527E1464D52311_AB8E957E26FCBC3B_OFFSET UNITYSDK_OFFSET(0x23D51E0)
#define FA527E1464D52311_E1CACCAA7FD16850_OFFSET UNITYSDK_OFFSET(0x23D5330)

inline static constexpr unsigned int FA527E1464D52311_TypeDefinitionIndex = 3790;

class FA527E1464D52311 : public ::System::Object
{
public:
	static ::System::Action_2<::System::String*, ::System::String*>** StaticGet_EFA814D741BC353A()
	{
		return (::System::Action_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FA527E1464D52311_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::F5332973C906716E** StaticGet_EDA9EF7AB70F2EDE()
	{
		return (::F5332973C906716E**)Il2CppClass::FromTypeDefinitionIndex(FA527E1464D52311_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void E1CACCAA7FD16850()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FA527E1464D52311_E1CACCAA7FD16850_OFFSET))();
	}

	static ::System::UInt32 AB8E957E26FCBC3B()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + FA527E1464D52311_AB8E957E26FCBC3B_OFFSET))();
	}
};
