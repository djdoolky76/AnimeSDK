#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConstructBodyPart; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_CONSTRUCTBODYPART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ACE40)
#define RPG_GAMECORE_CONSTRUCTBODYPART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5ACE60)
#define RPG_GAMECORE_CONSTRUCTBODYPART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5ACE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstructBodyPart_TypeDefinitionIndex = 22699;

	class ConstructBodyPart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PartName; // 0x18
		::RPG::GameCore::DynamicFloat* MonsterID; // 0x20
		::RPG::GameCore::DynamicFloat* EnhancedID; // 0x28
		::System::Int32 TeamLocationOffset; // 0x30
		::System::Boolean TeamLocationOffsetInGroup; // 0x34
		::System::Byte _padding0[0x3];
		::System::Int32 IdentifyType; // 0x38
		::System::Boolean LinkedStance; // 0x3C
		::System::Boolean LinkedHitByPart; // 0x3D
		::System::Boolean IndependentVisualLayer; // 0x3E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTRUCTBODYPART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConstructBodyPart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConstructBodyPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTRUCTBODYPART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConstructBodyPart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConstructBodyPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTRUCTBODYPART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
