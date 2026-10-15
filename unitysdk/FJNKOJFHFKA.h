#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeEventPriorityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FJNKOJFHFKA;
namespace System { class String; }

#define FJNKOJFHFKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFC900)
#define FJNKOJFHFKA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDFC4C0)

	class FJNKOJFHFKA : public ::System::Object
	{
	public:
		::System::String* MPJLNHJIFIM; // 0x10
		::System::String* AJGGLOMPFOJ; // 0x18
		::RPG::Client::TextID JCAGGCBNNDL; // 0x20
		::System::UInt32 ELGNMHLEEEH; // 0x30
		::System::UInt32 DNOENIFOBLJ; // 0x34
		::System::UInt32 GHOCDNJOCBH; // 0x38
		::System::UInt32 NMBKAIEIAPE; // 0x3C
		::RPG::Client::TextID LDBCBEDHFPD; // 0x40
		::System::UInt32 NALKJIAJIJK; // 0x50
		::System::UInt32 CPCMBMBFBAI; // 0x54
		::RPG::GameCore::LimaoNewsOfficeEventPriorityType GMPGDEINODK; // 0x58
		::System::UInt32 HPLHMBBGAOO; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNKOJFHFKA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FJNKOJFHFKA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FJNKOJFHFKA*))((::PBYTE)hIl2Cpp + FJNKOJFHFKA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
