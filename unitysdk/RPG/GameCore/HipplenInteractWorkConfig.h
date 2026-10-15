#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenInteractWorkConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76ACC0)
#define RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76E150)
#define RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76DFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenInteractWorkConfig_TypeDefinitionIndex = 16784;

	class HipplenInteractWorkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RequireTime; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AIConfigPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenInteractWorkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenInteractWorkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenInteractWorkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenInteractWorkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
