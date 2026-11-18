#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define KLLAOIGBCPN___C_CDCGFBCABGP_OFFSET UNITYSDK_OFFSET(0x129A3B60)
#define KLLAOIGBCPN___C_ONKJGHGGMDE_OFFSET UNITYSDK_OFFSET(0x129A3B00)
#define KLLAOIGBCPN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129A3AB0)
#define KLLAOIGBCPN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x129A3AF0)

inline static constexpr unsigned int KLLAOIGBCPN___c_TypeDefinitionIndex = 79439;

class KLLAOIGBCPN___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__16_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KLLAOIGBCPN___c_TypeDefinitionIndex)->GetStaticField(0x41430);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KLLAOIGBCPN___c_TypeDefinitionIndex)->GetStaticField(0x41438);
	}
	static ::System::Func_1<::MoleMole::EntityHandle>** StaticGet___9__15_0()
	{
		return (::System::Func_1<::MoleMole::EntityHandle>**)Il2CppClass::FromTypeDefinitionIndex(KLLAOIGBCPN___c_TypeDefinitionIndex)->GetStaticField(0x41440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLLAOIGBCPN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLAOIGBCPN___C__CTOR_OFFSET))(this);
	}

	::System::String* ONKJGHGGMDE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLAOIGBCPN___C_ONKJGHGGMDE_OFFSET))(this);
	}

	::MoleMole::EntityHandle CDCGFBCABGP()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLAOIGBCPN___C_CDCGFBCABGP_OFFSET))(this);
	}
};
