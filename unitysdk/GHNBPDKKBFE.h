#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TrainPartyPerformanceDefineCharacter; }
namespace System { class String; }

#define GHNBPDKKBFE_MGKONMGHOKE_OFFSET UNITYSDK_OFFSET(0x15A2A690)

	class GHNBPDKKBFE : public ::System::Object
	{
	public:
		static ::System::String* MGKONMGHOKE(::RPG::GameCore::TrainPartyPerformanceDefineCharacter* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::TrainPartyPerformanceDefineCharacter*))((::PBYTE)hIl2Cpp + GHNBPDKKBFE_MGKONMGHOKE_OFFSET))(a1);
		}

	};
