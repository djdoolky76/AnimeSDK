#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LOCALAPPCONTEXTSWITCHES_C4B00FE92FCD83DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFBF710)

namespace System
{
	inline static constexpr unsigned int LocalAppContextSwitches_C4B00FE92FCD83DE_TypeDefinitionIndex = 2695;

	class LocalAppContextSwitches_C4B00FE92FCD83DE : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_MemberDescriptorEqualsReturnsFalseIfEquivalent()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LocalAppContextSwitches_C4B00FE92FCD83DE_TypeDefinitionIndex)->GetStaticField(0x1400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LOCALAPPCONTEXTSWITCHES_C4B00FE92FCD83DE__CCTOR_OFFSET))();
		}
	};
}
