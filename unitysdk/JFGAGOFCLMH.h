#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class MonoDeferredDecalMonoPlugin; }

#define JFGAGOFCLMH_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1932F0F0)
#define JFGAGOFCLMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1932F130)
#define JFGAGOFCLMH_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0x1932F030)
#define JFGAGOFCLMH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1932EC10)
#define JFGAGOFCLMH_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1932F0B0)
#define JFGAGOFCLMH_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1932EC50)
#define JFGAGOFCLMH_PNHKKDHKBCM_OFFSET UNITYSDK_OFFSET(0x1932F070)

inline static constexpr unsigned int JFGAGOFCLMH_TypeDefinitionIndex = 72901;

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
