#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealLevelConfigRow; }

#define RPG_GAMECORE_MARBLESEALLEVELCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D819870)
#define RPG_GAMECORE_MARBLESEALLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D819580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealLevelConfigRow_TypeDefinitionIndex = 11851;

	class MarbleSealLevelConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillParamList; // 0x10
		::RPG::Client::TextID LevelUpTitle; // 0x18
		::System::UInt32 ID; // 0x28
		::System::UInt32 Level; // 0x2C
		::System::UInt32 UnlockSkillID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID LevelUpDesc; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALLEVELCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSealLevelConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSealLevelConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALLEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
