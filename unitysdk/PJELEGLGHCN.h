#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PJELEGLGHCN_CTOR_OFFSET UNITYSDK_OFFSET(0xC27CBD0)

inline static constexpr unsigned int PJELEGLGHCN_TypeDefinitionIndex = 82000;

	class PJELEGLGHCN : public ::System::Object
	{
	public:
		::System::String* CNPMPHNKALI; // 0x10
		::System::Action_1<::System::UInt32>* ONPCPLEECCG; // 0x18
		::RPG::Client::TextID OHLBMAGECPM; // 0x20
		::System::Boolean HELJNHNDCJP; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID CAEPCCBODOM; // 0x38
		::RPG::GameCore::B51RacingPartType BGFKAMOLKPN; // 0x48
		::System::UInt32 BAGPBCADCJN; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJELEGLGHCN_CTOR_OFFSET))(this);
		}

	};
