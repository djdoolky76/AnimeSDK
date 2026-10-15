#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::OpenWorld { class OfflineCullingCellData; }
namespace RPG::Client::OpenWorld { class OfflineCullingCellSerializeData; }
namespace RPG::Client::OpenWorld { class OfflineCullingCellSubData; }
namespace RPG::GameCore { class JsonOfflineCullingCellData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSerializeData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSubData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFCCHLKCMPE_NHBLDMIHFDM_1_OFFSET UNITYSDK_OFFSET(0xB8ED450)
#define MFCCHLKCMPE_NHBLDMIHFDM_2_OFFSET UNITYSDK_OFFSET(0xB8ED880)
#define MFCCHLKCMPE_NHBLDMIHFDM_OFFSET UNITYSDK_OFFSET(0xB8ECE30)
#define MFCCHLKCMPE_OIOKFHDLKNB_OFFSET UNITYSDK_OFFSET(0xB8EDA80)

	class MFCCHLKCMPE : public ::System::Object
	{
	public:
		static ::RPG::GameCore::JsonOfflineCullingCellData* NHBLDMIHFDM(::RPG::Client::OpenWorld::OfflineCullingCellData* a1)
		{
			return ((::RPG::GameCore::JsonOfflineCullingCellData*(*)(::RPG::Client::OpenWorld::OfflineCullingCellData*))((::PBYTE)hIl2Cpp + MFCCHLKCMPE_NHBLDMIHFDM_OFFSET))(a1);
		}

		static ::RPG::GameCore::JsonOfflineCullingCellSubData* NHBLDMIHFDM_1(::RPG::Client::OpenWorld::OfflineCullingCellSubData* a1)
		{
			return ((::RPG::GameCore::JsonOfflineCullingCellSubData*(*)(::RPG::Client::OpenWorld::OfflineCullingCellSubData*))((::PBYTE)hIl2Cpp + MFCCHLKCMPE_NHBLDMIHFDM_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* OIOKFHDLKNB(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MFCCHLKCMPE_OIOKFHDLKNB_OFFSET))(a1);
		}

		static ::RPG::GameCore::JsonOfflineCullingCellSerializeData* NHBLDMIHFDM_2(::RPG::Client::OpenWorld::OfflineCullingCellSerializeData* a1)
		{
			return ((::RPG::GameCore::JsonOfflineCullingCellSerializeData*(*)(::RPG::Client::OpenWorld::OfflineCullingCellSerializeData*))((::PBYTE)hIl2Cpp + MFCCHLKCMPE_NHBLDMIHFDM_2_OFFSET))(a1);
		}

	};
