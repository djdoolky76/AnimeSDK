#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropMove; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94F3B0)
#define RPG_GAMECORE_PROPMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94F3E0)
#define RPG_GAMECORE_PROPMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94F360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropMove_TypeDefinitionIndex = 21965;

	class PropMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::String* RelativePath; // 0x28
		::System::Single Duration; // 0x30
		::RPG::MVector3 DeltaPosition; // 0x34
		::RPG::MVector3 DeltaRotation; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x50
		::System::Boolean IsLocalMove; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
