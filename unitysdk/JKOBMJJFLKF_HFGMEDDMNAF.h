#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JKOBMJJFLKF_HFGMEDDMNAF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1762D170)
#define JKOBMJJFLKF_HFGMEDDMNAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1762D160)

inline static constexpr unsigned int JKOBMJJFLKF_HFGMEDDMNAF_TypeDefinitionIndex = 48064;

class JKOBMJJFLKF_HFGMEDDMNAF : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOBMJJFLKF_HFGMEDDMNAF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOBMJJFLKF_HFGMEDDMNAF_PNGOHNLELDJ_OFFSET))(this);
	}
};
