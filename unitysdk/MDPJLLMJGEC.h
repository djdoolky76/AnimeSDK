#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialPlatformType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MDPJLLMJGEC;
namespace System { class String; }

#define MDPJLLMJGEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D11F350)
#define MDPJLLMJGEC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D11F140)

inline static constexpr unsigned int MDPJLLMJGEC_TypeDefinitionIndex = 15396;

	class MDPJLLMJGEC : public ::System::Object
	{
	public:
		::System::String* FBKAMIHGLFK; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::RPG::GameCore::TutorialPlatformType FLEADHOPGGN; // 0x1C
		::RPG::Client::TextID PJHMJKEIGOA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPJLLMJGEC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDPJLLMJGEC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDPJLLMJGEC*))((::PBYTE)hIl2Cpp + MDPJLLMJGEC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
