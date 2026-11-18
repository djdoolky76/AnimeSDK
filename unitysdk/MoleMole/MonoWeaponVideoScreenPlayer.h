#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoWeaponVideoScreenPlayer_LLDHHLFGIID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class TextureFrameScreenPlayData;
class VideoScreenPlayData;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x139FAD20)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_BANJLJBHFFK_OFFSET UNITYSDK_OFFSET(0x139FAFB0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CBONKHMMNEH_OFFSET UNITYSDK_OFFSET(0x139FBAB0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLOSE_OFFSET UNITYSDK_OFFSET(0x139FB7F0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IGAGKJJLLJG_OFFSET UNITYSDK_OFFSET(0x139FB380)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_INIT_OFFSET UNITYSDK_OFFSET(0x139FB7B0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_NBACBKKJIGA_OFFSET UNITYSDK_OFFSET(0x139FBA00)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x139FB560)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x139FAF40)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x139FB5B0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYFRAMETEXTUREONSCREEN_OFFSET UNITYSDK_OFFSET(0x139FB8E0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYVIDEOONSCREEN_OFFSET UNITYSDK_OFFSET(0x139FB870)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x139FB6F0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x139FB950)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWeaponVideoScreenPlayer_TypeDefinitionIndex = 51844;

	class MonoWeaponVideoScreenPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MeshRenderer* frontScreenMeshRenderer; // 0x18
		::UnityEngine::MeshRenderer* transitionScreenRenderer; // 0x20
		::MoleMole::ScreenPlayer* AEDOLMPHIHA; // 0x28
		::MoleMole::ScreenPlayer* FADKOHJCIIP; // 0x30
		::TextureFrameScreenPlayData* IGFPHGELPLI; // 0x38
		::System::String* IPHFEENNJDK; // 0x40
		::System::String* DNOLLNECJHO; // 0x48
		::MoleMole::MonoWeaponVideoScreenPlayer_LLDHHLFGIID MAOCFFFKJCF; // 0x50
		::System::Byte _padding0[0x4];
		::System::String* JMEBKLKFCMC; // 0x58
		::System::String* PHLGOAHJEJM; // 0x60
		::System::String* EOAKBHLHLMH; // 0x68
		::System::Boolean GEJDJLNLFGI; // 0x70
		::System::Byte _padding1[0x7];
		::System::String* OGKMBACGLCM; // 0x78
		::System::Boolean DOJPNLNHIMO; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_INIT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CLOSE_OFFSET))(this);
		}

		::System::Void PlayVideoOnScreen(::System::String* PODMLOHFCCL, ::System::String* JAOIHBNAKMM)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYVIDEOONSCREEN_OFFSET))(this, PODMLOHFCCL, JAOIHBNAKMM);
		}

		::System::Void PlayFrameTextureOnScreen(::System::String* PIHLMEAAAKN, ::System::String* ODEKDMMCENB)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PLAYFRAMETEXTUREONSCREEN_OFFSET))(this, PIHLMEAAAKN, ODEKDMMCENB);
		}

		::System::Void PGHAJOMNDDJ(::System::Boolean PPKJPINLMGJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_PGHAJOMNDDJ_OFFSET))(this, PPKJPINLMGJ);
		}

		::VideoScreenPlayData* NBACBKKJIGA(::System::String* JAOIHBNAKMM, ::System::Boolean EPGLPGPOOJN, ::System::Action_1<::MoleMole::IVideoPlayer*>* PODDFNDLFFH)
		{
			return ((::VideoScreenPlayData*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_NBACBKKJIGA_OFFSET))(this, JAOIHBNAKMM, EPGLPGPOOJN, PODDFNDLFFH);
		}

		::TextureFrameScreenPlayData* CBONKHMMNEH(::System::String* MCOHLHMKLIP, ::System::Boolean EPGLPGPOOJN, ::UnityEngine::Events::UnityAction* JHADDGFBPMN)
		{
			return ((::TextureFrameScreenPlayData*(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_CBONKHMMNEH_OFFSET))(this, MCOHLHMKLIP, EPGLPGPOOJN, JHADDGFBPMN);
		}

		::System::Void IGAGKJJLLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IGAGKJJLLJG_OFFSET))(this);
		}

		::System::Void BANJLJBHFFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_BANJLJBHFFK_OFFSET))(this);
		}
	};
}
