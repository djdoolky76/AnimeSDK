#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LogSamplerParamDefine; }
namespace RPG::GameCore { class LogSamplerTypeDefine; }
namespace System { class String; }

#define RPG_GAMECORE_LOGSAMPLERTYPEDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C6020)
#define RPG_GAMECORE_LOGSAMPLERTYPEDEFINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C5E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogSamplerTypeDefine_TypeDefinitionIndex = 18162;

	class LogSamplerTypeDefine : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Type; // 0x10
		::System::String* TypeDesc; // 0x18
		::Il2CppArray<::RPG::GameCore::LogSamplerParamDefine*>* Params; // 0x20
		::System::Boolean HideOverrideField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERTYPEDEFINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LogSamplerTypeDefine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LogSamplerTypeDefine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOGSAMPLERTYPEDEFINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
