#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IMOMNFBEDHG_CTOR_OFFSET UNITYSDK_OFFSET(0xB813710)

inline static constexpr unsigned int IMOMNFBEDHG_TypeDefinitionIndex = 84834;

	class IMOMNFBEDHG : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::String* OFLGPHEHLDH; // 0x18
		::System::String* CKEFIEOGMFE; // 0x20
		::RPG::GameCore::B51RacingContentType LAOACNPDOLD; // 0x28
		::System::Boolean IDMJPIPGBOG; // 0x2C
		::System::Boolean BPDIGKDIJKN; // 0x2D
		::System::Boolean ELJBCBOENEI; // 0x2E
		::System::Boolean DEHFDFKNAAI; // 0x2F
		::System::Int32 ODHDBHBKKJJ; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID JOODIHDMDPK; // 0x38
		::RPG::Client::TextID KOKDCGOMLEA; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMNFBEDHG_CTOR_OFFSET))(this);
		}

	};
