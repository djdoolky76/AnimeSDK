#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupInitMemberEntityTransform; }

#define RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71DC20)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71DC30)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71DBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupInitMemberEntityTransform_TypeDefinitionIndex = 20736;

	class GroupInitMemberEntityTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EntityInstanceID; // 0x18
		::RPG::MVector3 InitPosition; // 0x1C
		::RPG::MVector3 InitRotation; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupInitMemberEntityTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupInitMemberEntityTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupInitMemberEntityTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupInitMemberEntityTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
