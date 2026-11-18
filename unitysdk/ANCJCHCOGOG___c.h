#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBAJDDCOJJN;
namespace System { template <typename T> class Action_1; }

#define ANCJCHCOGOG___C_KNOLKOGCDHB_OFFSET UNITYSDK_OFFSET(0x1266D1E0)
#define ANCJCHCOGOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1266D190)
#define ANCJCHCOGOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1266D1D0)

inline static constexpr unsigned int ANCJCHCOGOG___c_TypeDefinitionIndex = 62515;

class ANCJCHCOGOG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ANCJCHCOGOG___c_TypeDefinitionIndex)->GetStaticField(0x30AF0);
	}
	static ::System::Action_1<::MBAJDDCOJJN*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::MBAJDDCOJJN*>**)Il2CppClass::FromTypeDefinitionIndex(ANCJCHCOGOG___c_TypeDefinitionIndex)->GetStaticField(0x30AF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANCJCHCOGOG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCJCHCOGOG___C__CTOR_OFFSET))(this);
	}

	::System::Void KNOLKOGCDHB(::MBAJDDCOJJN* OBOOCDDHCJH)
	{
		return ((::System::Void(*)(::PVOID, ::MBAJDDCOJJN*))((::PBYTE)hIl2Cpp + ANCJCHCOGOG___C_KNOLKOGCDHB_OFFSET))(this, OBOOCDDHCJH);
	}
};
