#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicValueRangeCallback; }
namespace RPG::GameCore { class DynamicValueRangeGroup; }

#define RPG_GAMECORE_DYNAMICVALUERANGEGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D62CCE0)
#define RPG_GAMECORE_DYNAMICVALUERANGEGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D62CB30)

namespace RPG::GameCore
{
	class DynamicValueRangeGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash Key; // 0x10
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x14
		::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>* Ranges; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUERANGEGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicValueRangeGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicValueRangeGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUERANGEGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
