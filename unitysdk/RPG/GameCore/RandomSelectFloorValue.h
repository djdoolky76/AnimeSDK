#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RandomSelectFloorValue; }

#define RPG_GAMECORE_RANDOMSELECTFLOORVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93E640)
#define RPG_GAMECORE_RANDOMSELECTFLOORVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93E650)
#define RPG_GAMECORE_RANDOMSELECTFLOORVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93E610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectFloorValue_TypeDefinitionIndex = 21212;

	class RandomSelectFloorValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicString*>* FloorValueKeyList; // 0x18
		::System::Boolean IsClientValue; // 0x20
		::System::Boolean RandomZero; // 0x21
		::System::Byte _padding0[0x6];
		::RPG::GameCore::DynamicString* CustomStringPrefix; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTFLOORVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectFloorValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectFloorValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTFLOORVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectFloorValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectFloorValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTFLOORVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
