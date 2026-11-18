#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BIJGBFDMHBH_OGOEDIGMMEK_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1691D3A0)
#define BIJGBFDMHBH_OGOEDIGMMEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1691D390)

inline static constexpr unsigned int BIJGBFDMHBH_OGOEDIGMMEK_TypeDefinitionIndex = 71850;

class BIJGBFDMHBH_OGOEDIGMMEK : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJGBFDMHBH_OGOEDIGMMEK__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJGBFDMHBH_OGOEDIGMMEK_PNGOHNLELDJ_OFFSET))(this);
	}
};
