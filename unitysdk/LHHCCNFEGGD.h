#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PetMarbleTalkTriggerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LHHCCNFEGGD;
namespace System { class String; }

#define LHHCCNFEGGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F1E10)
#define LHHCCNFEGGD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0F1B30)

inline static constexpr unsigned int LHHCCNFEGGD_TypeDefinitionIndex = 14443;

	class LHHCCNFEGGD : public ::System::Object
	{
	public:
		::System::String* HGAOKKFGLBF; // 0x10
		::System::UInt32 NNDOABPFDMI; // 0x18
		::RPG::GameCore::PetMarbleTalkTriggerType LMFCOMHHEIG; // 0x1C
		::RPG::Client::TextID IBGNNBCPHFO; // 0x20
		::System::UInt32 PBLDLDIEFNC; // 0x30
		::System::Single HKGPLKJOCDH; // 0x34
		::System::Single FBPKGPODAJE; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHCCNFEGGD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LHHCCNFEGGD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHHCCNFEGGD*))((::PBYTE)hIl2Cpp + LHHCCNFEGGD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
