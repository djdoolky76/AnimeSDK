#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfflineCullingData; }

#define RPG_GAMECORE_OFFLINECULLINGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DFED0)
#define RPG_GAMECORE_OFFLINECULLINGDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DFBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfflineCullingData_TypeDefinitionIndex = 19169;

	class OfflineCullingData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 CullingRangeCenter; // 0x10
		::RPG::MVector3 CullingRangeSize; // 0x1C
		::Il2CppArray<::System::Int32>* CullingCompletelyObjIndex; // 0x28
		::Il2CppArray<::System::Int32>* CullingPartiallyObjIndex; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OfflineCullingData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OfflineCullingData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
