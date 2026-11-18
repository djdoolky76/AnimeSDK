#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDMBLECMCHK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TimelineBindingType.h"

namespace System { class String; }

#define MOLEMOLE_CGRUNTIMEREFERENCE_GET_ISPART_OFFSET UNITYSDK_OFFSET(0x127575F0)
#define MOLEMOLE_CGRUNTIMEREFERENCE_PBOGBCNBCDK_OFFSET UNITYSDK_OFFSET(0x127576E0)
#define MOLEMOLE_CGRUNTIMEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12757690)

namespace MoleMole
{
	inline static constexpr unsigned int CGRuntimeReference_TypeDefinitionIndex = 92711;

	class CGRuntimeReference : public ::System::Object
	{
	public:
		::System::String* RelatePath; // 0x10
		::System::String* trackGuid; // 0x18
		::EDMBLECMCHK bindType; // 0x20
		::TimelineBindingType BindType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEREFERENCE_GET_ISPART_OFFSET))(this);
		}

		::TimelineBindingType PBOGBCNBCDK()
		{
			return ((::TimelineBindingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEREFERENCE_PBOGBCNBCDK_OFFSET))(this);
		}
	};
}
