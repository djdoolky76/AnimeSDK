#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KOLCKBMFJMJ_CPCFBFMJOEH_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x126ABDB0)
#define KOLCKBMFJMJ_CPCFBFMJOEH__CTOR_OFFSET UNITYSDK_OFFSET(0x126ABB70)

inline static constexpr unsigned int KOLCKBMFJMJ_CPCFBFMJOEH_TypeDefinitionIndex = 61747;

class KOLCKBMFJMJ_CPCFBFMJOEH : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCKBMFJMJ_CPCFBFMJOEH__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCKBMFJMJ_CPCFBFMJOEH_PNGOHNLELDJ_OFFSET))(this);
	}
};
