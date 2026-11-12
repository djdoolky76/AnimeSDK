#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateReijuType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JHLDKLLADIH;
namespace System { class String; }

#define JHLDKLLADIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E21EB90)
#define JHLDKLLADIH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E21E660)

inline static constexpr unsigned int JHLDKLLADIH_TypeDefinitionIndex = 11581;

	class JHLDKLLADIH : public ::System::Object
	{
	public:
		::System::String* LBLJLNPBDPB; // 0x10
		::Il2CppArray<::System::UInt32>* PHFPFCALNDJ; // 0x18
		::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x28
		::RPG::Client::TextID BACLIEMHMDK; // 0x30
		::RPG::Client::TextID KBNHPKIOGLH; // 0x40
		::RPG::Client::TextID GDLBCMFFGOI; // 0x50
		::RPG::Client::TextID ENHOJEFAFNM; // 0x60
		::System::UInt32 GDLLGLFCEHC; // 0x70
		::System::UInt32 EFAIIOHKFGD; // 0x74
		::System::UInt32 IGOAKKNPDKK; // 0x78
		::RPG::GameCore::FateReijuType KJOAJDBDOBN; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLDKLLADIH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JHLDKLLADIH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JHLDKLLADIH*))((::PBYTE)hIl2Cpp + JHLDKLLADIH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
