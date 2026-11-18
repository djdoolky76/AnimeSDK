#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF_LAHDMLOBJBM;
namespace UnityEngine { class AnimationCurve; }

#define FBAMLABJMKF_BIHKDPEHCHE_KMIFGENNOPH_OFFSET UNITYSDK_OFFSET(0x158CAE70)
#define FBAMLABJMKF_BIHKDPEHCHE_NCKJKBCOEIK_OFFSET UNITYSDK_OFFSET(0x158CAFA0)
#define FBAMLABJMKF_BIHKDPEHCHE_NKEBEJMLEPC_OFFSET UNITYSDK_OFFSET(0x158CAFB0)
#define FBAMLABJMKF_BIHKDPEHCHE__CTOR_OFFSET UNITYSDK_OFFSET(0x158CAE60)

inline static constexpr unsigned int FBAMLABJMKF_BIHKDPEHCHE_TypeDefinitionIndex = 78132;

class FBAMLABJMKF_BIHKDPEHCHE : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* IAKPGBCAAKM; // 0x10
	::FBAMLABJMKF_LAHDMLOBJBM* FGBNBFHOKAA; // 0x18
	::System::Single HACJFKBLODH; // 0x20
	::System::Single MDPPNMIPDMP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_BIHKDPEHCHE__CTOR_OFFSET))(this);
	}

	::System::Void KMIFGENNOPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_BIHKDPEHCHE_KMIFGENNOPH_OFFSET))(this);
	}

	::System::Single NCKJKBCOEIK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_BIHKDPEHCHE_NCKJKBCOEIK_OFFSET))(this);
	}

	::System::Void NKEBEJMLEPC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBAMLABJMKF_BIHKDPEHCHE_NKEBEJMLEPC_OFFSET))(this, EGEGIMGMJHN);
	}
};
