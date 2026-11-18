#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class ITypeErasedCompletionSource; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EB0520)
#define MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13EB0560)
#define MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C___CCTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x13EB0570)
#define MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C___CCTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0x13EB0640)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int AutoResetTaskBasedEventPayload___c_TypeDefinitionIndex = 75414;

	class AutoResetTaskBasedEventPayload___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AutoResetTaskBasedEventPayload___c_TypeDefinitionIndex)->GetStaticField(0x4C610);
		}
		static ::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>** StaticGet___9__1_1()
		{
			return (::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>**)Il2CppClass::FromTypeDefinitionIndex(AutoResetTaskBasedEventPayload___c_TypeDefinitionIndex)->GetStaticField(0x4C618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C__CTOR_OFFSET))(this);
		}

		::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>* __cctor_b__1_0()
		{
			return ((::System::Func_1<::MoleMole::Utils::ITypeErasedCompletionSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C___CCTOR_B__1_0_OFFSET))(this);
		}

		::MoleMole::Utils::ITypeErasedCompletionSource* __cctor_b__1_1()
		{
			return ((::MoleMole::Utils::ITypeErasedCompletionSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_AUTORESETTASKBASEDEVENTPAYLOAD___C___CCTOR_B__1_1_OFFSET))(this);
		}
	};
}
