#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIPAGETURNBEHAVIOR_KJHOOJCKGPP_CANAKGGKBAH_OFFSET UNITYSDK_OFFSET(0xE3DC590)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_KJHOOJCKGPP_EMDGGCLHAIL_OFFSET UNITYSDK_OFFSET(0xE3DC450)
#define RPG_CLIENT_UIPAGETURNBEHAVIOR_KJHOOJCKGPP_OOPPBAGEKAF_OFFSET UNITYSDK_OFFSET(0xE3DC6B0)

namespace RPG::Client
{
	class UIPageTurnBehavior_KJHOOJCKGPP : public ::System::Object
	{
	public:
		static ::System::Void CANAKGGKBAH(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_KJHOOJCKGPP_CANAKGGKBAH_OFFSET))(a1);
		}

		static ::System::Void EMDGGCLHAIL(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_KJHOOJCKGPP_EMDGGCLHAIL_OFFSET))(a1);
		}

		static ::System::Void OOPPBAGEKAF(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPAGETURNBEHAVIOR_KJHOOJCKGPP_OOPPBAGEKAF_OFFSET))(a1, a2);
		}

	};
}
