#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BMKKPEDPCGA_KJFMAHBCAOG_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x169FDA00)
#define BMKKPEDPCGA_KJFMAHBCAOG__CTOR_OFFSET UNITYSDK_OFFSET(0x169FD9F0)

inline static constexpr unsigned int BMKKPEDPCGA_KJFMAHBCAOG_TypeDefinitionIndex = 87822;

class BMKKPEDPCGA_KJFMAHBCAOG : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKKPEDPCGA_KJFMAHBCAOG__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKKPEDPCGA_KJFMAHBCAOG_PNGOHNLELDJ_OFFSET))(this);
	}
};
