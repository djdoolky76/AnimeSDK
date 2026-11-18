#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PKPJKOAIIOD_EEDHAMGOGAP_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1371E380)
#define PKPJKOAIIOD_EEDHAMGOGAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1371E370)

inline static constexpr unsigned int PKPJKOAIIOD_EEDHAMGOGAP_TypeDefinitionIndex = 39195;

class PKPJKOAIIOD_EEDHAMGOGAP : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPJKOAIIOD_EEDHAMGOGAP__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPJKOAIIOD_EEDHAMGOGAP_PNGOHNLELDJ_OFFSET))(this);
	}
};
