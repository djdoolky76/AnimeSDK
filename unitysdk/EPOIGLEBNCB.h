#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsInterviewContentType.h"
#include "unitysdk/System/Object.h"
class EPOIGLEBNCB;
class FCOEMCEDLNL;
namespace System { class String; }

#define EPOIGLEBNCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC16B0)
#define EPOIGLEBNCB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDC1460)

inline static constexpr unsigned int EPOIGLEBNCB_TypeDefinitionIndex = 13915;

	class EPOIGLEBNCB : public ::System::Object
	{
	public:
		::System::String* ODLDEEANNCM; // 0x10
		::System::String* EEIEODMEMFI; // 0x18
		::System::UInt32 DFFLADLLADD; // 0x20
		::RPG::GameCore::LimaoNewsInterviewContentType MMNJODIJPOE; // 0x24
		::RPG::Client::TextID ANECPHCPLPP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPOIGLEBNCB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EPOIGLEBNCB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EPOIGLEBNCB*))((::PBYTE)hIl2Cpp + EPOIGLEBNCB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
