#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BCMNLOPKLDO.h"
namespace System { class String; }

#define HFCIKOMDEIM_APHKGPOCPBG_OFFSET UNITYSDK_OFFSET(0x15C702E0)
#define HFCIKOMDEIM_BKJAIHLBGAC_OFFSET UNITYSDK_OFFSET(0x15C70590)
#define HFCIKOMDEIM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C70220)
#define HFCIKOMDEIM_GAJOGNKBPJC_OFFSET UNITYSDK_OFFSET(0x15C70280)
#define HFCIKOMDEIM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C70340)
#define HFCIKOMDEIM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C70240)

	class HFCIKOMDEIM : public ::System::Object
	{
	public:
		::System::String* NCDGDDKNMDB; // 0x10
		::System::String* BNAEJLJFMLB; // 0x18
		::System::Int32 MJLLBKNFJLA; // 0x20
		::System::Boolean KGKKOOOJMAJ; // 0x24
		::System::Boolean OHNFDEBPBMO; // 0x25
		::System::Boolean MBKFKOHFPAA; // 0x26
		::System::Boolean IFMNPPJCIOD; // 0x27
		::System::Single MFHEDGJMFFD; // 0x28
		::System::Single KCJJMLHECEL; // 0x2C
		::System::Int32 MEKEEFKCDCN; // 0x30
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HFCIKOMDEIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCIKOMDEIM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void GAJOGNKBPJC(::BCMNLOPKLDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMNLOPKLDO))((::PBYTE)hIl2Cpp + HFCIKOMDEIM_GAJOGNKBPJC_OFFSET))(this, a1);
		}

		::System::Void APHKGPOCPBG(::BCMNLOPKLDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMNLOPKLDO))((::PBYTE)hIl2Cpp + HFCIKOMDEIM_APHKGPOCPBG_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::BCMNLOPKLDO a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::BCMNLOPKLDO))((::PBYTE)hIl2Cpp + HFCIKOMDEIM_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Void BKJAIHLBGAC(::BCMNLOPKLDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMNLOPKLDO))((::PBYTE)hIl2Cpp + HFCIKOMDEIM_BKJAIHLBGAC_OFFSET))(this, a1);
		}

	};
