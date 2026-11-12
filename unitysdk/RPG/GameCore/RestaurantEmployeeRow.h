#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantEmployeeRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTEMPLOYEEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBD9CB0)
#define RPG_GAMECORE_RESTAURANTEMPLOYEEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBD97A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEmployeeRow_TypeDefinitionIndex = 11395;

	class RestaurantEmployeeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::System::String* IMGPath; // 0x18
		::System::String* Model; // 0x20
		::System::UInt32 ConfigID; // 0x28
		::RPG::GameCore::RestaurantEmployeeType Type; // 0x2C
		::System::UInt32 NPCID; // 0x30
		::System::UInt32 GroupID; // 0x34
		::System::UInt32 EmployeeID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID FirstTalk; // 0x40
		::RPG::Client::TextID Detail; // 0x50
		::System::Boolean IsShow; // 0x60
		::System::Byte _padding1[0x3];
		::System::UInt32 BehaviorID; // 0x64
		::RPG::Client::TextID Name; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEMPLOYEEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantEmployeeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantEmployeeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEMPLOYEEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
