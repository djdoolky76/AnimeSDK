#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PNIHHKFGKPN;

#define PNIHHKFGKPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B02C0)
#define PNIHHKFGKPN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7B0010)

inline static constexpr unsigned int PNIHHKFGKPN_TypeDefinitionIndex = 14333;

	class PNIHHKFGKPN : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x10
		::RPG::GameCore::FixPoint NFNILIEFKHJ; // 0x18
		::RPG::GameCore::FixPoint ANLGHKHLFDE; // 0x20
		::RPG::Client::TextID OHLBMAGECPM; // 0x28
		::System::UInt32 BOKJJKFCFME; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIHHKFGKPN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PNIHHKFGKPN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PNIHHKFGKPN*))((::PBYTE)hIl2Cpp + PNIHHKFGKPN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
