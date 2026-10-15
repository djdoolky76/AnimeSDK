#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTalkCondition; }

#define RPG_GAMECORE_CHIMERATALKCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5814F0)
#define RPG_GAMECORE_CHIMERATALKCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5813A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkCondition_TypeDefinitionIndex = 15852;

	class ChimeraTalkCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraTalkConditionType Type; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FixPoint>* Params; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraTalkCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraTalkCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
