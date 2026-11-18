#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define LKDEDEJHLOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x753190)
#define LKDEDEJHLOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x753290)
#define LKDEDEJHLOA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1519C7F0)

inline static constexpr unsigned int LKDEDEJHLOA_TypeDefinitionIndex = 45910;

struct alignas(4) LKDEDEJHLOA
{
	static ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::InputActionEvent>** StaticGet_DDGNFJDLOKA()
	{
		return (::System::Collections::Generic::IEqualityComparer_1<::MoleMole::InputActionEvent>**)Il2CppClass::FromTypeDefinitionIndex(LKDEDEJHLOA_TypeDefinitionIndex)->GetStaticField(0x44DE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKDEDEJHLOA__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::MoleMole::InputActionEvent HAAEBCOBKFF, ::MoleMole::InputActionEvent BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + LKDEDEJHLOA_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::MoleMole::InputActionEvent EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + LKDEDEJHLOA_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
