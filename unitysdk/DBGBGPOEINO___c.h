#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DBGBGPOEINO___C_JMFPMMHFHOL_OFFSET UNITYSDK_OFFSET(0x132853E0)
#define DBGBGPOEINO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13285390)
#define DBGBGPOEINO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x132853D0)

inline static constexpr unsigned int DBGBGPOEINO___c_TypeDefinitionIndex = 70440;

class DBGBGPOEINO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DBGBGPOEINO___c_TypeDefinitionIndex)->GetStaticField(0x3A7D0);
	}
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DBGBGPOEINO___c_TypeDefinitionIndex)->GetStaticField(0x3A7D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBGBGPOEINO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGBGPOEINO___C__CTOR_OFFSET))(this);
	}

	::System::Void JMFPMMHFHOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGBGPOEINO___C_JMFPMMHFHOL_OFFSET))(this);
	}
};
