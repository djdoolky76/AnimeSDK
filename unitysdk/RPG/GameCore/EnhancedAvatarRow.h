#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnhancedAvatarRow; }
namespace System { class String; }

#define RPG_GAMECORE_ENHANCEDAVATARROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6443F0)
#define RPG_GAMECORE_ENHANCEDAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D643810)

namespace RPG::GameCore
{
	class EnhancedAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillList; // 0x10
		::System::String* AIPath; // 0x18
		::System::String* JsonPath; // 0x20
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x28
		::RPG::GameCore::FixPoint SPNeed; // 0x30
		::System::UInt32 AvatarID; // 0x38
		::System::UInt32 EnhancedID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATARROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnhancedAvatarRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnhancedAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
