#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeConditionLogicType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }

#define RPG_GAMECORE_LEVELNAVNODECONDITIONINFOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D78BE90)
#define RPG_GAMECORE_LEVELNAVNODECONDITIONINFOS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D78BD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeConditionInfos_TypeDefinitionIndex = 17159;

	class LevelNavNodeConditionInfos : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelNavNodeConditionLogicType ConditionLogicType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* Conditions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODECONDITIONINFOS_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNavNodeConditionInfos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNavNodeConditionInfos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODECONDITIONINFOS_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
