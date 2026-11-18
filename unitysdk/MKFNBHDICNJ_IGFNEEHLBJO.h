#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDGDIFDMIDP;
class LHKMKCIPOLD;
class MKFNBHDICNJ;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MKFNBHDICNJ_IGFNEEHLBJO_KNBMDIAHPPA_OFFSET UNITYSDK_OFFSET(0x10774990)
#define MKFNBHDICNJ_IGFNEEHLBJO__CTOR_OFFSET UNITYSDK_OFFSET(0x10774980)

inline static constexpr unsigned int MKFNBHDICNJ_IGFNEEHLBJO_TypeDefinitionIndex = 61390;

class MKFNBHDICNJ_IGFNEEHLBJO : public ::System::Object
{
public:
	::IDGDIFDMIDP* AJAAEBEOIJM; // 0x10
	::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::LHKMKCIPOLD*>*>* KKPLABMMAII; // 0x18
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_IGFNEEHLBJO__CTOR_OFFSET))(this);
	}

	::System::Void KNBMDIAHPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_IGFNEEHLBJO_KNBMDIAHPPA_OFFSET))(this);
	}
};
