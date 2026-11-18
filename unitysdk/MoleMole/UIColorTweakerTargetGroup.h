#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ColorHSV.h"
#include "unitysdk/MoleMole/ColorHSV_CBPFINCLIAK.h"
#include "unitysdk/MoleMole/UIColorTweakerTarget.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/UIColorTweakerTargetGroup_LJNCPHFGCCH.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_BAPJGCCPDKP_OFFSET UNITYSDK_OFFSET(0x18005510)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_BEBLJFMMEGA_OFFSET UNITYSDK_OFFSET(0x180048E0)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_BNEJCNLGJCP_OFFSET UNITYSDK_OFFSET(0x18005180)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_CJEEBCBFFBN_OFFSET UNITYSDK_OFFSET(0x18005730)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_GET_LEADERCOLOR_OFFSET UNITYSDK_OFFSET(0x18004760)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x18004CE0)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x18005120)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_SET_LEADERCOLOR_OFFSET UNITYSDK_OFFSET(0x18004790)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x18004870)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18004860)

namespace MoleMole
{
	inline static constexpr unsigned int UIColorTweakerTargetGroup_TypeDefinitionIndex = 74883;

	class UIColorTweakerTargetGroup : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet__cache()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup_TypeDefinitionIndex)->GetStaticField(0x48940);
		}
		::System::String* key; // 0x10
		::Il2CppArray<::MoleMole::UIColorTweakerTarget>* targets; // 0x18
		::MoleMole::ColorHSV _defaultColor; // 0x20
		::MoleMole::ColorHSV_CBPFINCLIAK _targetOffset; // 0x2C
		::Il2CppArray<::System::Object*>* _runtimeTargets; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP__CCTOR_OFFSET))();
		}

		::UnityEngine::Color get_LeaderColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_GET_LEADERCOLOR_OFFSET))(this);
		}

		::System::Void set_LeaderColor(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_SET_LEADERCOLOR_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::MoleMole::UIColorTweakerTargetGroup_LJNCPHFGCCH BEBLJFMMEGA(::MoleMole::UIColorTweakerTarget& HODAIDNDKHD)
		{
			return ((::MoleMole::UIColorTweakerTargetGroup_LJNCPHFGCCH(*)(::MoleMole::UIColorTweakerTarget&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_BEBLJFMMEGA_OFFSET))(HODAIDNDKHD);
		}

		::System::Void JMDEKPONKMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_JMDEKPONKMF_OFFSET))(this);
		}

		::System::Void PLCJNBHECGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_PLCJNBHECGC_OFFSET))(this);
		}

		::System::Void BAPJGCCPDKP(::MoleMole::ColorHSV& HODAIDNDKHD)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ColorHSV&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_BAPJGCCPDKP_OFFSET))(this, HODAIDNDKHD);
		}

		::System::Void BNEJCNLGJCP(::System::Boolean JBJFINAFFKO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_BNEJCNLGJCP_OFFSET))(this, JBJFINAFFKO);
		}

		static ::System::Boolean CJEEBCBFFBN(::UnityEngine::Color& EJCBEJMGFAJ, ::UnityEngine::Color& EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_CJEEBCBFFBN_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
	};
}
