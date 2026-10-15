#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarDefaultMazeBuffRow; }

#define RPG_GAMECORE_AVATARDEFAULTMAZEBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40DD80)
#define RPG_GAMECORE_AVATARDEFAULTMAZEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D40DC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDefaultMazeBuffRow_TypeDefinitionIndex = 12769;

	class AvatarDefaultMazeBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DefaultMazeBuffIDList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 SkillIndex; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEFAULTMAZEBUFFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarDefaultMazeBuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarDefaultMazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEFAULTMAZEBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
