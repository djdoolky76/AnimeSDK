#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class MonoDeferredDecalMonoPlugin; }

#define JFGAGOFCLMH_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1664C7C0)
#define JFGAGOFCLMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1664C800)
#define JFGAGOFCLMH_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0x1664C700)
#define JFGAGOFCLMH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1664C2E0)
#define JFGAGOFCLMH_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1664C780)
#define JFGAGOFCLMH_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1664C320)
#define JFGAGOFCLMH_PNHKKDHKBCM_OFFSET UNITYSDK_OFFSET(0x1664C740)

	class JFGAGOFCLMH : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGAGOFCLMH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGAGOFCLMH_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGAGOFCLMH_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void PNHKKDHKBCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGAGOFCLMH_PNHKKDHKBCM_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGAGOFCLMH_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGAGOFCLMH_CGEJMGFOLMP_OFFSET))(this);
		}

		::RPG::Client::MonoDeferredDecalMonoPlugin* JJINILFDJOF()
		{
			return ((::RPG::Client::MonoDeferredDecalMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGAGOFCLMH_JJINILFDJOF_OFFSET))(this);
		}

	};
