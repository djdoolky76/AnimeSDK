#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFLPDCBEDLI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class ScreenPlayData;
namespace MoleMole { class ScreenPlayer_TextureSheet; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_HOBNGIFOACF_FMNGIJMNBKJ_OFFSET UNITYSDK_OFFSET(0x1249DB50)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_HOBNGIFOACF_GNOHMNAHBGM_OFFSET UNITYSDK_OFFSET(0x1249DB00)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_HOBNGIFOACF__CTOR_OFFSET UNITYSDK_OFFSET(0x1249DAF0)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TextureSheet_HOBNGIFOACF_TypeDefinitionIndex = 46482;

	class ScreenPlayer_TextureSheet_HOBNGIFOACF : public ::System::Object
	{
	public:
		::MoleMole::ScreenPlayer_TextureSheet* KLHPEBKNIFB; // 0x10
		::System::Action_1<::System::Boolean>* KMNMHEFDOOF; // 0x18
		::System::Action_1<::System::Boolean>* JHLALDNCBGP; // 0x20
		::UnityEngine::Events::UnityAction* DLMJCFBENGB; // 0x28
		::ScreenPlayData* LJBPECKCCEA; // 0x30
		::System::Int32 BLCGKJHPFJB; // 0x38
		::NFLPDCBEDLI JOEFEIGHKPF; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_HOBNGIFOACF__CTOR_OFFSET))(this);
		}

		::System::Void GNOHMNAHBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_HOBNGIFOACF_GNOHMNAHBGM_OFFSET))(this);
		}

		::System::Void FMNGIJMNBKJ(::UnityEngine::Texture2D* PIALMIJPIFN, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_HOBNGIFOACF_FMNGIJMNBKJ_OFFSET))(this, PIALMIJPIFN, PHHDHIBOCKA);
		}
	};
}
