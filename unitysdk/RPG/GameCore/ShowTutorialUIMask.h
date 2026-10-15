#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuidePC; }
namespace RPG::GameCore { class ShowTutorialUIMask; }
namespace RPG::GameCore { class TutorialAnimConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALUIMASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE72B0)
#define RPG_GAMECORE_SHOWTUTORIALUIMASK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE72C0)
#define RPG_GAMECORE_SHOWTUTORIALUIMASK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE7270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialUIMask_TypeDefinitionIndex = 24342;

	class ShowTutorialUIMask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Path; // 0x18
		::System::String* NodeID; // 0x20
		::System::Boolean Show; // 0x28
		::System::Boolean Is3DObject; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 Type; // 0x2C
		::System::Single OffsetX; // 0x30
		::System::Single OffsetY; // 0x34
		::System::Single Scale; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::GuidePC* PCGuide; // 0x40
		::RPG::GameCore::TutorialAnimConfig* AnimConfig; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUIMASK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialUIMask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialUIMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUIMASK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialUIMask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialUIMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALUIMASK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
