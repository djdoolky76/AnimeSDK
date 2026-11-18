#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EODOEJJLHMH___C_FJGHOMKEJIG_OFFSET UNITYSDK_OFFSET(0x169B2F80)
#define EODOEJJLHMH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169B2F30)
#define EODOEJJLHMH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169B2F70)

inline static constexpr unsigned int EODOEJJLHMH___c_TypeDefinitionIndex = 57632;

class EODOEJJLHMH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EODOEJJLHMH___c_TypeDefinitionIndex)->GetStaticField(0x4B860);
	}
	static ::System::Action** StaticGet___9__4_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EODOEJJLHMH___c_TypeDefinitionIndex)->GetStaticField(0x4B868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EODOEJJLHMH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODOEJJLHMH___C__CTOR_OFFSET))(this);
	}

	::System::Void FJGHOMKEJIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EODOEJJLHMH___C_FJGHOMKEJIG_OFFSET))(this);
	}
};
