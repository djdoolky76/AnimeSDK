#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddStreamingSource; }
namespace RPG::GameCore { class StoryAdditionStreamingCenter; }

#define RPG_GAMECORE_ADDSTREAMINGSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38BD60)
#define RPG_GAMECORE_ADDSTREAMINGSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38BD70)
#define RPG_GAMECORE_ADDSTREAMINGSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38BD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddStreamingSource_TypeDefinitionIndex = 21241;

	class AddStreamingSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StoryAdditionStreamingCenter* StreamingSource; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTREAMINGSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddStreamingSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTREAMINGSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddStreamingSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTREAMINGSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
