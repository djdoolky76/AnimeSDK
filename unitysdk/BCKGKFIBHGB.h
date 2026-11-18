#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal { class TextureSheetRenderer; }

#define BCKGKFIBHGB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1ED8B2E0)
#define BCKGKFIBHGB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED8ACB0)
#define BCKGKFIBHGB_DNMEMIKEJGM_OFFSET UNITYSDK_OFFSET(0x1ED8B2D0)
#define BCKGKFIBHGB_DOLGNIIJCEF_OFFSET UNITYSDK_OFFSET(0x1ED8B2B0)
#define BCKGKFIBHGB_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1ED8AD40)
#define BCKGKFIBHGB_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1ED8AD60)
#define BCKGKFIBHGB_GET_SUBLAYER_OFFSET UNITYSDK_OFFSET(0x1ED8AD50)
#define BCKGKFIBHGB_ICELNPNKMMC_OFFSET UNITYSDK_OFFSET(0x1ED8B470)
#define BCKGKFIBHGB_KJMNODCDNFI_OFFSET UNITYSDK_OFFSET(0x1ED8B460)
#define BCKGKFIBHGB_SET_OFFSET UNITYSDK_OFFSET(0x1ED8AFE0)
#define BCKGKFIBHGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED8B2C0)

inline static constexpr unsigned int BCKGKFIBHGB_TypeDefinitionIndex = 94896;

class BCKGKFIBHGB : public ::System::Object
{
public:
	::UnityEngine::Renderer* OCFHGOGFGPE; // 0x10
	::UnityEngine::Rendering::Universal::TextureSheetRenderer* CHGBMIDEHCJ; // 0x18
	::System::Int32 ENLAAJHLGIC; // 0x20
	::System::Int32 NNDEPIABPMF; // 0x24
	::System::Int32 _DCNOJOAIKJM_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGKFIBHGB__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGKFIBHGB_DISPOSE_OFFSET))(this);
	}

	::System::Int32 get_Layer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGKFIBHGB_GET_LAYER_OFFSET))(this);
	}

	::System::Int32 get_SubLayer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGKFIBHGB_GET_SUBLAYER_OFFSET))(this);
	}

	::System::Int32 get_Order()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGKFIBHGB_GET_ORDER_OFFSET))(this);
	}

	::System::Void Set(::System::Int32 OCALHHLFBAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCKGKFIBHGB_SET_OFFSET))(this, OCALHHLFBAF);
	}

	::System::Int32 DOLGNIIJCEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKGKFIBHGB_DOLGNIIJCEF_OFFSET))(this);
	}

	::System::Void DNMEMIKEJGM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCKGKFIBHGB_DNMEMIKEJGM_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::BCKGKFIBHGB* COKNIICCODC(::System::Int32 KMOHKCADPNA, ::System::Int32 BBFAJBKOAOB, ::UnityEngine::Renderer* DLJPLHKELCO, ::System::Int32 HCOKMJNBPHI, ::System::Boolean CDEKMAEDOAA)
	{
		return ((::BCKGKFIBHGB*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BCKGKFIBHGB_COKNIICCODC_OFFSET))(KMOHKCADPNA, BBFAJBKOAOB, DLJPLHKELCO, HCOKMJNBPHI, CDEKMAEDOAA);
	}

	::System::Void KJMNODCDNFI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCKGKFIBHGB_KJMNODCDNFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ICELNPNKMMC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCKGKFIBHGB_ICELNPNKMMC_OFFSET))(this, EGEGIMGMJHN);
	}
};
