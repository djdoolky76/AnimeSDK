#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HJDNNLKBHBA;
namespace System { template <typename T> class Action_1; }

#define IMEONOKIAHE___C_NJKHJBAENEN_OFFSET UNITYSDK_OFFSET(0x197DCC40)
#define IMEONOKIAHE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197DCBF0)
#define IMEONOKIAHE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197DCC30)

inline static constexpr unsigned int IMEONOKIAHE___c_TypeDefinitionIndex = 73984;

class IMEONOKIAHE___c : public ::System::Object
{
public:
	static ::System::Action_1<::HJDNNLKBHBA*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::HJDNNLKBHBA*>**)Il2CppClass::FromTypeDefinitionIndex(IMEONOKIAHE___c_TypeDefinitionIndex)->GetStaticField(0x3B3E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IMEONOKIAHE___c_TypeDefinitionIndex)->GetStaticField(0x3B3E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMEONOKIAHE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEONOKIAHE___C__CTOR_OFFSET))(this);
	}

	::System::Void NJKHJBAENEN(::HJDNNLKBHBA* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + IMEONOKIAHE___C_NJKHJBAENEN_OFFSET))(this, POBADKEDFOE);
	}
};
