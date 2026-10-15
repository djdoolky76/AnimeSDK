#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetGraphDynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB4C20)
#define RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB4C30)
#define RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB4BE0)

namespace RPG::GameCore
{
	class SetGraphDynamicFloat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Boolean TargetSelf; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::UInt32>* TargetIDs; // 0x28
		::RPG::GameCore::DynamicFloat* Value; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetGraphDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetGraphDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGRAPHDYNAMICFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
