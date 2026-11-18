#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PKOPDFHFMMI___C_LPHAHMHJGPP_OFFSET UNITYSDK_OFFSET(0x1D6303A0)
#define PKOPDFHFMMI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D630350)
#define PKOPDFHFMMI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D630390)

inline static constexpr unsigned int PKOPDFHFMMI___c_TypeDefinitionIndex = 66199;

class PKOPDFHFMMI___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__13_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PKOPDFHFMMI___c_TypeDefinitionIndex)->GetStaticField(0x363A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PKOPDFHFMMI___c_TypeDefinitionIndex)->GetStaticField(0x363A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKOPDFHFMMI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOPDFHFMMI___C__CTOR_OFFSET))(this);
	}

	::System::Void LPHAHMHJGPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOPDFHFMMI___C_LPHAHMHJGPP_OFFSET))(this);
	}
};
