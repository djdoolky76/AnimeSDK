#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FInstancedStructContainer.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8ED020)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8ED040)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x359860)

namespace UnrealTypes
{
	inline static constexpr unsigned int FInstancedStructContainer_Enumerator_TypeDefinitionIndex = 27833;

	struct alignas(4) FInstancedStructContainer_Enumerator
	{
		::UnrealTypes::FInstancedStructContainer _container; // 0x10
		::System::Int32 _index; // 0x28

		/*
		::System::Void _ctor(::UnrealTypes::FInstancedStructContainer& container)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedStructContainer&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ENUMERATOR__CTOR_OFFSET))(this, container);
		}
		*/

		::UnrealTypes::FStructView get_Current()
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}
	};
}
