#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonOfflineCullingCellSerializeData.h"
class FCOEMCEDLNL;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::GameCore { class JsonOfflineCullingCellData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSerializeData; }

#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A2360)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7A1F50)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D7A1E30)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A2370)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A2330)

namespace RPG::GameCore
{
	class JsonOfflineCullingCellData : public ::RPG::GameCore::JsonOfflineCullingCellSerializeData
	{
	public:
		::Collections::Pooled::PooledList_1<::RPG::GameCore::JsonOfflineCullingCellSerializeData*>* ChildData; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_DISPOSE_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::JsonOfflineCullingCellData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JsonOfflineCullingCellData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::JsonOfflineCullingCellData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JsonOfflineCullingCellData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
