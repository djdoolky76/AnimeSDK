#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EEDJOGLJBLF_NPMKFMOCPHK_DGLLICGIELP_OFFSET UNITYSDK_OFFSET(0x148CD8E0)
#define EEDJOGLJBLF_NPMKFMOCPHK__CTOR_OFFSET UNITYSDK_OFFSET(0x148CD8D0)

inline static constexpr unsigned int EEDJOGLJBLF_NPMKFMOCPHK_TypeDefinitionIndex = 91477;

class EEDJOGLJBLF_NPMKFMOCPHK : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* CBENGCCGOGA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDJOGLJBLF_NPMKFMOCPHK__CTOR_OFFSET))(this);
	}

	::System::Void DGLLICGIELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDJOGLJBLF_NPMKFMOCPHK_DGLLICGIELP_OFFSET))(this);
	}
};
