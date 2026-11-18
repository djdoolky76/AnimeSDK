#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EKDEHCOJMPA___C_PEKODFNLGIH_OFFSET UNITYSDK_OFFSET(0x10643FA0)
#define EKDEHCOJMPA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10643F50)
#define EKDEHCOJMPA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10643F90)

inline static constexpr unsigned int EKDEHCOJMPA___c_TypeDefinitionIndex = 79764;

class EKDEHCOJMPA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EKDEHCOJMPA___c_TypeDefinitionIndex)->GetStaticField(0x40720);
	}
	static ::System::Action** StaticGet___9__31_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EKDEHCOJMPA___c_TypeDefinitionIndex)->GetStaticField(0x40728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKDEHCOJMPA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDEHCOJMPA___C__CTOR_OFFSET))(this);
	}

	::System::Void PEKODFNLGIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDEHCOJMPA___C_PEKODFNLGIH_OFFSET))(this);
	}
};
