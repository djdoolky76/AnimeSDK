#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantEmployeeRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTEMPLOYEEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20727730)
#define RPG_GAMECORE_RESTAURANTEMPLOYEEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20727220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEmployeeRow_TypeDefinitionIndex = 11395;

	class RestaurantEmployeeRow : public ::System::Object
	{
	public:
		::System::String* Model; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::System::String* IMGPath; // 0x20
		::RPG::Client::TextID Detail; // 0x28
		::System::UInt32 NPCID; // 0x38
		::System::UInt32 ConfigID; // 0x3C
		::RPG::GameCore::RestaurantEmployeeType Type; // 0x40
		::System::UInt32 GroupID; // 0x44
		::System::Boolean IsShow; // 0x48
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID FirstTalk; // 0x50
		::RPG::Client::TextID Name; // 0x60
		::System::UInt32 BehaviorID; // 0x70
		::System::UInt32 EmployeeID; // 0x74
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
