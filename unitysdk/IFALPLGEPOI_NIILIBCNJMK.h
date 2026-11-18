#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define IFALPLGEPOI_NIILIBCNJMK_IGGDBJPJPBF_OFFSET UNITYSDK_OFFSET(0x1A457340)
#define IFALPLGEPOI_NIILIBCNJMK_NJLOBMPFFBB_OFFSET UNITYSDK_OFFSET(0x1A457350)
#define IFALPLGEPOI_NIILIBCNJMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A457330)

inline static constexpr unsigned int IFALPLGEPOI_NIILIBCNJMK_TypeDefinitionIndex = 57663;

class IFALPLGEPOI_NIILIBCNJMK : public ::System::Object
{
public:
	::UnityEngine::RectTransform* FJEEKLKBFHN; // 0x10
	::System::Single BOGPAHGJOJK; // 0x18
	::UnityEngine::Vector2 AKAGDEFAGJA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFALPLGEPOI_NIILIBCNJMK__CTOR_OFFSET))(this);
	}

	::System::Single IGGDBJPJPBF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFALPLGEPOI_NIILIBCNJMK_IGGDBJPJPBF_OFFSET))(this);
	}

	::System::Void NJLOBMPFFBB(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFALPLGEPOI_NIILIBCNJMK_NJLOBMPFFBB_OFFSET))(this, EGEGIMGMJHN);
	}
};
