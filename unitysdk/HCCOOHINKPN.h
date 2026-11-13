#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatCommunicateType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HCCOOHINKPN;

#define HCCOOHINKPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DFFD0)
#define HCCOOHINKPN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9DB580)

inline static constexpr unsigned int HCCOOHINKPN_TypeDefinitionIndex = 11335;

	class HCCOOHINKPN : public ::System::Object
	{
	public:
		::RPG::Client::TextID AABNPBGMOFN; // 0x10
		::System::UInt32 PJJLNCANODD; // 0x20
		::System::UInt32 OBLOHIGPEEP; // 0x24
		::RPG::GameCore::DiceCombatCommunicateType GMPGDEINODK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCOOHINKPN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HCCOOHINKPN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCCOOHINKPN*))((::PBYTE)hIl2Cpp + HCCOOHINKPN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
