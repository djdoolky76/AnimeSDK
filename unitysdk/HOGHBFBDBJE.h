#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
class COPKPNCABFO;
class KFIKLIHGCCO;
class KFIKLIHGCCO_CIBLKPAIHOP;
namespace RPG::SurfaceCache { class SurfaceCacheGeneratorMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOGHBFBDBJE_BKOGCMIMDGA_OFFSET UNITYSDK_OFFSET(0x15DB48A0)
#define HOGHBFBDBJE_CFCBKAPDAAG_OFFSET UNITYSDK_OFFSET(0x15DB5C20)
#define HOGHBFBDBJE_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x15DB5730)
#define HOGHBFBDBJE_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB5E60)
#define HOGHBFBDBJE_DIFBJPCDPII_OFFSET UNITYSDK_OFFSET(0x15DB5870)
#define HOGHBFBDBJE_FHOKJPOCLFE_OFFSET UNITYSDK_OFFSET(0x15DB5CC0)
#define HOGHBFBDBJE_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0x15DB5D60)
#define HOGHBFBDBJE_FLIDIOKOLPO_OFFSET UNITYSDK_OFFSET(0x15DB5DD0)
#define HOGHBFBDBJE_FPPGIEGOKOJ_OFFSET UNITYSDK_OFFSET(0x15DB5BA0)
#define HOGHBFBDBJE_IOFEOAKEHNC_OFFSET UNITYSDK_OFFSET(0x15DB5D00)
#define HOGHBFBDBJE_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0x15DB4400)
#define HOGHBFBDBJE_KGJLCKGHEHF_OFFSET UNITYSDK_OFFSET(0x15DB5A50)
#define HOGHBFBDBJE_KOEDNFCINPK_OFFSET UNITYSDK_OFFSET(0x15DB5AA0)
#define HOGHBFBDBJE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15DB4480)
#define HOGHBFBDBJE_ONGKOCOOCOP_OFFSET UNITYSDK_OFFSET(0x15DB58E0)
#define HOGHBFBDBJE_TICK_OFFSET UNITYSDK_OFFSET(0x15DB57E0)

	class HOGHBFBDBJE : public ::RPG::Client::TABehaviorBase
	{
	public:
		::COPKPNCABFO* LPNEKAGNIDM; // 0x38
		::KFIKLIHGCCO* ABDGGIAEHEA; // 0x40
		// static const ::System::Object IELINPCOOIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_CTOR_OFFSET))(this);
		}

		::RPG::SurfaceCache::SurfaceCacheGeneratorMonoPlugin* JJINILFDJOF()
		{
			return ((::RPG::SurfaceCache::SurfaceCacheGeneratorMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_JJINILFDJOF_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_TICK_OFFSET))(this, a1);
		}

		::System::Void BKOGCMIMDGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_BKOGCMIMDGA_OFFSET))(this);
		}

		::System::Void DIFBJPCDPII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_DIFBJPCDPII_OFFSET))(this);
		}

		::System::Void ONGKOCOOCOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_ONGKOCOOCOP_OFFSET))(this);
		}

		::System::Void KGJLCKGHEHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_KGJLCKGHEHF_OFFSET))(this);
		}

		::System::Void KOEDNFCINPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_KOEDNFCINPK_OFFSET))(this);
		}

		::System::Void FPPGIEGOKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_FPPGIEGOKOJ_OFFSET))(this);
		}

		::KFIKLIHGCCO_CIBLKPAIHOP* CFCBKAPDAAG(::System::Int32 a1)
		{
			return ((::KFIKLIHGCCO_CIBLKPAIHOP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_CFCBKAPDAAG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* FHOKJPOCLFE()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_FHOKJPOCLFE_OFFSET))(this);
		}

		::System::Boolean IOFEOAKEHNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_IOFEOAKEHNC_OFFSET))(this);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_FHPAOJGFHHE_OFFSET))(this);
		}

		::System::Void FLIDIOKOLPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHBFBDBJE_FLIDIOKOLPO_OFFSET))(this);
		}

	};
