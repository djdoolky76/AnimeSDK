#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JKGOFELADII;
namespace System { class String; }

#define JKGOFELADII_CTOR_OFFSET UNITYSDK_OFFSET(0x1D042BE0)
#define JKGOFELADII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0423E0)

	class JKGOFELADII : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* KCBDHKEKNHD; // 0x10
		::System::String* AJLLAEEDBJL; // 0x18
		::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x20
		::Il2CppArray<::System::String*>* CCBONMNIPPL; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x30
		::System::String* ELNGIJIGJOO; // 0x38
		::System::String* MFGKFAMKMFH; // 0x40
		::System::UInt32 ODEKADIBFAO; // 0x48
		::System::UInt32 PDMDDELEAAG; // 0x4C
		::RPG::Client::TextID NHLFBFKBOEK; // 0x50
		::System::UInt32 BNCKFPAGOMF; // 0x60
		::RPG::GameCore::FateTraitType FBFCPNADPKB; // 0x64
		::RPG::Client::TextID KBNHPKIOGLH; // 0x68
		::RPG::Client::TextID DFMLAIADNGI; // 0x78
		::RPG::Client::TextID DHKNKNGGJCK; // 0x88
		::RPG::Client::TextID NLIPGMKKIED; // 0x98
		::RPG::Client::TextID PDDPFOBKIEN; // 0xA8
		::RPG::Client::TextID HCCMEBGFMCE; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGOFELADII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JKGOFELADII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKGOFELADII*))((::PBYTE)hIl2Cpp + JKGOFELADII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
