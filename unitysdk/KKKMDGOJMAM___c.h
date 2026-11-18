#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define KKKMDGOJMAM___C_OAHFCCIBHMD_OFFSET UNITYSDK_OFFSET(0x157F35A0)
#define KKKMDGOJMAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157F3550)
#define KKKMDGOJMAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157F3590)

inline static constexpr unsigned int KKKMDGOJMAM___c_TypeDefinitionIndex = 76016;

class KKKMDGOJMAM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KKKMDGOJMAM___c_TypeDefinitionIndex)->GetStaticField(0x38290);
	}
	static ::System::Action** StaticGet___9__5_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(KKKMDGOJMAM___c_TypeDefinitionIndex)->GetStaticField(0x38298);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKKMDGOJMAM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKMDGOJMAM___C__CTOR_OFFSET))(this);
	}

	::System::Void OAHFCCIBHMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKMDGOJMAM___C_OAHFCCIBHMD_OFFSET))(this);
	}
};
