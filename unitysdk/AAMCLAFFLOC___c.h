#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AAMCLAFFLOC___C_JMCECBJEGHJ_OFFSET UNITYSDK_OFFSET(0x14209920)
#define AAMCLAFFLOC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142098D0)
#define AAMCLAFFLOC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14209910)

inline static constexpr unsigned int AAMCLAFFLOC___c_TypeDefinitionIndex = 78483;

class AAMCLAFFLOC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AAMCLAFFLOC___c_TypeDefinitionIndex)->GetStaticField(0x47AE0);
	}
	static ::System::Action** StaticGet___9__3_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AAMCLAFFLOC___c_TypeDefinitionIndex)->GetStaticField(0x47AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAMCLAFFLOC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMCLAFFLOC___C__CTOR_OFFSET))(this);
	}

	::System::Void JMCECBJEGHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMCLAFFLOC___C_JMCECBJEGHJ_OFFSET))(this);
	}
};
