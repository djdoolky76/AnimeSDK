#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define ABC_COMMON_MONOSPRITERANKITEM_AC1102CBF080C848_OFFSET UNITYSDK_OFFSET(0x1ECD520)
#define ABC_COMMON_MONOSPRITERANKITEM_B795C913A9F1171B_OFFSET UNITYSDK_OFFSET(0x1ECD610)
#define ABC_COMMON_MONOSPRITERANKITEM_BF2EF0FEF0FCC4A3_OFFSET UNITYSDK_OFFSET(0x1ECD590)
#define ABC_COMMON_MONOSPRITERANKITEM_BF4BCA689CDB5374_OFFSET UNITYSDK_OFFSET(0x16E19B0)
#define ABC_COMMON_MONOSPRITERANKITEM_E3D815C5535F6868_OFFSET UNITYSDK_OFFSET(0x1ECD690)
#define ABC_COMMON_MONOSPRITERANKITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Common
{
	inline static constexpr unsigned int MonoSpriteRankItem_TypeDefinitionIndex = 7323;

	class MonoSpriteRankItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ABC::UI::MonoLocalizedTmp* RankNumText; // 0x20
		::ABC::UI::MonoLocalizedTmp* RankNameText; // 0x28
		::UnityEngine::UI::Image* RankSprite; // 0x30
		::UnityEngine::GameObject* PanelLock; // 0x38
		::ABC::UI::MonoButton* Button; // 0x40
		::System::Action* BD4CA0F321BA9167; // 0x48
		::System::Boolean E9A562A64E17DD9E; // 0x50

		::System::Void E3D815C5535F6868(::E865F6F8B8B44C1E E7102EB4CD1D28DD, ::System::Int32 E14961743E675799, ::AD61077CFCBEFAEA F79B4D487F303AB2, ::System::Action* B315A571C63B124A)
		{
			return ((::System::Void(*)(::PVOID, ::E865F6F8B8B44C1E, ::System::Int32, ::AD61077CFCBEFAEA, ::System::Action*))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITERANKITEM_E3D815C5535F6868_OFFSET))(this, E7102EB4CD1D28DD, E14961743E675799, F79B4D487F303AB2, B315A571C63B124A);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITERANKITEM__CTOR_OFFSET))(this);
		}

		::System::Void B795C913A9F1171B(::System::Boolean A1FD9ED5DF37C1AB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITERANKITEM_B795C913A9F1171B_OFFSET))(this, A1FD9ED5DF37C1AB);
		}

		::System::Boolean BF4BCA689CDB5374()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITERANKITEM_BF4BCA689CDB5374_OFFSET))(this);
		}

		::System::Void AC1102CBF080C848()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITERANKITEM_AC1102CBF080C848_OFFSET))(this);
		}

		::System::Void BF2EF0FEF0FCC4A3(::System::Boolean FB6FD2EB21388B99)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITERANKITEM_BF2EF0FEF0FCC4A3_OFFSET))(this, FB6FD2EB21388B99);
		}
	};
}
