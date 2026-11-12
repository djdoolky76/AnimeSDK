#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingIconType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingPolicyRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGPOLICYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A38A0)
#define RPG_GAMECORE_CHENLINGPOLICYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7A3490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingPolicyRow_TypeDefinitionIndex = 11088;

	class ChenLingPolicyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillSoldierList; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* RelatedCardList; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 EffectID; // 0x38
		::System::UInt32 Weight; // 0x3C
		::System::UInt32 SkillID; // 0x40
		::System::UInt32 ID; // 0x44
		::RPG::GameCore::ChenLingIconType IconType; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPOLICYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingPolicyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingPolicyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPOLICYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
