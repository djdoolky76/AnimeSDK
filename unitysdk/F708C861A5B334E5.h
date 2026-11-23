#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A3CCA0A0334A3241.h"
#include "unitysdk/A4E9EFADAA3978D2.h"
#include "unitysdk/E68AA4EB51923C98/FA6E03671639669F.h"
#include "unitysdk/F52D7D0423C392F6/E897A7ADC8D7067E.h"

class B3F7EF5F0D6EE64F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F708C861A5B334E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1E13800)

inline static constexpr unsigned int F708C861A5B334E5_TypeDefinitionIndex = 9412;

class F708C861A5B334E5 : public ::A3CCA0A0334A3241
{
public:
	::F52D7D0423C392F6::E897A7ADC8D7067E F470EEE9DD393A9F; // 0x18
	::E68AA4EB51923C98::FA6E03671639669F B71DB94CCECA26C4; // 0x1C
	::A4E9EFADAA3978D2 E5770E2D3D0E04AD; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::B3F7EF5F0D6EE64F*>* F0AF97BF9169E093; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::B3F7EF5F0D6EE64F*>* AC42EF8E4310C778; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F708C861A5B334E5__CTOR_OFFSET))(this);
	}
};
