#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MCJBLGDMPOB_HBHKFHNNMIE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x13D15D70)
#define MCJBLGDMPOB_HBHKFHNNMIE__CTOR_OFFSET UNITYSDK_OFFSET(0x13D15D60)

inline static constexpr unsigned int MCJBLGDMPOB_HBHKFHNNMIE_TypeDefinitionIndex = 66988;

class MCJBLGDMPOB_HBHKFHNNMIE : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJBLGDMPOB_HBHKFHNNMIE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJBLGDMPOB_HBHKFHNNMIE_PNGOHNLELDJ_OFFSET))(this);
	}
};
