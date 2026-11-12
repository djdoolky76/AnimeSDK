#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PetMarbleTalkTriggerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LHHCCNFEGGD;
namespace System { class String; }

#define LHHCCNFEGGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EC3E0)
#define LHHCCNFEGGD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E2EC100)

inline static constexpr unsigned int LHHCCNFEGGD_TypeDefinitionIndex = 14598;

	class LHHCCNFEGGD : public ::System::Object
	{
	public:
		::System::String* HGAOKKFGLBF; // 0x10
		::System::Single HKGPLKJOCDH; // 0x18
		::System::UInt32 PBLDLDIEFNC; // 0x1C
		::RPG::GameCore::PetMarbleTalkTriggerType LMFCOMHHEIG; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID IBGNNBCPHFO; // 0x28
		::System::UInt32 NNDOABPFDMI; // 0x38
		::System::Single FBPKGPODAJE; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHCCNFEGGD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LHHCCNFEGGD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHHCCNFEGGD*))((::PBYTE)hIl2Cpp + LHHCCNFEGGD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
