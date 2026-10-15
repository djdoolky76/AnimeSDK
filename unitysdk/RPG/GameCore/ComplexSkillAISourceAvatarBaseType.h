#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceAvatarBaseType; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CF9C0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CF9D0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CF960)

namespace RPG::GameCore
{
	class ComplexSkillAISourceAvatarBaseType : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AvatarBaseType BaseType; // 0x14
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceAvatarBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAVATARBASETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
