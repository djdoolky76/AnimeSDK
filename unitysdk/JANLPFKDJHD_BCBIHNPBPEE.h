#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JANLPFKDJHD_BCBIHNPBPEE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x160C7770)
#define JANLPFKDJHD_BCBIHNPBPEE__CTOR_OFFSET UNITYSDK_OFFSET(0x160C7760)

inline static constexpr unsigned int JANLPFKDJHD_BCBIHNPBPEE_TypeDefinitionIndex = 86075;

class JANLPFKDJHD_BCBIHNPBPEE : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANLPFKDJHD_BCBIHNPBPEE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANLPFKDJHD_BCBIHNPBPEE_PNGOHNLELDJ_OFFSET))(this);
	}
};
