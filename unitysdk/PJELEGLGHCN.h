#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PJELEGLGHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E8DD0)

inline static constexpr unsigned int PJELEGLGHCN_TypeDefinitionIndex = 84781;

	class PJELEGLGHCN : public ::System::Object
	{
	public:
		::System::Action_1<::System::UInt32>* ONPCPLEECCG; // 0x10
		::System::String* CNPMPHNKALI; // 0x18
		::System::Boolean HELJNHNDCJP; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::B51RacingPartType BGFKAMOLKPN; // 0x24
		::System::UInt32 BAGPBCADCJN; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID OHLBMAGECPM; // 0x30
		::RPG::Client::TextID CAEPCCBODOM; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJELEGLGHCN_CTOR_OFFSET))(this);
		}

	};
