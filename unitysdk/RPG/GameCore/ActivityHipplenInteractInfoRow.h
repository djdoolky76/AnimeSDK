#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E576440)
#define RPG_GAMECORE_ACTIVITYHIPPLENINTERACTINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E576110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenInteractInfoRow_TypeDefinitionIndex = 11710;

	class ActivityHipplenInteractInfoRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* PropIDList; // 0x18
		::System::String* JsonConfigPath; // 0x20
		::System::String* PrefabPath; // 0x28
		::RPG::Client::TextID Hint; // 0x30
		::RPG::GameCore::HipplenInteractType Type; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID InAreaHint; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenInteractInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenInteractInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINTERACTINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
