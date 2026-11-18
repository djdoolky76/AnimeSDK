#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Comic { class MonoComicBubbleImage; }

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubbleImage_MGLICLCOHHG_TypeDefinitionIndex = 55320;

	struct alignas(8) MonoComicBubbleImage_MGLICLCOHHG
	{
		::MoleMole::Comic::MonoComicBubbleImage* KLHPEBKNIFB; // 0x10
		::UnityEngine::Vector2 FONPGFEEPMA; // 0x18
		::UnityEngine::Vector4 HFMHOELKCAJ; // 0x20
		::System::Single MANNBBJELIM; // 0x30
		::System::Boolean ODCODCKANIK; // 0x34
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 MPLDDNMCECG; // 0x38
		::UnityEngine::Vector2 FBHDMHOBIEE; // 0x40
	};
}
