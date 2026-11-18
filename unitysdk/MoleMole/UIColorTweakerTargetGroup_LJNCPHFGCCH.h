#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Component; }

#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_LJNCPHFGCCH_NILPHCJELOL_OFFSET UNITYSDK_OFFSET(0x7A70C0)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_LJNCPHFGCCH_OPBCNIMGAHI_OFFSET UNITYSDK_OFFSET(0x7A70E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIColorTweakerTargetGroup_LJNCPHFGCCH_TypeDefinitionIndex = 74884;

	struct alignas(8) UIColorTweakerTargetGroup_LJNCPHFGCCH
	{
		::UnityEngine::Component* HODAIDNDKHD; // 0x10
		::System::ValueTuple_2<::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>*, ::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>*> DMJDHNLPINJ; // 0x18
		::System::Byte _padding0[0x8];
		::System::Boolean PJLGJAHHIGA; // 0x28
		::System::Byte _padding1[0x3];
		::UnityEngine::Color POGDJHENNHA; // 0x2C
		::UnityEngine::Color MIOKJHCJHCK; // 0x3C

		::UnityEngine::Color NILPHCJELOL()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_LJNCPHFGCCH_NILPHCJELOL_OFFSET))(this);
		}

		::System::Void OPBCNIMGAHI(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_LJNCPHFGCCH_OPBCNIMGAHI_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
