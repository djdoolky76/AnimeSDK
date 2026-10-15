#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarCutinChangeConfigRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARCUTINCHANGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40DBF0)
#define RPG_GAMECORE_AVATARCUTINCHANGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D40DA60)

namespace RPG::GameCore
{
	class AvatarCutinChangeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* ChangeConditions; // 0x10
		::System::String* AvatarImgPath; // 0x18
		::System::UInt32 AvatarID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCUTINCHANGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarCutinChangeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarCutinChangeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCUTINCHANGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
