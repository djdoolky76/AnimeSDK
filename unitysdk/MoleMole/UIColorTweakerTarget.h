#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PHAEBAGBBHA.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Component; }

#define MOLEMOLE_UICOLORTWEAKERTARGET_FDNCPNFNNLJ_OFFSET UNITYSDK_OFFSET(0x1984F1D0)
#define MOLEMOLE_UICOLORTWEAKERTARGET_FJCKEFFOBJL_OFFSET UNITYSDK_OFFSET(0x7E8500)
#define MOLEMOLE_UICOLORTWEAKERTARGET_JPIBJENHFFJ_OFFSET UNITYSDK_OFFSET(0x7E8480)
#define MOLEMOLE_UICOLORTWEAKERTARGET_PIPBGHCACNN_OFFSET UNITYSDK_OFFSET(0x7E8420)

namespace MoleMole
{
	inline static constexpr unsigned int UIColorTweakerTarget_TypeDefinitionIndex = 77744;

	struct alignas(8) UIColorTweakerTarget
	{
		::UnityEngine::Component* target; // 0x10
		::PHAEBAGBBHA type; // 0x18

		static ::System::ValueTuple_2<::UnityEngine::Component*, ::PHAEBAGBBHA> FDNCPNFNNLJ(::UnityEngine::Component* HODAIDNDKHD)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Component*, ::PHAEBAGBBHA>(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_FDNCPNFNNLJ_OFFSET))(HODAIDNDKHD);
		}

		::System::Void PIPBGHCACNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_PIPBGHCACNN_OFFSET))(this);
		}

		::UnityEngine::Color JPIBJENHFFJ()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_JPIBJENHFFJ_OFFSET))(this);
		}

		::System::Void FJCKEFFOBJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_FJCKEFFOBJL_OFFSET))(this);
		}
	};
}
