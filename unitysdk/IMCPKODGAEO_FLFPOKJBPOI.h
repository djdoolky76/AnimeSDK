#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMCPKODGAEO_BlendingMode.h"
#include "unitysdk/IMCPKODGAEO_ClippingPlane.h"
#include "unitysdk/IMCPKODGAEO_ColorGradient.h"
#include "unitysdk/IMCPKODGAEO_DepthBlend.h"
#include "unitysdk/IMCPKODGAEO_Noise3D.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }

#define IMCPKODGAEO_FLFPOKJBPOI_CTOR_OFFSET UNITYSDK_OFFSET(0x164D20E0)
#define IMCPKODGAEO_FLFPOKJBPOI_DKCOFAPIIJD_OFFSET UNITYSDK_OFFSET(0x164D1A80)
#define IMCPKODGAEO_FLFPOKJBPOI_HJPJAJNNLPE_OFFSET UNITYSDK_OFFSET(0x164D1AE0)

	class IMCPKODGAEO_FLFPOKJBPOI : public ::System::Object
	{
	public:
		::IMCPKODGAEO_BlendingMode PJIBGENOPEC; // 0x10
		::IMCPKODGAEO_ClippingPlane KDBMIODMHKO; // 0x14
		::IMCPKODGAEO_DepthBlend JEEJINHEOKH; // 0x18
		::IMCPKODGAEO_ColorGradient NMDPLLJEGHM; // 0x1C
		::IMCPKODGAEO_Noise3D KKHIFGPNKHD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPKODGAEO_FLFPOKJBPOI_CTOR_OFFSET))(this);
		}

		::System::Int32 DKCOFAPIIJD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCPKODGAEO_FLFPOKJBPOI_DKCOFAPIIJD_OFFSET))(this);
		}

		::System::Void HJPJAJNNLPE(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + IMCPKODGAEO_FLFPOKJBPOI_HJPJAJNNLPE_OFFSET))(this, a1);
		}

	};
