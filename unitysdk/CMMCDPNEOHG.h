#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMMCDPNEOHG_BBOOIHKKCNH_OFFSET UNITYSDK_OFFSET(0xDA3BB80)
#define CMMCDPNEOHG_DIDNEIKEMJC_OFFSET UNITYSDK_OFFSET(0xDA3BA80)
#define CMMCDPNEOHG_FCKNBMKMPGC_OFFSET UNITYSDK_OFFSET(0xDA3B8F0)
#define CMMCDPNEOHG_INOEHEOOMCA_OFFSET UNITYSDK_OFFSET(0xDA3BB20)
#define CMMCDPNEOHG_LACAGFCGGPM_OFFSET UNITYSDK_OFFSET(0xDA3BC40)
#define CMMCDPNEOHG_LHKDAODJOHC_OFFSET UNITYSDK_OFFSET(0xDA3B990)
#define CMMCDPNEOHG_MMMGHLBMNHN_OFFSET UNITYSDK_OFFSET(0xDA3B860)

	class CMMCDPNEOHG : public ::System::Object
	{
	public:
		static ::System::UInt32 MMMGHLBMNHN()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CMMCDPNEOHG_MMMGHLBMNHN_OFFSET))();
		}

		static ::System::Boolean FCKNBMKMPGC(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CMMCDPNEOHG_FCKNBMKMPGC_OFFSET))(a1, a2);
		}

		static ::System::Boolean LHKDAODJOHC(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CMMCDPNEOHG_LHKDAODJOHC_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::SubMissionState DIDNEIKEMJC(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
		{
			return ((::RPG::GameCore::SubMissionState(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CMMCDPNEOHG_DIDNEIKEMJC_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* INOEHEOOMCA(::RPG::Client::MapDef* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CMMCDPNEOHG_INOEHEOOMCA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* BBOOIHKKCNH()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)())((::PBYTE)hIl2Cpp + CMMCDPNEOHG_BBOOIHKKCNH_OFFSET))();
		}

		static ::RPG::GameCore::SubMissionInfoConfig* LACAGFCGGPM(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubMissionInfoConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CMMCDPNEOHG_LACAGFCGGPM_OFFSET))(a1);
		}

	};
