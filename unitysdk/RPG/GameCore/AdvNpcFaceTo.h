#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EWaitFaceToTaskFinishMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcFaceTo; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_ADVNPCFACETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D378200)
#define RPG_GAMECORE_ADVNPCFACETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D378210)
#define RPG_GAMECORE_ADVNPCFACETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3781C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcFaceTo_TypeDefinitionIndex = 20338;

	class AdvNpcFaceTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupNpcID; // 0x1C
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28
		::RPG::GameCore::DynamicString* AreaNameDS; // 0x30
		::RPG::GameCore::DynamicString* AnchorNameDS; // 0x38
		::RPG::MVector3 TargetPosition; // 0x40
		::System::Single Duration; // 0x4C
		::System::Boolean SteerImmediately; // 0x50
		::System::Boolean FinishImmadiate; // 0x51
		::System::Byte _padding0[0x2];
		::RPG::GameCore::EWaitFaceToTaskFinishMode WaitFinishMode; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcFaceTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcFaceTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcFaceTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcFaceTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
