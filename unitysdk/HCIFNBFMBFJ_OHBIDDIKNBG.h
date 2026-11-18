#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_OHBIDDIKNBG_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14D0DB00)
#define HCIFNBFMBFJ_OHBIDDIKNBG__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0DAF0)

inline static constexpr unsigned int HCIFNBFMBFJ_OHBIDDIKNBG_TypeDefinitionIndex = 50172;

class HCIFNBFMBFJ_OHBIDDIKNBG : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OHBIDDIKNBG__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_OHBIDDIKNBG_PNGOHNLELDJ_OFFSET))(this);
	}
};
