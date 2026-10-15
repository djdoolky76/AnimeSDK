#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/System/Object.h"
class DMHNMEJKELL;
class FCOEMCEDLNL;
namespace System { class String; }

#define DMHNMEJKELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD16670)
#define DMHNMEJKELL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD164A0)

inline static constexpr unsigned int DMHNMEJKELL_TypeDefinitionIndex = 13931;

	class DMHNMEJKELL : public ::System::Object
	{
	public:
		::System::String* MJGHNNBHFML; // 0x10
		::RPG::GameCore::LimaoNewsOfficeSurveyType AAPEGNAHMJB; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BCNPCBKGFBK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHNMEJKELL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMHNMEJKELL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMHNMEJKELL*))((::PBYTE)hIl2Cpp + DMHNMEJKELL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
