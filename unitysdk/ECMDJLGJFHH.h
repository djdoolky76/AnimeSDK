#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EmotionData; }
namespace System { class String; }

#define ECMDJLGJFHH_ACFJNEJBANA_OFFSET UNITYSDK_OFFSET(0x12D137C0)
#define ECMDJLGJFHH_CTOR_OFFSET UNITYSDK_OFFSET(0x12D13910)

inline static constexpr unsigned int ECMDJLGJFHH_TypeDefinitionIndex = 69420;

	class ECMDJLGJFHH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMDJLGJFHH_CTOR_OFFSET))(this);
		}

		::RPG::Client::EmotionData* ACFJNEJBANA(::RPG::GameCore::EmotionID a1, ::System::String* a2)
		{
			return ((::RPG::Client::EmotionData*(*)(::PVOID, ::RPG::GameCore::EmotionID, ::System::String*))((::PBYTE)hIl2Cpp + ECMDJLGJFHH_ACFJNEJBANA_OFFSET))(this, a1, a2);
		}

	};
