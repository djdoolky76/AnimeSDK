#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace IFix::Core { class GenericDelegate; }
namespace System { class Delegate; }
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_C__ANONSTOREY1_CTOR_OFFSET UNITYSDK_OFFSET(0x1B99D990)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_C__ANONSTOREY1___M__0_OFFSET UNITYSDK_OFFSET(0x1B99DFD0)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegateFactory__Create_c__AnonStorey1_TypeDefinitionIndex = 7120;

	class GenericDelegateFactory__Create_c__AnonStorey1 : public ::System::Object
	{
	public:
		::System::Object* __f__ref_0; // 0x10
		::System::Reflection::MethodInfo* methodInfo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_C__ANONSTOREY1_CTOR_OFFSET))(this);
		}

		::System::Delegate* __m__0(::IFix::Core::GenericDelegate* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::IFix::Core::GenericDelegate*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_C__ANONSTOREY1___M__0_OFFSET))(this, a1);
		}

	};
}
