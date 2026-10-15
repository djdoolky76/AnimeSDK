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

#define JMECAFJNCOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D01C840)
#define JMECAFJNCOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D01BFF0)

inline static constexpr unsigned int JMECAFJNCOM_TypeDefinitionIndex = 11538;

	class JMECAFJNCOM : public ::System::Object
	{
	public:
		::System::String* HHBNIODGKKE; // 0x10
		::System::String* OCMHKMFBLJN; // 0x18
		::System::String* KALCGCPPMBD; // 0x20
		::System::String* GINFOPOAKHK; // 0x28
		::Il2CppArray<::System::UInt32>* NOFHEEJMCLH; // 0x30
		::Il2CppArray<::System::UInt32>* AHONBLHLHIO; // 0x38
		::System::String* JKCHLJNLLNA; // 0x40
		::System::String* OLOIFNNLKJP; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x50
		::RPG::Client::TextID OKCCPDBENOJ; // 0x58
		::System::Int32 OICGFNGNLOE; // 0x68
		::RPG::GameCore::FateRinHouguRarityType PMIEAEGJNMJ; // 0x6C
		::RPG::Client::TextID OENAMINOLLF; // 0x70
		::RPG::GameCore::FateRinHouguOwnerType GMPGDEINODK; // 0x80
		::System::UInt32 PDLFPMJCLDF; // 0x84
		::RPG::Client::TextID PLHINENDNDO; // 0x88
		::RPG::Client::TextID IJEJGCEAFAF; // 0x98
		::System::UInt32 NALMBOOCCIN; // 0xA8
		::System::UInt32 NHALJPDONCP; // 0xAC
		::System::Boolean GBOMPEGMLEN; // 0xB0
		::System::Boolean KEDLONFFJHO; // 0xB1
		::System::Byte _padding0[0x2];
		::System::UInt32 PHFMCACHFIJ; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMECAFJNCOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JMECAFJNCOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JMECAFJNCOM*))((::PBYTE)hIl2Cpp + JMECAFJNCOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
