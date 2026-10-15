#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupInitMemberEntityAnimParameter; }
namespace RPG::GameCore { class GroupMemberEntityAnimatorParamConfig; }

#define RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71D730)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71D740)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71D700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupInitMemberEntityAnimParameter_TypeDefinitionIndex = 20739;

	class GroupInitMemberEntityAnimParameter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EntityInstanceID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::GroupMemberEntityAnimatorParamConfig*>* InitAnimatorParams; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupInitMemberEntityAnimParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupInitMemberEntityAnimParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupInitMemberEntityAnimParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupInitMemberEntityAnimParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYANIMPARAMETER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
