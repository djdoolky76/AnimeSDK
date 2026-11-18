#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IMFDDJCPHJI___C_GMDCMCJKNMP_OFFSET UNITYSDK_OFFSET(0x19888C50)
#define IMFDDJCPHJI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19888C00)
#define IMFDDJCPHJI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19888C40)

inline static constexpr unsigned int IMFDDJCPHJI___c_TypeDefinitionIndex = 67030;

class IMFDDJCPHJI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IMFDDJCPHJI___c_TypeDefinitionIndex)->GetStaticField(0x3B3F0);
	}
	static ::System::Action** StaticGet___9__10_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IMFDDJCPHJI___c_TypeDefinitionIndex)->GetStaticField(0x3B3F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMFDDJCPHJI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDDJCPHJI___C__CTOR_OFFSET))(this);
	}

	::System::Void GMDCMCJKNMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDDJCPHJI___C_GMDCMCJKNMP_OFFSET))(this);
	}
};
