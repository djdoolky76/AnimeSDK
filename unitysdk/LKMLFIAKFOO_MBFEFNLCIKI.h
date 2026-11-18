#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LKMLFIAKFOO_HCCHIABLMBI;
class PLPHBLLCFBF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKMLFIAKFOO_MBFEFNLCIKI_MDNEMNIGPIK_OFFSET UNITYSDK_OFFSET(0x12D39230)
#define LKMLFIAKFOO_MBFEFNLCIKI__CTOR_OFFSET UNITYSDK_OFFSET(0x12D39AC0)

inline static constexpr unsigned int LKMLFIAKFOO_MBFEFNLCIKI_TypeDefinitionIndex = 43611;

class LKMLFIAKFOO_MBFEFNLCIKI : public ::System::Object
{
public:
	::LKMLFIAKFOO_HCCHIABLMBI* FGBNBFHOKAA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PLPHBLLCFBF*>* ELHEFOKAHIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_MBFEFNLCIKI__CTOR_OFFSET))(this);
	}

	::System::Void MDNEMNIGPIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_MBFEFNLCIKI_MDNEMNIGPIK_OFFSET))(this);
	}
};
