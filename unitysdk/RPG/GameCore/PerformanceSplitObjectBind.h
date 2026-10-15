#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceSplitObjectAnimMap; }
namespace RPG::GameCore { class PerformanceSplitObjectBind; }

#define RPG_GAMECORE_PERFORMANCESPLITOBJECTBIND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D906D00)
#define RPG_GAMECORE_PERFORMANCESPLITOBJECTBIND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D906BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSplitObjectBind_TypeDefinitionIndex = 17576;

	class PerformanceSplitObjectBind : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChildInstanceID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::PerformanceSplitObjectAnimMap*>* MainStateToChildState; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESPLITOBJECTBIND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSplitObjectBind* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSplitObjectBind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESPLITOBJECTBIND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
