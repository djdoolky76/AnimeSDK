#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SearchFilterOptions.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_SEARCHABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB81880)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int SearchableAttribute_TypeDefinitionIndex = 7361;

	class SearchableAttribute : public ::System::Attribute
	{
	public:
		::Sirenix::OdinInspector::SearchFilterOptions FilterOptions; // 0x10
		::System::Boolean FuzzySearch; // 0x14
		::System::Boolean Recursive; // 0x15
		::System::Boolean SmartFuzzySearch; // 0x16
		::System::Boolean IgnoreCaseWhenExactMatch; // 0x17

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SEARCHABLEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
