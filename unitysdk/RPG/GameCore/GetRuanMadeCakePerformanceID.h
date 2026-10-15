#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GetRuanMadeCakePerformanceID; }
namespace System { class String; }

#define RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71DEA0)
#define RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71DEB0)
#define RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71DE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GetRuanMadeCakePerformanceID_TypeDefinitionIndex = 21104;

	class GetRuanMadeCakePerformanceID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RoomID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* DynamicStringKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GetRuanMadeCakePerformanceID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GetRuanMadeCakePerformanceID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GetRuanMadeCakePerformanceID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GetRuanMadeCakePerformanceID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETRUANMADECAKEPERFORMANCEID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
