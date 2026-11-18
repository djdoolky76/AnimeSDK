#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class GenericDelegate; }
namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_GENERICDELEGATEFACTORY___C__DISPLAYCLASS4_2__CREATE_B__8_OFFSET UNITYSDK_OFFSET(0x1E414F00)
#define IFIX_CORE_GENERICDELEGATEFACTORY___C__DISPLAYCLASS4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E414B80)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegateFactory___c__DisplayClass4_2_TypeDefinitionIndex = 6943;

	template <typename T1, typename T2>
	class GenericDelegateFactory___c__DisplayClass4_2 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* methodInfo; // 0x10
		::System::Object* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__DISPLAYCLASS4_2__CTOR_OFFSET))(this);
		}

		::System::Delegate* _Create_b__8(::IFix::Core::GenericDelegate* o)
		{
			return ((::System::Delegate*(*)(::PVOID, ::IFix::Core::GenericDelegate*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__DISPLAYCLASS4_2__CREATE_B__8_OFFSET))(this, o);
		}
	};
}
