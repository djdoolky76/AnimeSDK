#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CPEHDMDLPLM_HKAMMBBHENF_ECJKGKNHOGD_OFFSET UNITYSDK_OFFSET(0x19730F90)
#define CPEHDMDLPLM_HKAMMBBHENF__CTOR_OFFSET UNITYSDK_OFFSET(0x19730F80)

inline static constexpr unsigned int CPEHDMDLPLM_HKAMMBBHENF_TypeDefinitionIndex = 69639;

class CPEHDMDLPLM_HKAMMBBHENF : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::System::String*>* FPDLIIGJHKD; // 0x10
	::System::String* BJCBFDEBEGN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEHDMDLPLM_HKAMMBBHENF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ECJKGKNHOGD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEHDMDLPLM_HKAMMBBHENF_ECJKGKNHOGD_OFFSET))(this);
	}
};
