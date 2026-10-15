#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitGroupUnload; }

#define RPG_GAMECORE_WAITGROUPUNLOAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6CBA0)
#define RPG_GAMECORE_WAITGROUPUNLOAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6CBB0)
#define RPG_GAMECORE_WAITGROUPUNLOAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6CB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitGroupUnload_TypeDefinitionIndex = 21230;

	class WaitGroupUnload : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUnload; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPUNLOAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGroupUnload* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGroupUnload*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPUNLOAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGroupUnload* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGroupUnload*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPUNLOAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
