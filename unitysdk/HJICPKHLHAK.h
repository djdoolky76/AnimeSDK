#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ANMMOFEEPEP.h"
#include "unitysdk/IHJCOALACON.h"
class DKBCNADLOGN;

#define HJICPKHLHAK_AEJHNEOCEHH_OFFSET UNITYSDK_OFFSET(0x15D246F0)
#define HJICPKHLHAK_CLEAR_OFFSET UNITYSDK_OFFSET(0x15D24750)
#define HJICPKHLHAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D24AA0)
#define HJICPKHLHAK_DLHHEKECOHA_OFFSET UNITYSDK_OFFSET(0x15D249E0)
#define HJICPKHLHAK_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x15D242C0)
#define HJICPKHLHAK_HCNKGCKOCOP_OFFSET UNITYSDK_OFFSET(0x15D247D0)
#define HJICPKHLHAK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15D24900)
#define HJICPKHLHAK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15D24420)
#define HJICPKHLHAK_MAODDEJIDJP_OFFSET UNITYSDK_OFFSET(0x15D24390)

inline static constexpr unsigned int HJICPKHLHAK_TypeDefinitionIndex = 60558;

	class HJICPKHLHAK : public ::System::Object
	{
	public:
		::DKBCNADLOGN* MBOEDFCNCJF; // 0x10
		::System::Boolean KPNBPJKADKD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJICPKHLHAK_CTOR_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJICPKHLHAK_GCCAABJLGIG_OFFSET))(this);
		}

		::ANMMOFEEPEP MAODDEJIDJP()
		{
			return ((::ANMMOFEEPEP(*)(::PVOID))((::PBYTE)hIl2Cpp + HJICPKHLHAK_MAODDEJIDJP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::ANMMOFEEPEP a1, ::IHJCOALACON a2)
		{
			return ((::System::Void(*)(::PVOID, ::ANMMOFEEPEP, ::IHJCOALACON))((::PBYTE)hIl2Cpp + HJICPKHLHAK_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJICPKHLHAK_CLEAR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJICPKHLHAK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DLHHEKECOHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJICPKHLHAK_DLHHEKECOHA_OFFSET))(this);
		}

		static ::DKBCNADLOGN* AEJHNEOCEHH(::System::Boolean a1)
		{
			return ((::DKBCNADLOGN*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HJICPKHLHAK_AEJHNEOCEHH_OFFSET))(a1);
		}

		static ::System::Void HCNKGCKOCOP(::DKBCNADLOGN* a1)
		{
			return ((::System::Void(*)(::DKBCNADLOGN*))((::PBYTE)hIl2Cpp + HJICPKHLHAK_HCNKGCKOCOP_OFFSET))(a1);
		}

	};
