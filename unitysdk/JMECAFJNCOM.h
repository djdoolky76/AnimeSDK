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

#define JMECAFJNCOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C4690)
#define JMECAFJNCOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5C3E40)

inline static constexpr unsigned int JMECAFJNCOM_TypeDefinitionIndex = 11589;

	class JMECAFJNCOM : public ::System::Object
	{
	public:
		::System::String* HHBNIODGKKE; // 0x10
		::System::String* GINFOPOAKHK; // 0x18
		::Il2CppArray<::System::UInt32>* AHONBLHLHIO; // 0x20
		::System::String* KALCGCPPMBD; // 0x28
		::System::String* JKCHLJNLLNA; // 0x30
		::System::String* OCMHKMFBLJN; // 0x38
		::System::String* OLOIFNNLKJP; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x48
		::Il2CppArray<::System::UInt32>* NOFHEEJMCLH; // 0x50
		::System::UInt32 NHALJPDONCP; // 0x58
		::System::Int32 OICGFNGNLOE; // 0x5C
		::RPG::Client::TextID IJEJGCEAFAF; // 0x60
		::System::UInt32 PDLFPMJCLDF; // 0x70
		::System::Boolean KEDLONFFJHO; // 0x74
		::System::Boolean GBOMPEGMLEN; // 0x75
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID PLHINENDNDO; // 0x78
		::RPG::Client::TextID OKCCPDBENOJ; // 0x88
		::RPG::GameCore::FateRinHouguRarityType PMIEAEGJNMJ; // 0x98
		::System::UInt32 PHFMCACHFIJ; // 0x9C
		::RPG::Client::TextID OENAMINOLLF; // 0xA0
		::System::UInt32 NALMBOOCCIN; // 0xB0
		::RPG::GameCore::FateRinHouguOwnerType GMPGDEINODK; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMECAFJNCOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JMECAFJNCOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JMECAFJNCOM*))((::PBYTE)hIl2Cpp + JMECAFJNCOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
