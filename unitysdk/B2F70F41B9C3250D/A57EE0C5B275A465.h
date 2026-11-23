#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }

#define B2F70F41B9C3250D_A57EE0C5B275A465_A1BF9DF65635117B_OFFSET UNITYSDK_OFFSET(0x41250A0)
#define B2F70F41B9C3250D_A57EE0C5B275A465__CTOR_1_OFFSET UNITYSDK_OFFSET(0x41251C0)
#define B2F70F41B9C3250D_A57EE0C5B275A465__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace B2F70F41B9C3250D
{
	inline static constexpr unsigned int A57EE0C5B275A465_TypeDefinitionIndex = 17164;

	class A57EE0C5B275A465 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2F70F41B9C3250D_A57EE0C5B275A465__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* F249A74E7BFBE1A7, ::System::Reflection::MethodInfo* BE5D528CEDDF4738)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + B2F70F41B9C3250D_A57EE0C5B275A465__CTOR_1_OFFSET))(this, F249A74E7BFBE1A7, BE5D528CEDDF4738);
		}

		static ::System::Boolean A1BF9DF65635117B(::System::Delegate* BC5712FD34D5E22C)
		{
			return ((::System::Boolean(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + B2F70F41B9C3250D_A57EE0C5B275A465_A1BF9DF65635117B_OFFSET))(BC5712FD34D5E22C);
		}
	};
}
