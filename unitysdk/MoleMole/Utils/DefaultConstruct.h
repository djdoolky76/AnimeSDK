#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_UTILS_DEFAULTCONSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FC4AC0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int DefaultConstruct_TypeDefinitionIndex = 46842;

	struct alignas(4) DefaultConstruct
	{
		static ::MoleMole::Utils::DefaultConstruct* StaticGet_Ins()
		{
			return (::MoleMole::Utils::DefaultConstruct*)Il2CppClass::FromTypeDefinitionIndex(DefaultConstruct_TypeDefinitionIndex)->GetStaticField(0x10690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_DEFAULTCONSTRUCT__CCTOR_OFFSET))();
		}
	};
}
