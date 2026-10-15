#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DGLJEIBPNJJ_BHEPJPGKGIM_OFFSET UNITYSDK_OFFSET(0xE851B30)
#define DGLJEIBPNJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE851C90)
#define DGLJEIBPNJJ_DALIDHNIPLD_OFFSET UNITYSDK_OFFSET(0xE851C30)
#define DGLJEIBPNJJ_HLDKCBBOLBG_OFFSET UNITYSDK_OFFSET(0xE851B90)
#define DGLJEIBPNJJ_MIFJNPKACOB_OFFSET UNITYSDK_OFFSET(0xE851A30)

	class DGLJEIBPNJJ : public ::System::Object
	{
	public:
		// static const ::System::Object PMMHCOKDCGM; // 0x0
		// static const ::System::Object JPEHIOFGFPE; // 0x0
		// static const ::System::Object PHHHEFJJICP; // 0x0
		// static const ::System::Object HPDCIKOJFAJ; // 0x0
		// static const ::System::Object GOOJKAKPAJF; // 0x0
		// static const ::System::Object GNBCKPLPMHN; // 0x0
		// static const ::System::Object OELPEHJMEOK; // 0x0
		// static const ::System::Object DFJBLPBFBJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLJEIBPNJJ_CTOR_OFFSET))(this);
		}

		::System::Boolean MIFJNPKACOB(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + DGLJEIBPNJJ_MIFJNPKACOB_OFFSET))(this, a1, a2);
		}

		::System::Boolean BHEPJPGKGIM(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + DGLJEIBPNJJ_BHEPJPGKGIM_OFFSET))(this, a1);
		}

		::System::Boolean DALIDHNIPLD(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + DGLJEIBPNJJ_DALIDHNIPLD_OFFSET))(this, a1);
		}

		::System::Char HLDKCBBOLBG(::System::Char a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + DGLJEIBPNJJ_HLDKCBBOLBG_OFFSET))(this, a1);
		}

	};
