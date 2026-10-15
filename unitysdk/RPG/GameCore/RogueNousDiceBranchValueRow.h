#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousDiceBranchValueRow; }

#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA20030)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA1F920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceBranchValueRow_TypeDefinitionIndex = 14901;

	class RogueNousDiceBranchValueRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 AeonID; // 0x18
		::System::UInt32 BranchID; // 0x1C
		::RPG::Client::TextID BranchEffectDesc; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousDiceBranchValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousDiceBranchValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
