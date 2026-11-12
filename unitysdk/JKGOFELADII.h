#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JKGOFELADII;
namespace System { class String; }

#define JKGOFELADII_CTOR_OFFSET UNITYSDK_OFFSET(0x1E231A60)
#define JKGOFELADII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E231260)

inline static constexpr unsigned int JKGOFELADII_TypeDefinitionIndex = 11572;

	class JKGOFELADII : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x10
		::Il2CppArray<::System::String*>* CCBONMNIPPL; // 0x18
		::System::String* AJLLAEEDBJL; // 0x20
		::System::String* MFGKFAMKMFH; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x30
		::Il2CppArray<::System::UInt32>* KCBDHKEKNHD; // 0x38
		::System::String* ELNGIJIGJOO; // 0x40
		::RPG::Client::TextID PDDPFOBKIEN; // 0x48
		::RPG::Client::TextID HCCMEBGFMCE; // 0x58
		::System::UInt32 PDMDDELEAAG; // 0x68
		::System::UInt32 ODEKADIBFAO; // 0x6C
		::RPG::Client::TextID DFMLAIADNGI; // 0x70
		::RPG::Client::TextID NHLFBFKBOEK; // 0x80
		::RPG::Client::TextID KBNHPKIOGLH; // 0x90
		::System::UInt32 BNCKFPAGOMF; // 0xA0
		::RPG::GameCore::FateTraitType FBFCPNADPKB; // 0xA4
		::RPG::Client::TextID DHKNKNGGJCK; // 0xA8
		::RPG::Client::TextID NLIPGMKKIED; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGOFELADII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JKGOFELADII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKGOFELADII*))((::PBYTE)hIl2Cpp + JKGOFELADII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
