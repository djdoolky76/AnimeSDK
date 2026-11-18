#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GKPOLMILFPP_LKLPNGPPPMC_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14CF93E0)
#define GKPOLMILFPP_LKLPNGPPPMC__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF93D0)

inline static constexpr unsigned int GKPOLMILFPP_LKLPNGPPPMC_TypeDefinitionIndex = 45679;

class GKPOLMILFPP_LKLPNGPPPMC : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPOLMILFPP_LKLPNGPPPMC__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPOLMILFPP_LKLPNGPPPMC_PNGOHNLELDJ_OFFSET))(this);
	}
};
