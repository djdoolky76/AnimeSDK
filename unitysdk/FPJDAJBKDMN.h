#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompatKey.h"
#include "unitysdk/RPG/Client/RegionBlockExecutionMode.h"
#include "unitysdk/RPG/Client/RegionContentLevel.h"
#include "unitysdk/RPG/Client/RegionVisibility.h"
#include "unitysdk/RPG/Client/ResolvedIntentKind.h"

#define FPJDAJBKDMN_CKIFPOGFBEG_OFFSET UNITYSDK_OFFSET(0x1591D3D0)
#define FPJDAJBKDMN_CTOR_OFFSET UNITYSDK_OFFSET(0x2E787F0)
#define FPJDAJBKDMN_GET_COMPATKEY_OFFSET UNITYSDK_OFFSET(0x211F0)
#define FPJDAJBKDMN_GET_CONTENTLEVEL_OFFSET UNITYSDK_OFFSET(0xFE70)
#define FPJDAJBKDMN_GET_KIND_OFFSET UNITYSDK_OFFSET(0xE620)
#define FPJDAJBKDMN_GET_MODE_OFFSET UNITYSDK_OFFSET(0x3260)
#define FPJDAJBKDMN_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0xACE0)
#define FPJDAJBKDMN_MIONMHGKICO_OFFSET UNITYSDK_OFFSET(0x1591D430)

inline static constexpr unsigned int FPJDAJBKDMN_TypeDefinitionIndex = 62164;

	struct alignas(4) FPJDAJBKDMN
	{
		::RPG::Client::ResolvedIntentKind _Kind_k__BackingField; // 0x10
		::RPG::Client::RegionContentLevel _ContentLevel_k__BackingField; // 0x14
		::RPG::Client::RegionVisibility _Visibility_k__BackingField; // 0x18
		::RPG::Client::CompatKey _CompatKey_k__BackingField; // 0x1C
		::RPG::Client::RegionBlockExecutionMode _Mode_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::ResolvedIntentKind a1, ::RPG::Client::RegionContentLevel a2, ::RPG::Client::RegionVisibility a3, ::RPG::Client::CompatKey a4, ::RPG::Client::RegionBlockExecutionMode a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ResolvedIntentKind, ::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility, ::RPG::Client::CompatKey, ::RPG::Client::RegionBlockExecutionMode))((::PBYTE)hIl2Cpp + FPJDAJBKDMN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		/*
		static ::FPJDAJBKDMN CKIFPOGFBEG()
		{
			return ((::FPJDAJBKDMN(*)())((::PBYTE)hIl2Cpp + FPJDAJBKDMN_CKIFPOGFBEG_OFFSET))();
		}
		*/

		/*
		static ::FPJDAJBKDMN MIONMHGKICO(::RPG::Client::RegionContentLevel a1, ::RPG::Client::RegionVisibility a2, ::RPG::Client::RegionBlockExecutionMode a3)
		{
			return ((::FPJDAJBKDMN(*)(::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility, ::RPG::Client::RegionBlockExecutionMode))((::PBYTE)hIl2Cpp + FPJDAJBKDMN_MIONMHGKICO_OFFSET))(a1, a2, a3);
		}
		*/

		::RPG::Client::ResolvedIntentKind get_Kind()
		{
			return ((::RPG::Client::ResolvedIntentKind(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJDAJBKDMN_GET_KIND_OFFSET))(this);
		}

		::RPG::Client::RegionContentLevel get_ContentLevel()
		{
			return ((::RPG::Client::RegionContentLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJDAJBKDMN_GET_CONTENTLEVEL_OFFSET))(this);
		}

		::RPG::Client::RegionVisibility get_Visibility()
		{
			return ((::RPG::Client::RegionVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJDAJBKDMN_GET_VISIBILITY_OFFSET))(this);
		}

		::RPG::Client::CompatKey get_CompatKey()
		{
			return ((::RPG::Client::CompatKey(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJDAJBKDMN_GET_COMPATKEY_OFFSET))(this);
		}

		::RPG::Client::RegionBlockExecutionMode get_Mode()
		{
			return ((::RPG::Client::RegionBlockExecutionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJDAJBKDMN_GET_MODE_OFFSET))(this);
		}

	};
