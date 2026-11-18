#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class KOIDMLPJGML;
namespace MoleMole { class ItemIconUI; }
namespace MoleMole { class NotificationBadge; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UICAMPIDLEEXPNODEREFERENCE_REFRESHICON_OFFSET UNITYSDK_OFFSET(0x1984C380)
#define MOLEMOLE_UICAMPIDLEEXPNODEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1984CBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleExpNodeReference_TypeDefinitionIndex = 44472;

	class UICampIdleExpNodeReference : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* AddIcon; // 0x18
		::UnityEngine::UI::Image* RoleIconImg; // 0x20
		::FGCOIBFFCHB* RoleIcon; // 0x28
		::UnityEngine::GameObject* expBarRoot; // 0x30
		::UnityEngine::RectTransform* expBar; // 0x38
		::MoleMole::NotificationBadge* m_notificationBadge; // 0x40
		::Il2CppArray<::UnityEngine::GameObject*>* onlyShowInExp; // 0x48
		::UnityEngine::GameObject* upIcon; // 0x50
		::Il2CppArray<::MoleMole::ItemIconUI*>* itemRewards; // 0x58
		::Il2CppArray<::UnityEngine::GameObject*>* onlyShowInItem; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEEXPNODEREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void RefreshIcon(::System::Boolean MNCIHIHEKCA, ::System::String* FEEDHJHDOEC, ::HNLACBJDCGI* JMJGHFAOMNH, ::System::Single EJAOAGGJHHA, ::System::Collections::Generic::List_1<::KOIDMLPJGML*>* HGOPGPFPCEH, ::System::Boolean DININJOCLME)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::HNLACBJDCGI*, ::System::Single, ::System::Collections::Generic::List_1<::KOIDMLPJGML*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEEXPNODEREFERENCE_REFRESHICON_OFFSET))(this, MNCIHIHEKCA, FEEDHJHDOEC, JMJGHFAOMNH, EJAOAGGJHHA, HGOPGPFPCEH, DININJOCLME);
		}
	};
}
