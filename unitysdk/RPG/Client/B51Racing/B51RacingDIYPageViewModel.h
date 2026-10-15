#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingDIYDisplayMode.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
class CKNMJMCFPME;
class KIIGKJKMCHP;
class MONJFDPKFBA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYPAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC787570)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYPageViewModel_TypeDefinitionIndex = 81998;

	class B51RacingDIYPageViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::CKNMJMCFPME*>* PaintOptions; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::UInt32>* SelectedPartBySlot; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Il2CppArray<::KIIGKJKMCHP*>*>* SubSkillPartsByType; // 0x20
		::MONJFDPKFBA* ExitBaselineCar; // 0x28
		::Il2CppArray<::KIIGKJKMCHP*>* PartOptions; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Il2CppArray<::KIIGKJKMCHP*>*>*>* AllCarSubSkillParts; // 0x38
		::MONJFDPKFBA* PreviewCar; // 0x40
		::System::Int32 MaxNumLength; // 0x48
		::System::Boolean IsReEntry; // 0x4C
		::System::Boolean ShowSwitchPartTab; // 0x4D
		::System::Byte _padding0[0x2];
		::RPG::Client::B51Racing::B51RacingDIYDisplayMode Mode; // 0x50
		::System::Int32 CurrentTabIndex; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
