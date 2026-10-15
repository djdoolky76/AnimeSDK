#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGABNLLLPO.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Rect.h"
class CDMKKCHJKLE;

#define CLKDGILIGID_ANCPCCBKFMM_OFFSET UNITYSDK_OFFSET(0xD790320)
#define CLKDGILIGID_BAIJAHIIOOK_OFFSET UNITYSDK_OFFSET(0xD78FDA0)
#define CLKDGILIGID_CNEPBGKAIBM_OFFSET UNITYSDK_OFFSET(0xD790260)
#define CLKDGILIGID_CTOR_OFFSET UNITYSDK_OFFSET(0xD7903C0)
#define CLKDGILIGID_GET_CONTENTSCALE_OFFSET UNITYSDK_OFFSET(0xD7903A0)
#define CLKDGILIGID_HICNMKGDJJL_OFFSET UNITYSDK_OFFSET(0xD790200)
#define CLKDGILIGID_ICMDFJKCFBC_OFFSET UNITYSDK_OFFSET(0xD78FC50)
#define CLKDGILIGID_IHFFNGOCJGI_OFFSET UNITYSDK_OFFSET(0xD7900A0)
#define CLKDGILIGID_LLPOEBIJJEK_OFFSET UNITYSDK_OFFSET(0xD790160)
#define CLKDGILIGID_NCKICPBOBKH_OFFSET UNITYSDK_OFFSET(0xD78FF60)
#define CLKDGILIGID_NNFIBBIGGEB_OFFSET UNITYSDK_OFFSET(0xD78FE90)
#define CLKDGILIGID_PEHEAHBCCAE_OFFSET UNITYSDK_OFFSET(0xD78FC00)
#define CLKDGILIGID_SET_CONTENTSCALE_OFFSET UNITYSDK_OFFSET(0xD7903B0)

inline static constexpr unsigned int CLKDGILIGID_TypeDefinitionIndex = 68328;

	class CLKDGILIGID : public ::CNGABNLLLPO
	{
	public:
		::UnityEngine::Vector2 GKBJAMOLIMB; // 0x20
		::UnityEngine::Vector2 BKDAJMLLCAB; // 0x28
		::UnityEngine::Vector2 MADFNCICMLL; // 0x30
		::System::Single _ContentScale_k__BackingField; // 0x38
		::System::Single ALHEILAGKFE; // 0x3C
		::UnityEngine::Vector2 LDCOGGFGCDD; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_CTOR_OFFSET))(this);
		}

		::System::Void PEHEAHBCCAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_PEHEAHBCCAE_OFFSET))(this);
		}

		::System::Void BAIJAHIIOOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_BAIJAHIIOOK_OFFSET))(this);
		}

		::System::Void ICMDFJKCFBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_ICMDFJKCFBC_OFFSET))(this);
		}

		::System::Void NNFIBBIGGEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_NNFIBBIGGEB_OFFSET))(this);
		}

		::CDMKKCHJKLE* IHFFNGOCJGI()
		{
			return ((::CDMKKCHJKLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_IHFFNGOCJGI_OFFSET))(this);
		}

		::UnityEngine::Rect LLPOEBIJJEK()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_LLPOEBIJJEK_OFFSET))(this);
		}

		::System::Single HICNMKGDJJL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_HICNMKGDJJL_OFFSET))(this);
		}

		::System::Single CNEPBGKAIBM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_CNEPBGKAIBM_OFFSET))(this);
		}

		::UnityEngine::Rect NCKICPBOBKH()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_NCKICPBOBKH_OFFSET))(this);
		}

		::UnityEngine::Vector2 ANCPCCBKFMM()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_ANCPCCBKFMM_OFFSET))(this);
		}

		::System::Single get_ContentScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKDGILIGID_GET_CONTENTSCALE_OFFSET))(this);
		}

		::System::Void set_ContentScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLKDGILIGID_SET_CONTENTSCALE_OFFSET))(this, a1);
		}

	};
