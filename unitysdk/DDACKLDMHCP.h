#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"
class BOGCBDLBHFK;

#define DDACKLDMHCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1B670)
#define DDACKLDMHCP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1CA1B680)
#define DDACKLDMHCP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CA1B910)

	class DDACKLDMHCP : public ::KIDPCOMKMKJ
	{
	public:
		::BOGCBDLBHFK* KAKEIDJDNHJ; // 0x18
		::System::Single PGMIOKKLHIE; // 0x20
		::System::Single HBDJCFFDGDD; // 0x24
		::System::Void _ctor(::BOGCBDLBHFK* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOGCBDLBHFK*, ::System::Single))((::PBYTE)hIl2Cpp + DDACKLDMHCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDACKLDMHCP_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDACKLDMHCP_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
