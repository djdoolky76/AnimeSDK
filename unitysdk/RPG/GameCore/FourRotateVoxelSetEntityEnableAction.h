#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelSetEntityEnableAction; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F2030)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F2040)
#define RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F2000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetEntityEnableAction_TypeDefinitionIndex = 16766;

	class FourRotateVoxelSetEntityEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnable; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* TriggerLayerNames; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelSetEntityEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETENTITYENABLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
