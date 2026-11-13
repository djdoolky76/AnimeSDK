#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarEffectType.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BBDFGMBNDGD_CTOR_OFFSET UNITYSDK_OFFSET(0x199F0DC0)

inline static constexpr unsigned int BBDFGMBNDGD_TypeDefinitionIndex = 56786;

	class BBDFGMBNDGD : public ::System::Object
	{
	public:
		::System::String* PDPFAPMCMMI; // 0x10
		::System::String* AJHFKOGFFOP; // 0x18
		::System::Boolean BECLGNONOID; // 0x20
		::System::Nullable_1<::System::Boolean> FEDOIDAMKEI; // 0x21
		::System::Nullable_1<::System::Boolean> LEFMBOJIBDM; // 0x23
		::System::Nullable_1<::RPG::GameCore::FixPoint> HOELGLIGJMC; // 0x28
		::System::Byte _padding0[0x8];
		::RPG::GameCore::VersusBarEffectType GLKADJGGONI; // 0x38
		::RPG::GameCore::VersusBarReasonTipType PLAOODOLLAI; // 0x3C
		::System::Nullable_1<::RPG::GameCore::FixPoint> EFJAHDEMACL; // 0x40
		::System::Byte _padding1[0x8];
		::RPG::Client::TextID FFFAFHAPNII; // 0x50
		::System::Nullable_1<::RPG::GameCore::FixPoint> BCCHCNNIEDB; // 0x60
		::System::Byte _padding2[0x8];
		::RPG::GameCore::FixPoint JCCPFJKEALD; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDFGMBNDGD_CTOR_OFFSET))(this);
		}

	};
