#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Comic { class MonoComicBubbleImage; }
namespace UnityEngine::UI { class VertexHelper; }

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubbleImage_KFMJLKIPCIH_TypeDefinitionIndex = 55319;

	struct alignas(8) MonoComicBubbleImage_KFMJLKIPCIH
	{
		::UnityEngine::UI::VertexHelper* CDAHODBFMLM; // 0x10
		::MoleMole::Comic::MonoComicBubbleImage* KLHPEBKNIFB; // 0x18
		::UnityEngine::Color32 EGBDAGNDMJN; // 0x20
		::System::Boolean ODCODCKANIK; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 MPLDDNMCECG; // 0x28
		::System::Single INOJCDGMELC; // 0x30
		::System::Single MANNBBJELIM; // 0x34
		::UnityEngine::Vector2 GBEFFCCPBIC; // 0x38
		::UnityEngine::Vector2 HODAIDNDKHD; // 0x40
		::System::Single IPCBKNIHKPD; // 0x48
		::System::Single NIHOCHEHENL; // 0x4C
	};
}
