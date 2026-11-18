#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NHPGDHPGGPL_LLCJKOCOCDH_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x12894CA0)
#define NHPGDHPGGPL_LLCJKOCOCDH__CTOR_OFFSET UNITYSDK_OFFSET(0x12894C90)

inline static constexpr unsigned int NHPGDHPGGPL_LLCJKOCOCDH_TypeDefinitionIndex = 57612;

class NHPGDHPGGPL_LLCJKOCOCDH : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGDHPGGPL_LLCJKOCOCDH__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPGDHPGGPL_LLCJKOCOCDH_PNGOHNLELDJ_OFFSET))(this);
	}
};
