#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KOKAABJDLFL_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xB59B810)
#define KOKAABJDLFL_AEPOGFLMGPC_OFFSET UNITYSDK_OFFSET(0xB59B3F0)
#define KOKAABJDLFL_CTOR_OFFSET UNITYSDK_OFFSET(0xB59BB00)
#define KOKAABJDLFL_EIDAGEFKFLK_OFFSET UNITYSDK_OFFSET(0xB59B540)
#define KOKAABJDLFL_KJNAKPKLOKK_OFFSET UNITYSDK_OFFSET(0xB59B260)
#define KOKAABJDLFL_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xB59B2F0)
#define KOKAABJDLFL_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0xB59BA90)
#define KOKAABJDLFL_PPFADNDGHHM_OFFSET UNITYSDK_OFFSET(0xB59B960)

	class KOKAABJDLFL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKAABJDLFL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Boolean>* KJNAKPKLOKK()
		{
			return ((::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + KOKAABJDLFL_KJNAKPKLOKK_OFFSET))();
		}

		::System::Boolean LCJMKJPECAP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOKAABJDLFL_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean AEPOGFLMGPC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOKAABJDLFL_AEPOGFLMGPC_OFFSET))(this, a1);
		}

		::System::Void EIDAGEFKFLK(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KOKAABJDLFL_EIDAGEFKFLK_OFFSET))(this, a1, a2);
		}

		::System::Boolean AALCFBOGFKP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOKAABJDLFL_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* PPFADNDGHHM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKAABJDLFL_PPFADNDGHHM_OFFSET))(this);
		}

		::System::Void OHCJOIANPFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKAABJDLFL_OHCJOIANPFG_OFFSET))(this);
		}

	};
