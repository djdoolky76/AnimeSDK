#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicBaseTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_RELICBASETYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9790C0)
#define RPG_GAMECORE_RELICBASETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9789D0)

namespace RPG::GameCore
{
	class RelicBaseTypeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* ValidPropertyList; // 0x10
		::System::String* BaseTypeIconPath; // 0x18
		::RPG::GameCore::RelicType Type; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BaseTypeText; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RelicBaseTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RelicBaseTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICBASETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
