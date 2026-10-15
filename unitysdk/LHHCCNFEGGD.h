#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PetMarbleTalkTriggerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LHHCCNFEGGD;
namespace System { class String; }

#define LHHCCNFEGGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C3FC0)
#define LHHCCNFEGGD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0C3CE0)

inline static constexpr unsigned int LHHCCNFEGGD_TypeDefinitionIndex = 14443;

	class LHHCCNFEGGD : public ::System::Object
	{
	public:
		::System::String* HGAOKKFGLBF; // 0x10
		::RPG::GameCore::PetMarbleTalkTriggerType LMFCOMHHEIG; // 0x18
		::System::UInt32 PBLDLDIEFNC; // 0x1C
		::System::Single HKGPLKJOCDH; // 0x20
		::System::Single FBPKGPODAJE; // 0x24
		::System::UInt32 NNDOABPFDMI; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID IBGNNBCPHFO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHCCNFEGGD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LHHCCNFEGGD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHHCCNFEGGD*))((::PBYTE)hIl2Cpp + LHHCCNFEGGD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
