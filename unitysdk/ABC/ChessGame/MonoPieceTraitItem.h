#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

namespace TMPro { class TextMeshProUGUI; }
namespace UnityEngine::UI { class Image; }

#define ABC_CHESSGAME_MONOPIECETRAITITEM_E3D815C5535F6868_OFFSET UNITYSDK_OFFSET(0x1CB8720)
#define ABC_CHESSGAME_MONOPIECETRAITITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::ChessGame
{
	inline static constexpr unsigned int MonoPieceTraitItem_TypeDefinitionIndex = 9735;

	class MonoPieceTraitItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* Icon; // 0x20
		::TMPro::TextMeshProUGUI* Name; // 0x28

		::System::Void E3D815C5535F6868(::E865F6F8B8B44C1E E7102EB4CD1D28DD, ::AD61077CFCBEFAEA F79B4D487F303AB2)
		{
			return ((::System::Void(*)(::PVOID, ::E865F6F8B8B44C1E, ::AD61077CFCBEFAEA))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_MONOPIECETRAITITEM_E3D815C5535F6868_OFFSET))(this, E7102EB4CD1D28DD, F79B4D487F303AB2);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_MONOPIECETRAITITEM__CTOR_OFFSET))(this);
		}
	};
}
