#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Nullable; }

#define AGOFJCNEAFM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF465C0)
#define AGOFJCNEAFM_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xCF463B0)
#define AGOFJCNEAFM_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xCF46560)

	class AGOFJCNEAFM
	{
	public:
		::System::Nullable* LJLDPMLBAJB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFJCNEAFM_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFJCNEAFM_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGOFJCNEAFM_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
