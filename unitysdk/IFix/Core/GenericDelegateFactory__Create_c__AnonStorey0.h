#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }

#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_C__ANONSTOREY0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AE4A0)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegateFactory__Create_c__AnonStorey0_TypeDefinitionIndex = 7130;

	class GenericDelegateFactory__Create_c__AnonStorey0 : public ::System::Object
	{
	public:
		::System::Type* delegateType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_C__ANONSTOREY0_CTOR_OFFSET))(this);
		}

	};
}
