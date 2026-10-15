#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSkillLinkRow; }

#define RPG_GAMECORE_AVATARSKILLLINKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D42A920)
#define RPG_GAMECORE_AVATARSKILLLINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D42A780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillLinkRow_TypeDefinitionIndex = 12771;

	class AvatarSkillLinkRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LinkToAvatarIDList; // 0x10
		::Il2CppArray<::System::UInt32>* LinkToAvatarIDSimplifiedList; // 0x18
		::System::UInt32 SkillID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLLINKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarSkillLinkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarSkillLinkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLLINKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
