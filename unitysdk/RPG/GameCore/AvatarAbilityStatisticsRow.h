#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarAbilityStatisticsRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARABILITYSTATISTICSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40AE60)
#define RPG_GAMECORE_AVATARABILITYSTATISTICSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D40AD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAbilityStatisticsRow_TypeDefinitionIndex = 12850;

	class AvatarAbilityStatisticsRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ExtractionAbilityList; // 0x10
		::System::UInt32 AvatarID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARABILITYSTATISTICSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarAbilityStatisticsRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarAbilityStatisticsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARABILITYSTATISTICSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
