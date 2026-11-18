#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KFGCLOPEGJO_NHBAEJBAMJJ_BFCHGBAJOGB_OFFSET UNITYSDK_OFFSET(0x167FBAB0)
#define KFGCLOPEGJO_NHBAEJBAMJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x167FBAA0)

inline static constexpr unsigned int KFGCLOPEGJO_NHBAEJBAMJJ_TypeDefinitionIndex = 78947;

class KFGCLOPEGJO_NHBAEJBAMJJ : public ::System::Object
{
public:
	::System::Func_2<::System::Int64, ::UnityEngine::Color>* DJFEMLCFPEF; // 0x10
	::System::Func_2<::System::Int64, ::System::Object*>* BABOIKCJNDP; // 0x18
	::System::Boolean FMELDMHAHEF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_NHBAEJBAMJJ__CTOR_OFFSET))(this);
	}

	::System::Void BFCHGBAJOGB(::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH, ::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_NHBAEJBAMJJ_BFCHGBAJOGB_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
