#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define BKBGCNNEFDK___C_EAILEKDGHOA_OFFSET UNITYSDK_OFFSET(0x18571EA0)
#define BKBGCNNEFDK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18571E50)
#define BKBGCNNEFDK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18571E90)

inline static constexpr unsigned int BKBGCNNEFDK___c_TypeDefinitionIndex = 77676;

class BKBGCNNEFDK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BKBGCNNEFDK___c_TypeDefinitionIndex)->GetStaticField(0x36EF0);
	}
	static ::System::Action_1<::System::Object*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BKBGCNNEFDK___c_TypeDefinitionIndex)->GetStaticField(0x36EF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKBGCNNEFDK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBGCNNEFDK___C__CTOR_OFFSET))(this);
	}

	::System::Void EAILEKDGHOA(::System::Object* EMIKCAHJLGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKBGCNNEFDK___C_EAILEKDGHOA_OFFSET))(this, EMIKCAHJLGB);
	}
};
