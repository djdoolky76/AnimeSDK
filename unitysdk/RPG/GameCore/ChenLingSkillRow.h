#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D593DC0)
#define RPG_GAMECORE_CHENLINGSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D593C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSkillRow_TypeDefinitionIndex = 11039;

	class ChenLingSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* SkillParamList; // 0x10
		::System::String* SkillJsonConfig; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
