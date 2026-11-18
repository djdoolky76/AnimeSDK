#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Arcade::SnakeDemo { class SnakeMapLayout; }
namespace MoleMole::Arcade::SnakeDemo { class UIMapSnakeBombAnimScript_FJFKMEKHJHJ; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_APOFCECFCKO_OFFSET UNITYSDK_OFFSET(0x1F90DD00)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F90D260)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALALPHA_OFFSET UNITYSDK_OFFSET(0x1F90D7F0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALDISTRATIO_OFFSET UNITYSDK_OFFSET(0x1F90D6E0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALDIST_OFFSET UNITYSDK_OFFSET(0x1F90D680)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALLOGICPOS_OFFSET UNITYSDK_OFFSET(0x1F90D8A0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALSCALE_OFFSET UNITYSDK_OFFSET(0x1F90D740)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CNBINPHPFEC_OFFSET UNITYSDK_OFFSET(0x1F90DC90)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F90E950)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_FAJPIOPHGOL_OFFSET UNITYSDK_OFFSET(0x1F90ED30)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_GET_TEMPLATEIMAGE_OFFSET UNITYSDK_OFFSET(0x1F90D1C0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_INIT_OFFSET UNITYSDK_OFFSET(0x1F90D3B0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_JKODLAALEII_OFFSET UNITYSDK_OFFSET(0x1F90E7F0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_OOEKGNGFNFC_OFFSET UNITYSDK_OFFSET(0x1F90DD90)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_PLAY_OFFSET UNITYSDK_OFFSET(0x1F90D920)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RECYCLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F90D590)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1F90D410)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RESETCENTERPOS_OFFSET UNITYSDK_OFFSET(0x1F90E1D0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F90EBA0)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UIMapSnakeBombAnimScript_TypeDefinitionIndex = 96660;

	class UIMapSnakeBombAnimScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 maxDistance; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* scaleCurve; // 0x20
		::UnityEngine::AnimationCurve* alphaCurve; // 0x28
		::MoleMole::Arcade::SnakeDemo::SnakeMapLayout* MMAMLLPCJGH; // 0x30
		::System::Int32 IMIFPLMKOLA; // 0x38
		::System::Int32 OKGABHINCBG; // 0x3C
		::System::Single DANMCDCCMBK; // 0x40
		::System::Int32 LFGNKEBFFBB; // 0x44
		::System::Int32 ONMJFLCNIBF; // 0x48
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* MIHACNLPACK; // 0x50
		::System::Boolean ICGFKMAOFOK; // 0x58
		::System::Byte _padding2[0x7];
		::UnityEngine::GameObject* template_; // 0x60
		::System::Collections::Generic::Queue_1<::System::Object*>* AIBLPKLIGNK; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_TemplateImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_GET_TEMPLATEIMAGE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_AWAKE_OFFSET))(this);
		}

		::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript* Init()
		{
			return ((::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_INIT_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RELEASE_OFFSET))(this);
		}

		::System::Int32 CalDist(::System::Int32 HAAEBCOBKFF, ::System::Int32 GNHOCNHLCCA)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALDIST_OFFSET))(this, HAAEBCOBKFF, GNHOCNHLCCA);
		}

		::System::Single CalDistRatio(::System::Int32 KHHOPGCHCKH)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALDISTRATIO_OFFSET))(this, KHHOPGCHCKH);
		}

		::System::Single CalScale(::System::Int32 KHHOPGCHCKH)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALSCALE_OFFSET))(this, KHHOPGCHCKH);
		}

		::System::Single CalAlpha(::System::Int32 KHHOPGCHCKH)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALALPHA_OFFSET))(this, KHHOPGCHCKH);
		}

		::System::Void CalLogicPos(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG, ::System::Int32& HAAEBCOBKFF, ::System::Int32& BFMMEICFNCD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALLOGICPOS_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG, HAAEBCOBKFF, BFMMEICFNCD);
		}

		::System::Void Play(::UnityEngine::Vector3 LPOIBLLILAA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_PLAY_OFFSET))(this, LPOIBLLILAA);
		}

		::System::Void ResetCenterPos(::UnityEngine::Vector3 HFMHOELKCAJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RESETCENTERPOS_OFFSET))(this, HFMHOELKCAJ);
		}

		::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_FJFKMEKHJHJ* CreateInstance()
		{
			return ((::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_FJFKMEKHJHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CREATEINSTANCE_OFFSET))(this);
		}

		::System::Void RecycleInstance(::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_FJFKMEKHJHJ* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_FJFKMEKHJHJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RECYCLEINSTANCE_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Boolean CNBINPHPFEC(::System::Int32 HAAEBCOBKFF, ::System::Int32 GNHOCNHLCCA)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CNBINPHPFEC_OFFSET))(this, HAAEBCOBKFF, GNHOCNHLCCA);
		}

		::UnityEngine::Vector3 FAJPIOPHGOL(::UnityEngine::Vector3 PGLLJALFBJJ)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_FAJPIOPHGOL_OFFSET))(this, PGLLJALFBJJ);
		}

		::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_FJFKMEKHJHJ* APOFCECFCKO(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG)
		{
			return ((::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_FJFKMEKHJHJ*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_APOFCECFCKO_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG);
		}

		::System::Void OOEKGNGFNFC(::System::Int32 MJCEEEDKHOD, ::System::Int32 KLKDFCCNCBF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_OOEKGNGFNFC_OFFSET))(this, MJCEEEDKHOD, KLKDFCCNCBF);
		}

		::System::Boolean JKODLAALEII(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_JKODLAALEII_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG);
		}
	};
}
