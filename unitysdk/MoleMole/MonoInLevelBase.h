#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOINLEVELBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x13106D50)
#define MOLEMOLE_MONOINLEVELBASE_LOADSPRITEASYNC_OFFSET UNITYSDK_OFFSET(0x13107680)
#define MOLEMOLE_MONOINLEVELBASE_LOADSPRITE_OFFSET UNITYSDK_OFFSET(0x13107360)
#define MOLEMOLE_MONOINLEVELBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13106DF0)
#define MOLEMOLE_MONOINLEVELBASE_SETUPIMAGESPRITE_1_OFFSET UNITYSDK_OFFSET(0x131075D0)
#define MOLEMOLE_MONOINLEVELBASE_SETUPIMAGESPRITE_OFFSET UNITYSDK_OFFSET(0x13106FE0)
#define MOLEMOLE_MONOINLEVELBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x13107780)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInLevelBase_TypeDefinitionIndex = 84513;

	class MonoInLevelBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* DDEMKFDHFBO; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetupImageSprite(::UnityEngine::Transform* LNEEMAGIHLB, ::System::String* FNJPKKAHJAJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_SETUPIMAGESPRITE_OFFSET))(this, LNEEMAGIHLB, FNJPKKAHJAJ);
		}

		::System::Void SetupImageSprite_1(::UnityEngine::UI::Image* CGJEBPGPIHO, ::System::String* FNJPKKAHJAJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_SETUPIMAGESPRITE_1_OFFSET))(this, CGJEBPGPIHO, FNJPKKAHJAJ);
		}

		::UnityEngine::Sprite* LoadSprite(::System::String* CJBJONJDOLI)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_LOADSPRITE_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Void LoadSpriteAsync(::System::String* CJBJONJDOLI, ::System::Action_1<::UnityEngine::Sprite*>* NKIFJCDNCFI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_LOADSPRITEASYNC_OFFSET))(this, CJBJONJDOLI, NKIFJCDNCFI);
		}
	};
}
