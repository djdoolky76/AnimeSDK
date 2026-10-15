#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonOfflineCullingCellSerializeData.h"
class FCOEMCEDLNL;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::GameCore { class JsonOfflineCullingCellData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSerializeData; }

#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7748E0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7744D0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D7743B0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7748F0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7748B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonOfflineCullingCellData_TypeDefinitionIndex = 18280;

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
