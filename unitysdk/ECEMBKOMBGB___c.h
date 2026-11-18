#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ECEMBKOMBGB___C_BHNHAKEADKJ_OFFSET UNITYSDK_OFFSET(0x14140440)
#define ECEMBKOMBGB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1349ABC0)
#define ECEMBKOMBGB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14140430)

inline static constexpr unsigned int ECEMBKOMBGB___c_TypeDefinitionIndex = 77243;

class ECEMBKOMBGB___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__21_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ECEMBKOMBGB___c_TypeDefinitionIndex)->GetStaticField(0x374B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ECEMBKOMBGB___c_TypeDefinitionIndex)->GetStaticField(0x374B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECEMBKOMBGB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEMBKOMBGB___C__CTOR_OFFSET))(this);
	}

	::System::Void BHNHAKEADKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEMBKOMBGB___C_BHNHAKEADKJ_OFFSET))(this);
	}
};
