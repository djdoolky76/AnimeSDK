#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class VideoScreenPlayData;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class MonoWeaponVideoScreenPlayer; }
namespace MoleMole { class ScreenPlayer; }

#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IPCJHCBNGAF_APONLGIIMBJ_OFFSET UNITYSDK_OFFSET(0x1469E4D0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IPCJHCBNGAF_JLBLMIDOHAP_OFFSET UNITYSDK_OFFSET(0x1469E4E0)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IPCJHCBNGAF_KABHHLHAJEG_OFFSET UNITYSDK_OFFSET(0x1469E590)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IPCJHCBNGAF_LMDJFMKBAMF_OFFSET UNITYSDK_OFFSET(0x1469E560)
#define MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IPCJHCBNGAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1469E4C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWeaponVideoScreenPlayer_IPCJHCBNGAF_TypeDefinitionIndex = 51846;

	class MonoWeaponVideoScreenPlayer_IPCJHCBNGAF : public ::System::Object
	{
	public:
		::MoleMole::ScreenPlayer* CEHEDIJEJFG; // 0x10
		::VideoScreenPlayData* PMMFOGIOGCB; // 0x18
		::MoleMole::MonoWeaponVideoScreenPlayer* KLHPEBKNIFB; // 0x20
		::System::Boolean JMJPGINCHAC; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IPCJHCBNGAF__CTOR_OFFSET))(this);
		}

		::System::Void APONLGIIMBJ(::MoleMole::IVideoPlayer* ECKMPOAABAL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IPCJHCBNGAF_APONLGIIMBJ_OFFSET))(this, ECKMPOAABAL);
		}

		::System::Void JLBLMIDOHAP(::MoleMole::IVideoPlayer* ECKMPOAABAL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IPCJHCBNGAF_JLBLMIDOHAP_OFFSET))(this, ECKMPOAABAL);
		}

		::System::Void KABHHLHAJEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IPCJHCBNGAF_KABHHLHAJEG_OFFSET))(this);
		}

		::System::Void LMDJFMKBAMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWEAPONVIDEOSCREENPLAYER_IPCJHCBNGAF_LMDJFMKBAMF_OFFSET))(this);
		}
	};
}
