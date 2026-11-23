#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ABC_ADVENTURE_MONODIALOGUEROOT_ABADAEF383882929_OFFSET UNITYSDK_OFFSET(0x1892450)
#define ABC_ADVENTURE_MONODIALOGUEROOT_F0A7EFF13B269042_OFFSET UNITYSDK_OFFSET(0x1892650)
#define ABC_ADVENTURE_MONODIALOGUEROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1892750)

namespace ABC::Adventure
{
	inline static constexpr unsigned int MonoDialogueRoot_TypeDefinitionIndex = 132;

	class MonoDialogueRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* CameraRoot; // 0x20
		::UnityEngine::Transform* ActorRoot; // 0x28
		::UnityEngine::Transform* PointRoot; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* E0938BF1BFCC85AC; // 0x38

		::System::Void F0A7EFF13B269042()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_MONODIALOGUEROOT_F0A7EFF13B269042_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_MONODIALOGUEROOT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* ABADAEF383882929(::System::UInt32 B949C4D4B2ACAE9A)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_MONODIALOGUEROOT_ABADAEF383882929_OFFSET))(this, B949C4D4B2ACAE9A);
		}
	};
}
