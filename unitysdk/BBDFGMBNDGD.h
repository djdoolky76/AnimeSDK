#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/VersusBarEffectType.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BBDFGMBNDGD_CTOR_OFFSET UNITYSDK_OFFSET(0x16D09E40)

inline static constexpr unsigned int BBDFGMBNDGD_TypeDefinitionIndex = 56786;

	class BBDFGMBNDGD : public ::System::Object
	{
	public:
		::System::String* AJHFKOGFFOP; // 0x10
		::System::String* PDPFAPMCMMI; // 0x18
		::RPG::Client::TextID FFFAFHAPNII; // 0x20
		::System::Nullable_1<::RPG::GameCore::FixPoint> HOELGLIGJMC; // 0x30
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> BCCHCNNIEDB; // 0x40
		::System::Byte _padding1[0x8];
		::System::Nullable_1<::System::Boolean> FEDOIDAMKEI; // 0x50
		::System::Boolean BECLGNONOID; // 0x52
		::System::Nullable_1<::System::Boolean> LEFMBOJIBDM; // 0x53
		::RPG::GameCore::FixPoint JCCPFJKEALD; // 0x58
		::RPG::GameCore::VersusBarReasonTipType PLAOODOLLAI; // 0x60
		::RPG::GameCore::VersusBarEffectType GLKADJGGONI; // 0x64
		::System::Nullable_1<::RPG::GameCore::FixPoint> EFJAHDEMACL; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDFGMBNDGD_CTOR_OFFSET))(this);
		}

	};
