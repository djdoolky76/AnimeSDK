#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FoundationAndBallBind; }
namespace RPG::GameCore { class FoundationPropStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOUNDATIONANDBALLBIND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EC490)
#define RPG_GAMECORE_FOUNDATIONANDBALLBIND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EC170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FoundationAndBallBind_TypeDefinitionIndex = 17575;

	class FoundationAndBallBind : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BallInstanceID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FoundationPropStateConfig*>* PropStateConfigs; // 0x18
		::System::Boolean OverrideBallOffset; // 0x20
		::System::Byte _padding1[0x3];
		::RPG::MVector3 BallPositionOffset; // 0x24
		::System::Boolean OverrideFoundationAnim; // 0x30
		::System::Byte _padding2[0x7];
		::System::String* FoundationBrokenAnim; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOUNDATIONANDBALLBIND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FoundationAndBallBind* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FoundationAndBallBind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOUNDATIONANDBALLBIND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
