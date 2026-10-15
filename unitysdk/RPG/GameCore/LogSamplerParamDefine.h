#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogSamplerParamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LogSamplerParamDefine; }
namespace System { class String; }

#define RPG_GAMECORE_LOGSAMPLERPARAMDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C5E10)
#define RPG_GAMECORE_LOGSAMPLERPARAMDEFINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C5C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogSamplerParamDefine_TypeDefinitionIndex = 18163;

	class LogSamplerParamDefine : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Desc; // 0x18
		::RPG::GameCore::LogSamplerParamType Type; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERPARAMDEFINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LogSamplerParamDefine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LogSamplerParamDefine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERPARAMDEFINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
