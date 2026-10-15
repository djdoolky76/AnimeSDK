#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IMOMNFBEDHG_CTOR_OFFSET UNITYSDK_OFFSET(0x164D5D70)

inline static constexpr unsigned int IMOMNFBEDHG_TypeDefinitionIndex = 82052;

	class IMOMNFBEDHG : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::String* CKEFIEOGMFE; // 0x18
		::System::String* OFLGPHEHLDH; // 0x20
		::RPG::Client::TextID JOODIHDMDPK; // 0x28
		::System::Boolean DEHFDFKNAAI; // 0x38
		::System::Boolean IDMJPIPGBOG; // 0x39
		::System::Boolean BPDIGKDIJKN; // 0x3A
		::System::Boolean ELJBCBOENEI; // 0x3B
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID KOKDCGOMLEA; // 0x40
		::RPG::GameCore::B51RacingContentType LAOACNPDOLD; // 0x50
		::System::Int32 ODHDBHBKKJJ; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMNFBEDHG_CTOR_OFFSET))(this);
		}

	};
