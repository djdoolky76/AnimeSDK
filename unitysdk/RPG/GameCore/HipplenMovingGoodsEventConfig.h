#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenMovingGoodsEventConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENMOVINGGOODSEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76EB10)
#define RPG_GAMECORE_HIPPLENMOVINGGOODSEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76E880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMovingGoodsEventConfig_TypeDefinitionIndex = 16792;

	class HipplenMovingGoodsEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Interval; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* InputList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BeforeInput; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInputSucc; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInputWrong; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDoubleSucc; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMOVINGGOODSEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenMovingGoodsEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenMovingGoodsEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMOVINGGOODSEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
