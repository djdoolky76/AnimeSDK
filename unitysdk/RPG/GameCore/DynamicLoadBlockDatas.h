#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicLoadBlockData; }
namespace RPG::GameCore { class DynamicLoadBlockDatas; }

#define RPG_GAMECORE_DYNAMICLOADBLOCKDATAS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6297A0)
#define RPG_GAMECORE_DYNAMICLOADBLOCKDATAS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6296B0)

namespace RPG::GameCore
{
	class DynamicLoadBlockDatas : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicLoadBlockData*>* Data; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATAS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicLoadBlockDatas* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicLoadBlockDatas*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATAS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
