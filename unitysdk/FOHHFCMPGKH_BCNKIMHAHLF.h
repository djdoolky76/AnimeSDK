#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FOHHFCMPGKH_BCNKIMHAHLF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15EFE780)
#define FOHHFCMPGKH_BCNKIMHAHLF__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFE770)

inline static constexpr unsigned int FOHHFCMPGKH_BCNKIMHAHLF_TypeDefinitionIndex = 75559;

class FOHHFCMPGKH_BCNKIMHAHLF : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHFCMPGKH_BCNKIMHAHLF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHFCMPGKH_BCNKIMHAHLF_PNGOHNLELDJ_OFFSET))(this);
	}
};
