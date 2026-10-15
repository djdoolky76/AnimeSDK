#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::GameCore { class JsonOfflineCullingCellSubData; }

#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A2DA0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7A2A90)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D7A29C0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A2B60)

namespace RPG::GameCore
{
	class JsonOfflineCullingCellSubData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UseCompression; // 0x10
		::System::Byte _padding0[0x7];
		::Collections::Pooled::PooledList_1<::System::Int32>* CullingCompletelyObjs; // 0x18
		::Collections::Pooled::PooledList_1<::System::Int32>* CullingPartialObjs; // 0x20
		::Collections::Pooled::PooledList_1<::System::Int32>* CullingCompletelyObjsSecondCompress; // 0x28
		::Collections::Pooled::PooledList_1<::System::Int32>* CullingPartialObjsSecondCompress; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_DISPOSE_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::JsonOfflineCullingCellSubData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JsonOfflineCullingCellSubData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
