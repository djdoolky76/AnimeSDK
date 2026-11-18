#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
class GKNGGHDFOIE;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define JPCGPOKPEOG___C_GBOFCCOPJHH_OFFSET UNITYSDK_OFFSET(0x1C373E40)
#define JPCGPOKPEOG___C_OFBBKPFKDBO_OFFSET UNITYSDK_OFFSET(0x1C373DE0)
#define JPCGPOKPEOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C373D90)
#define JPCGPOKPEOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C373DD0)

inline static constexpr unsigned int JPCGPOKPEOG___c_TypeDefinitionIndex = 45829;

class JPCGPOKPEOG___c : public ::System::Object
{
public:
	static ::System::Action_2<::GKNGGHDFOIE*, ::GEIHCPAOKKK*>** StaticGet___9__42_1()
	{
		return (::System::Action_2<::GKNGGHDFOIE*, ::GEIHCPAOKKK*>**)Il2CppClass::FromTypeDefinitionIndex(JPCGPOKPEOG___c_TypeDefinitionIndex)->GetStaticField(0x49FF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JPCGPOKPEOG___c_TypeDefinitionIndex)->GetStaticField(0x49FF8);
	}
	static ::System::Action_1<::GKNGGHDFOIE*>** StaticGet___9__42_0()
	{
		return (::System::Action_1<::GKNGGHDFOIE*>**)Il2CppClass::FromTypeDefinitionIndex(JPCGPOKPEOG___c_TypeDefinitionIndex)->GetStaticField(0x4A000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPCGPOKPEOG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCGPOKPEOG___C__CTOR_OFFSET))(this);
	}

	::System::Void OFBBKPFKDBO(::GKNGGHDFOIE* EHBNDLOBLNN)
	{
		return ((::System::Void(*)(::PVOID, ::GKNGGHDFOIE*))((::PBYTE)hIl2Cpp + JPCGPOKPEOG___C_OFBBKPFKDBO_OFFSET))(this, EHBNDLOBLNN);
	}

	::System::Void GBOFCCOPJHH(::GKNGGHDFOIE* EHBNDLOBLNN, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::GKNGGHDFOIE*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + JPCGPOKPEOG___C_GBOFCCOPJHH_OFFSET))(this, EHBNDLOBLNN, OHPJHPEOFLD);
	}
};
