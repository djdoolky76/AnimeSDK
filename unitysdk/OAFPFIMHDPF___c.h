#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFGPBFNCFJE;
namespace System { template <typename T> class Action_1; }

#define OAFPFIMHDPF___C_HGNIEBLKGJE_OFFSET UNITYSDK_OFFSET(0x13A41F30)
#define OAFPFIMHDPF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A41EE0)
#define OAFPFIMHDPF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A41F20)

inline static constexpr unsigned int OAFPFIMHDPF___c_TypeDefinitionIndex = 75077;

class OAFPFIMHDPF___c : public ::System::Object
{
public:
	static ::System::Action_1<::IFGPBFNCFJE*>** StaticGet___9__14_0()
	{
		return (::System::Action_1<::IFGPBFNCFJE*>**)Il2CppClass::FromTypeDefinitionIndex(OAFPFIMHDPF___c_TypeDefinitionIndex)->GetStaticField(0x47750);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OAFPFIMHDPF___c_TypeDefinitionIndex)->GetStaticField(0x47758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAFPFIMHDPF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPFIMHDPF___C__CTOR_OFFSET))(this);
	}

	::System::Void HGNIEBLKGJE(::IFGPBFNCFJE* BCOANELOPAC)
	{
		return ((::System::Void(*)(::PVOID, ::IFGPBFNCFJE*))((::PBYTE)hIl2Cpp + OAFPFIMHDPF___C_HGNIEBLKGJE_OFFSET))(this, BCOANELOPAC);
	}
};
