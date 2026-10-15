#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::GameCore { class BoundingBox; }
namespace RPG::GameCore { class JsonOfflineCullingCellSerializeData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSubData; }

#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A2610)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7A21A0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D7A20D0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A2780)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A2620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonOfflineCullingCellSerializeData_TypeDefinitionIndex = 18279;

	class JsonOfflineCullingCellSerializeData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Collections::Pooled::PooledList_1<::RPG::GameCore::JsonOfflineCullingCellSubData*>* CellSubData; // 0x10
		::System::Single CellSize; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BoundingBox* CellBound; // 0x20
		::System::Boolean UseCompression; // 0x28
		::System::Byte _padding1[0x3];
		::System::Int32 Index; // 0x2C
		::Collections::Pooled::PooledList_1<::System::Int32>* LightVisibilityData; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_DISPOSE_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::JsonOfflineCullingCellSerializeData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::JsonOfflineCullingCellSerializeData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
