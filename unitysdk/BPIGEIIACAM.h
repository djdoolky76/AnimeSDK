#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BPIGEIIACAM;
class FCOEMCEDLNL;
namespace System { class String; }

#define BPIGEIIACAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FA1B0)
#define BPIGEIIACAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9F9DD0)

	class BPIGEIIACAM : public ::System::Object
	{
	public:
		::System::String* FBKAMIHGLFK; // 0x10
		::Il2CppArray<::System::UInt32>* PCFNMMOAGLA; // 0x18
		::Il2CppArray<::System::UInt32>* OFABOLACEEN; // 0x20
		::System::String* LDIHBHDHOMF; // 0x28
		::System::UInt32 PHFMCACHFIJ; // 0x30
		::System::UInt32 JMEJCLEBFHN; // 0x34
		::RPG::Client::TextID LGPDIDLJFOI; // 0x38
		::RPG::Client::TextID GFOGDOBBJAF; // 0x48
		::System::UInt32 KEMBKKLCPBD; // 0x58
		::System::UInt32 FPGMJLNEJCF; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIGEIIACAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BPIGEIIACAM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPIGEIIACAM*))((::PBYTE)hIl2Cpp + BPIGEIIACAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
