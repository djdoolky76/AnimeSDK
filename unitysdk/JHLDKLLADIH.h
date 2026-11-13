#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateReijuType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JHLDKLLADIH;
namespace System { class String; }

#define JHLDKLLADIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A99E0)
#define JHLDKLLADIH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5A94B0)

inline static constexpr unsigned int JHLDKLLADIH_TypeDefinitionIndex = 11581;

	class JHLDKLLADIH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x10
		::System::String* LBLJLNPBDPB; // 0x18
		::Il2CppArray<::System::UInt32>* PHFPFCALNDJ; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x28
		::RPG::GameCore::FateReijuType KJOAJDBDOBN; // 0x30
		::System::UInt32 EFAIIOHKFGD; // 0x34
		::RPG::Client::TextID KBNHPKIOGLH; // 0x38
		::RPG::Client::TextID ENHOJEFAFNM; // 0x48
		::RPG::Client::TextID GDLBCMFFGOI; // 0x58
		::System::UInt32 GDLLGLFCEHC; // 0x68
		::System::UInt32 IGOAKKNPDKK; // 0x6C
		::RPG::Client::TextID BACLIEMHMDK; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLDKLLADIH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JHLDKLLADIH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JHLDKLLADIH*))((::PBYTE)hIl2Cpp + JHLDKLLADIH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
