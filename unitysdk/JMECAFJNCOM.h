#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JMECAFJNCOM;
namespace System { class String; }

#define JMECAFJNCOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D04A840)
#define JMECAFJNCOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D049FF0)

	class JMECAFJNCOM : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AHONBLHLHIO; // 0x10
		::System::String* GINFOPOAKHK; // 0x18
		::Il2CppArray<::System::UInt32>* NOFHEEJMCLH; // 0x20
		::System::String* OLOIFNNLKJP; // 0x28
		::System::String* HHBNIODGKKE; // 0x30
		::System::String* JKCHLJNLLNA; // 0x38
		::System::String* KALCGCPPMBD; // 0x40
		::System::String* OCMHKMFBLJN; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x50
		::RPG::Client::TextID OENAMINOLLF; // 0x58
		::RPG::Client::TextID OKCCPDBENOJ; // 0x68
		::System::Boolean KEDLONFFJHO; // 0x78
		::System::Boolean GBOMPEGMLEN; // 0x79
		::System::Byte _padding0[0x2];
		::System::UInt32 NHALJPDONCP; // 0x7C
		::RPG::Client::TextID IJEJGCEAFAF; // 0x80
		::RPG::Client::TextID PLHINENDNDO; // 0x90
		::System::UInt32 PDLFPMJCLDF; // 0xA0
		::System::Int32 OICGFNGNLOE; // 0xA4
		::System::UInt32 PHFMCACHFIJ; // 0xA8
		::RPG::GameCore::FateRinHouguOwnerType GMPGDEINODK; // 0xAC
		::RPG::GameCore::FateRinHouguRarityType PMIEAEGJNMJ; // 0xB0
		::System::UInt32 NALMBOOCCIN; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMECAFJNCOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JMECAFJNCOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JMECAFJNCOM*))((::PBYTE)hIl2Cpp + JMECAFJNCOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
