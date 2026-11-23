#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define ABC_COMMON_MONOSPRITEEVOLUTIONITEM_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2078A00)
#define ABC_COMMON_MONOSPRITEEVOLUTIONITEM_AC1102CBF080C848_OFFSET UNITYSDK_OFFSET(0x2078990)
#define ABC_COMMON_MONOSPRITEEVOLUTIONITEM_B089CC7E26965CBF_OFFSET UNITYSDK_OFFSET(0x2078CF0)
#define ABC_COMMON_MONOSPRITEEVOLUTIONITEM_B795C913A9F1171B_OFFSET UNITYSDK_OFFSET(0x2078B60)
#define ABC_COMMON_MONOSPRITEEVOLUTIONITEM_BF2EF0FEF0FCC4A3_OFFSET UNITYSDK_OFFSET(0x2078AE0)
#define ABC_COMMON_MONOSPRITEEVOLUTIONITEM_BF4BCA689CDB5374_OFFSET UNITYSDK_OFFSET(0x1F63570)
#define ABC_COMMON_MONOSPRITEEVOLUTIONITEM_E3D815C5535F6868_OFFSET UNITYSDK_OFFSET(0x2078BE0)
#define ABC_COMMON_MONOSPRITEEVOLUTIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Common
{
	inline static constexpr unsigned int MonoSpriteEvolutionItem_TypeDefinitionIndex = 8478;

	class MonoSpriteEvolutionItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* IconSprite; // 0x20
		::UnityEngine::GameObject* PanelLock; // 0x28
		::ABC::UI::MonoButton* Button; // 0x30
		::ABC::UI::MonoPrefabLoader* RedDotLoader; // 0x38
		::System::Action* BD4CA0F321BA9167; // 0x40
		::System::Boolean E9A562A64E17DD9E; // 0x48
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* AF53609D181C1E68; // 0x50

		::System::Void B089CC7E26965CBF(::System::Boolean A450CAA3C0C5E2B4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITEEVOLUTIONITEM_B089CC7E26965CBF_OFFSET))(this, A450CAA3C0C5E2B4);
		}

		::System::Void BF2EF0FEF0FCC4A3(::System::Boolean FB6FD2EB21388B99)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITEEVOLUTIONITEM_BF2EF0FEF0FCC4A3_OFFSET))(this, FB6FD2EB21388B99);
		}

		::System::Boolean BF4BCA689CDB5374()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITEEVOLUTIONITEM_BF4BCA689CDB5374_OFFSET))(this);
		}

		::System::Void AC1102CBF080C848()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITEEVOLUTIONITEM_AC1102CBF080C848_OFFSET))(this);
		}

		::System::Void E3D815C5535F6868(::E865F6F8B8B44C1E E7102EB4CD1D28DD, ::System::Action* B315A571C63B124A)
		{
			return ((::System::Void(*)(::PVOID, ::E865F6F8B8B44C1E, ::System::Action*))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITEEVOLUTIONITEM_E3D815C5535F6868_OFFSET))(this, E7102EB4CD1D28DD, B315A571C63B124A);
		}

		::System::Void B795C913A9F1171B(::System::Boolean A1FD9ED5DF37C1AB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITEEVOLUTIONITEM_B795C913A9F1171B_OFFSET))(this, A1FD9ED5DF37C1AB);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITEEVOLUTIONITEM__CTOR_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOSPRITEEVOLUTIONITEM_AB36E0EE549986E5_OFFSET))(this);
		}
	};
}
