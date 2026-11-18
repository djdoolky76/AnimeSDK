#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBGFGHCLCGE_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x18549C20)
#define BBGFGHCLCGE_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x18549DB0)
#define BBGFGHCLCGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18549CB0)

inline static constexpr unsigned int BBGFGHCLCGE_TypeDefinitionIndex = 75362;

class BBGFGHCLCGE : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* OJMIDFNDHBG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGFGHCLCGE__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGFGHCLCGE_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGFGHCLCGE_KHJELIBOECB_OFFSET))(this);
	}
};
