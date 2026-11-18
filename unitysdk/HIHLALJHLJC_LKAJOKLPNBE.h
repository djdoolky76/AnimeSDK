#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherEntry.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherV2Entry.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HIHLALJHLJC_LKAJOKLPNBE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D300D0)

inline static constexpr unsigned int HIHLALJHLJC_LKAJOKLPNBE_TypeDefinitionIndex = 87563;

class HIHLALJHLJC_LKAJOKLPNBE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicOverrideWeatherEntry>* FCHCMMDLOEH; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicOverrideWeatherV2Entry>* MPECPLKPMKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHLALJHLJC_LKAJOKLPNBE__CTOR_OFFSET))(this);
	}
};
