#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DKAKFNNKIIE_OFMIIOPBFNC_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1329F990)
#define DKAKFNNKIIE_OFMIIOPBFNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1329F980)

inline static constexpr unsigned int DKAKFNNKIIE_OFMIIOPBFNC_TypeDefinitionIndex = 43877;

class DKAKFNNKIIE_OFMIIOPBFNC : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_OFMIIOPBFNC__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAKFNNKIIE_OFMIIOPBFNC_PNGOHNLELDJ_OFFSET))(this);
	}
};
