#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FHAOLNJJMCO___C_CNGIHBKGNLA_OFFSET UNITYSDK_OFFSET(0x15E5FCB0)
#define FHAOLNJJMCO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E5FC60)
#define FHAOLNJJMCO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5FCA0)

inline static constexpr unsigned int FHAOLNJJMCO___c_TypeDefinitionIndex = 85740;

class FHAOLNJJMCO___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FHAOLNJJMCO___c_TypeDefinitionIndex)->GetStaticField(0x31940);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FHAOLNJJMCO___c_TypeDefinitionIndex)->GetStaticField(0x31948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHAOLNJJMCO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAOLNJJMCO___C__CTOR_OFFSET))(this);
	}

	::System::Void CNGIHBKGNLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAOLNJJMCO___C_CNGIHBKGNLA_OFFSET))(this);
	}
};
