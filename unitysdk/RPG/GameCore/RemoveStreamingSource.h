#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveStreamingSource; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVESTREAMINGSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D986B20)
#define RPG_GAMECORE_REMOVESTREAMINGSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D986B30)
#define RPG_GAMECORE_REMOVESTREAMINGSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D986AF0)

namespace RPG::GameCore
{
	class RemoveStreamingSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StreamingSource; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTREAMINGSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveStreamingSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTREAMINGSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveStreamingSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTREAMINGSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
