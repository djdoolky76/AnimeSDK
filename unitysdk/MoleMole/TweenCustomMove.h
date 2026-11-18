#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/MoleMole/TweenCustomMove_GGJLJHOMHIA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_TWEENCUSTOMMOVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1882B460)
#define MOLEMOLE_TWEENCUSTOMMOVE_DDAJAPPHDNK_OFFSET UNITYSDK_OFFSET(0x1882C210)
#define MOLEMOLE_TWEENCUSTOMMOVE_DDIDAODPACJ_OFFSET UNITYSDK_OFFSET(0x1882C550)
#define MOLEMOLE_TWEENCUSTOMMOVE_DGFNNDOHGCE_OFFSET UNITYSDK_OFFSET(0x1882C590)
#define MOLEMOLE_TWEENCUSTOMMOVE_GOFILNECGNH_OFFSET UNITYSDK_OFFSET(0x1882B970)
#define MOLEMOLE_TWEENCUSTOMMOVE_HFOJJFFLFCE_OFFSET UNITYSDK_OFFSET(0x1882C4A0)
#define MOLEMOLE_TWEENCUSTOMMOVE_HJLCBFGMDJB_OFFSET UNITYSDK_OFFSET(0x1882B4B0)
#define MOLEMOLE_TWEENCUSTOMMOVE_IIGPIBMKANK_OFFSET UNITYSDK_OFFSET(0x1882BCA0)
#define MOLEMOLE_TWEENCUSTOMMOVE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1882C140)
#define MOLEMOLE_TWEENCUSTOMMOVE_NJEDEGHFCAJ_OFFSET UNITYSDK_OFFSET(0x1882C3E0)
#define MOLEMOLE_TWEENCUSTOMMOVE_PPDPIMGIDCI_OFFSET UNITYSDK_OFFSET(0x1882C2F0)
#define MOLEMOLE_TWEENCUSTOMMOVE_START_OFFSET UNITYSDK_OFFSET(0x1882B810)
#define MOLEMOLE_TWEENCUSTOMMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1882C290)

namespace MoleMole
{
	inline static constexpr unsigned int TweenCustomMove_TypeDefinitionIndex = 45661;

	class TweenCustomMove : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single duration; // 0x18
		::System::Single delay; // 0x1C
		::DG::Tweening::Ease ease; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* curve; // 0x28
		::UnityEngine::Vector2 from; // 0x30
		::UnityEngine::Vector2 to; // 0x38
		::MoleMole::TweenCustomMove_GGJLJHOMHIA fromAxisType; // 0x40
		::MoleMole::TweenCustomMove_GGJLJHOMHIA toAxisType; // 0x44
		::System::Boolean onlyControlX; // 0x48
		::System::Boolean onlyControlY; // 0x49
		::System::Boolean IgnoreStartSet; // 0x4A
		::System::Byte _padding1[0x5];
		::UnityEngine::RectTransform* OBLEMFDIIOD; // 0x50
		::UnityEngine::Camera* GKKMNEPLONG; // 0x58
		::System::Boolean AGCOMBOJDGK; // 0x60
		::System::Byte _padding2[0x7];
		::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* GGHLDDPHEID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void DDAJAPPHDNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_DDAJAPPHDNK_OFFSET))(this);
		}

		::System::Void NJEDEGHFCAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_NJEDEGHFCAJ_OFFSET))(this);
		}

		::System::Void PPDPIMGIDCI(::UnityEngine::Vector2 HFMHOELKCAJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_PPDPIMGIDCI_OFFSET))(this, HFMHOELKCAJ);
		}

		::System::Boolean GOFILNECGNH(::MoleMole::TweenCustomMove_GGJLJHOMHIA OBNIAHNMHPF, ::UnityEngine::Vector2 CAJNIPBNIOJ, ::UnityEngine::Vector2& POHFOEJCOEC)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::TweenCustomMove_GGJLJHOMHIA, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_GOFILNECGNH_OFFSET))(this, OBNIAHNMHPF, CAJNIPBNIOJ, POHFOEJCOEC);
		}

		::System::Void IIGPIBMKANK(::UnityEngine::Vector2 IACKHFCLPJI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_IIGPIBMKANK_OFFSET))(this, IACKHFCLPJI);
		}

		::System::Void DDIDAODPACJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_DDIDAODPACJ_OFFSET))(this);
		}

		::System::Void DGFNNDOHGCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_DGFNNDOHGCE_OFFSET))(this);
		}

		::UnityEngine::Vector2 HFOJJFFLFCE()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_HFOJJFFLFCE_OFFSET))(this);
		}

		::System::Void HJLCBFGMDJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_HJLCBFGMDJB_OFFSET))(this);
		}
	};
}
