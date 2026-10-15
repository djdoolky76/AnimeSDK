#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarEffectType.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }
namespace System { class String; }

#define BBDFGMBNDGD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E854D0)

inline static constexpr unsigned int BBDFGMBNDGD_TypeDefinitionIndex = 55590;

	class BBDFGMBNDGD : public ::System::Object
	{
	public:
		::System::String* PDPFAPMCMMI; // 0x10
		::System::String* AJHFKOGFFOP; // 0x18
		::System::Boolean BECLGNONOID; // 0x20
		::System::Nullable* FEDOIDAMKEI; // 0x21
		::System::Nullable* LEFMBOJIBDM; // 0x23
		::RPG::GameCore::VersusBarReasonTipType PLAOODOLLAI; // 0x28
		::System::Byte _padding0[0x4];
		::System::Nullable* BCCHCNNIEDB; // 0x30
		::System::Byte _padding1[0x8];
		::RPG::GameCore::FixPoint JCCPFJKEALD; // 0x40
		::System::Nullable* EFJAHDEMACL; // 0x48
		::System::Byte _padding2[0x8];
		::RPG::GameCore::VersusBarEffectType GLKADJGGONI; // 0x58
		::System::Byte _padding3[0x4];
		::System::Nullable* HOELGLIGJMC; // 0x60
		::System::Byte _padding4[0x8];
		::RPG::Client::TextID FFFAFHAPNII; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDFGMBNDGD_CTOR_OFFSET))(this);
		}

	};
