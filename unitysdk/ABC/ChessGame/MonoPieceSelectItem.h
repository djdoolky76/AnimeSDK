#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TextMeshProUGUI; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define ABC_CHESSGAME_MONOPIECESELECTITEM_AC1102CBF080C848_OFFSET UNITYSDK_OFFSET(0x1DD8A20)
#define ABC_CHESSGAME_MONOPIECESELECTITEM_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x1DD9110)
#define ABC_CHESSGAME_MONOPIECESELECTITEM_E3D815C5535F6868_OFFSET UNITYSDK_OFFSET(0x1DD8A90)
#define ABC_CHESSGAME_MONOPIECESELECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9190)

namespace ABC::ChessGame
{
	inline static constexpr unsigned int MonoPieceSelectItem_TypeDefinitionIndex = 9373;

	class MonoPieceSelectItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* Icon; // 0x20
		::TMPro::TextMeshProUGUI* Name; // 0x28
		::TMPro::TextMeshProUGUI* ID; // 0x30
		::UnityEngine::Transform* Trait1; // 0x38
		::UnityEngine::Transform* Trait2; // 0x40
		::System::Action_1<::System::UInt32>* BD4CA0F321BA9167; // 0x48
		::System::UInt32 B67F51A6D8C4A577; // 0x50
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::UInt32>* B26D423A1D79DA46; // 0x58

		::System::Void BFA7961FF2AC380B(::System::Boolean A3E26351629B9EF8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_MONOPIECESELECTITEM_BFA7961FF2AC380B_OFFSET))(this, A3E26351629B9EF8);
		}

		::System::Void E3D815C5535F6868(::System::UInt32 A86E2380992A0E36, ::System::Action_1<::System::UInt32>* B315A571C63B124A)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_MONOPIECESELECTITEM_E3D815C5535F6868_OFFSET))(this, A86E2380992A0E36, B315A571C63B124A);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_MONOPIECESELECTITEM__CTOR_OFFSET))(this);
		}

		::System::Void AC1102CBF080C848()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_MONOPIECESELECTITEM_AC1102CBF080C848_OFFSET))(this);
		}
	};
}
