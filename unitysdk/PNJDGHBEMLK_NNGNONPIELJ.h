#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }

#define PNJDGHBEMLK_NNGNONPIELJ_HAJBBIHOECF_OFFSET UNITYSDK_OFFSET(0x1C1E17C0)
#define PNJDGHBEMLK_NNGNONPIELJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E17B0)

inline static constexpr unsigned int PNJDGHBEMLK_NNGNONPIELJ_TypeDefinitionIndex = 64969;

class PNJDGHBEMLK_NNGNONPIELJ : public ::System::Object
{
public:
	::MoleMole::IVideoPlayer* NEPAOLIPEFN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NNGNONPIELJ__CTOR_OFFSET))(this);
	}

	::System::Boolean HAJBBIHOECF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_NNGNONPIELJ_HAJBBIHOECF_OFFSET))(this);
	}
};
