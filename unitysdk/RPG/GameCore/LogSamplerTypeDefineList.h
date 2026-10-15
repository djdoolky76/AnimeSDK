#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LogSamplerTypeDefine; }
namespace RPG::GameCore { class LogSamplerTypeDefineList; }

#define RPG_GAMECORE_LOGSAMPLERTYPEDEFINELIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F3BA0)
#define RPG_GAMECORE_LOGSAMPLERTYPEDEFINELIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F3AB0)

namespace RPG::GameCore
{
	class LogSamplerTypeDefineList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LogSamplerTypeDefine*>* TypeDefines; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERTYPEDEFINELIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LogSamplerTypeDefineList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LogSamplerTypeDefineList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERTYPEDEFINELIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
