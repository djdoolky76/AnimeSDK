#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BlockInputController; }
namespace System { class String; }

#define RPG_GAMECORE_BLOCKINPUTCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D440F60)
#define RPG_GAMECORE_BLOCKINPUTCONTROLLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D440F70)
#define RPG_GAMECORE_BLOCKINPUTCONTROLLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D440F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockInputController_TypeDefinitionIndex = 20469;

	class BlockInputController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* ActionNameList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKINPUTCONTROLLER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockInputController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockInputController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKINPUTCONTROLLER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockInputController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockInputController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKINPUTCONTROLLER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
