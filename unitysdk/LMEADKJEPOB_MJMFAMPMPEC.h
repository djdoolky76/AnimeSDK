#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LMEADKJEPOB_MJMFAMPMPEC_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x12D42F20)
#define LMEADKJEPOB_MJMFAMPMPEC__CTOR_OFFSET UNITYSDK_OFFSET(0x12D42F10)

inline static constexpr unsigned int LMEADKJEPOB_MJMFAMPMPEC_TypeDefinitionIndex = 45443;

class LMEADKJEPOB_MJMFAMPMPEC : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEADKJEPOB_MJMFAMPMPEC__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEADKJEPOB_MJMFAMPMPEC_PNGOHNLELDJ_OFFSET))(this);
	}
};
