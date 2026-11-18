#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GPPMPHICDEA_FIDNFBFKJCH_BLFJJIBKKCJ_OFFSET UNITYSDK_OFFSET(0x146D6BE0)
#define GPPMPHICDEA_FIDNFBFKJCH_KCBOOJDPHNH_OFFSET UNITYSDK_OFFSET(0x146D67E0)
#define GPPMPHICDEA_FIDNFBFKJCH__CTOR_OFFSET UNITYSDK_OFFSET(0x146D67D0)

inline static constexpr unsigned int GPPMPHICDEA_FIDNFBFKJCH_TypeDefinitionIndex = 42644;

class GPPMPHICDEA_FIDNFBFKJCH : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* JHNKGIDLPCK; // 0x10
	::System::Action* GKOFMEAFPLD; // 0x18
	::System::Action* AAOOHOAAKIM; // 0x20
	::System::Int64 BAONHFIEKCG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FIDNFBFKJCH__CTOR_OFFSET))(this);
	}

	::System::Void KCBOOJDPHNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FIDNFBFKJCH_KCBOOJDPHNH_OFFSET))(this);
	}

	::System::Void BLFJJIBKKCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FIDNFBFKJCH_BLFJJIBKKCJ_OFFSET))(this);
	}
};
