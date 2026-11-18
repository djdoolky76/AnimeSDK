#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole { class SceneObjectStateWidget; }
namespace MoleMole::Timeline { class TextureSheet_TV_WallBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_AACIIMGJJKM_OFFSET UNITYSDK_OFFSET(0x198E2C60)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x198E2890)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_FFKDBGEPKMP_OFFSET UNITYSDK_OFFSET(0x198E2AA0)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x198E2880)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x198E2C50)
#define MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x198E2BC0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TextureSheet_TV_WallClip_TypeDefinitionIndex = 70358;

	class TextureSheet_TV_WallClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::Boolean* StaticGet_isLoadConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TextureSheet_TV_WallClip_TypeDefinitionIndex)->GetStaticField(0x12400);
		}
		::Il2CppArray<::MoleMole::SceneObjectStateWidget*>* walls; // 0x18
		::System::String* configKey; // 0x20
		::System::Boolean IgroneTimeScale; // 0x28
		::System::Byte _padding0[0x7];
		::MoleMole::Timeline::TextureSheet_TV_WallBehaviour* template_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP__CCTOR_OFFSET))();
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		static ::System::Void AACIIMGJJKM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_AACIIMGJJKM_OFFSET))();
		}

		static ::System::Void FFKDBGEPKMP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTURESHEET_TV_WALLCLIP_FFKDBGEPKMP_OFFSET))();
		}
	};
}
