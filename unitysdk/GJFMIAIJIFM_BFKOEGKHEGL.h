#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GJFMIAIJIFM_BFKOEGKHEGL_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x10FE4A20)
#define GJFMIAIJIFM_BFKOEGKHEGL__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE4A10)

inline static constexpr unsigned int GJFMIAIJIFM_BFKOEGKHEGL_TypeDefinitionIndex = 41652;

class GJFMIAIJIFM_BFKOEGKHEGL : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFMIAIJIFM_BFKOEGKHEGL__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFMIAIJIFM_BFKOEGKHEGL_PNGOHNLELDJ_OFFSET))(this);
	}
};
