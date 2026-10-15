#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RoadRashGameAbilityValueModifer; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }

#define JOIJIEOCBFO_FHAFHANKIJL_OFFSET UNITYSDK_OFFSET(0x1CB79860)
#define JOIJIEOCBFO_MIJGMJAHHDO_OFFSET UNITYSDK_OFFSET(0x1CB79620)

inline static constexpr unsigned int JOIJIEOCBFO_TypeDefinitionIndex = 42886;

	class JOIJIEOCBFO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* MIJGMJAHHDO(::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*(*)(::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>*))((::PBYTE)hIl2Cpp + JOIJIEOCBFO_MIJGMJAHHDO_OFFSET))(a1);
		}

		static ::System::Single FHAFHANKIJL(::System::Single a1, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::System::Single, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JOIJIEOCBFO_FHAFHANKIJL_OFFSET))(a1, a2, a3);
		}

	};
