#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LIOEJEHAKEN___C_LDKKFDGCEEP_OFFSET UNITYSDK_OFFSET(0x1CCC4620)
#define LIOEJEHAKEN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCC45D0)
#define LIOEJEHAKEN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC4610)

inline static constexpr unsigned int LIOEJEHAKEN___c_TypeDefinitionIndex = 93411;

class LIOEJEHAKEN___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::String*>** StaticGet___9__11_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LIOEJEHAKEN___c_TypeDefinitionIndex)->GetStaticField(0x52560);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LIOEJEHAKEN___c_TypeDefinitionIndex)->GetStaticField(0x52568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIOEJEHAKEN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOEJEHAKEN___C__CTOR_OFFSET))(this);
	}

	::System::Void LDKKFDGCEEP(::System::String* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LIOEJEHAKEN___C_LDKKFDGCEEP_OFFSET))(this, BHDNBGLCNOM);
	}
};
