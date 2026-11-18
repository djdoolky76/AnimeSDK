#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBDAMELDMFG.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
class LPCJLIDIOHL;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::UI::Extension { class ITabButtonGroup; }

#define KFGCLOPEGJO_HAJKMOMKLBJ_AMEOOEAEOKP_OFFSET UNITYSDK_OFFSET(0x15208570)
#define KFGCLOPEGJO_HAJKMOMKLBJ_IPPAMFDNACI_OFFSET UNITYSDK_OFFSET(0x152083A0)
#define KFGCLOPEGJO_HAJKMOMKLBJ_MNHKOGOFGNM_OFFSET UNITYSDK_OFFSET(0x15208350)
#define KFGCLOPEGJO_HAJKMOMKLBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15208340)

inline static constexpr unsigned int KFGCLOPEGJO_HAJKMOMKLBJ_TypeDefinitionIndex = 78929;

class KFGCLOPEGJO_HAJKMOMKLBJ : public ::System::Object
{
public:
	::System::Func_2<::System::Int32, ::System::String*>* LHIGPGAMNGM; // 0x10
	::System::Func_2<::System::Int32, ::IBENDELLLAO*>* LOFHMEEPBFH; // 0x18
	::DBDAMELDMFG FMPHAKPHKKN; // 0x20
	::System::Func_1<::System::Int32>* DBHMNJOFNKN; // 0x30
	::System::Func_1<::System::Int32>* JFBJFLADNFG; // 0x38
	::System::Func_2<::System::Int32, ::System::Boolean>* LMNMNCNICNB; // 0x40
	::System::Action_1<::System::Int32>* ACCMBOADNMD; // 0x48
	::System::Func_1<::System::Int32>* CPJDHCJPAJM; // 0x50
	::LPCJLIDIOHL* JFDEHHMKLFP; // 0x58
	::System::Boolean NBBCKPOHIBF; // 0x60
	::System::Boolean LCDLAKOLLJJ; // 0x61

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HAJKMOMKLBJ__CTOR_OFFSET))(this);
	}

	::System::Int32 MNHKOGOFGNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HAJKMOMKLBJ_MNHKOGOFGNM_OFFSET))(this);
	}

	::System::Void IPPAMFDNACI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HAJKMOMKLBJ_IPPAMFDNACI_OFFSET))(this);
	}

	::System::Void AMEOOEAEOKP(::UnityEngine::UI::Extension::ITabButtonGroup* GBELIHABEDH, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ITabButtonGroup*, ::System::Int32))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HAJKMOMKLBJ_AMEOOEAEOKP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
