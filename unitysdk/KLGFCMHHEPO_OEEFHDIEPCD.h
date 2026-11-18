#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KLGFCMHHEPO_OEEFHDIEPCD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1634A400)
#define KLGFCMHHEPO_OEEFHDIEPCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1634A3F0)

inline static constexpr unsigned int KLGFCMHHEPO_OEEFHDIEPCD_TypeDefinitionIndex = 90757;

class KLGFCMHHEPO_OEEFHDIEPCD : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGFCMHHEPO_OEEFHDIEPCD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGFCMHHEPO_OEEFHDIEPCD_PNGOHNLELDJ_OFFSET))(this);
	}
};
