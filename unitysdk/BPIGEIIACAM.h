#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BPIGEIIACAM;
class FCOEMCEDLNL;
namespace System { class String; }

#define BPIGEIIACAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CC890)
#define BPIGEIIACAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9CC4B0)

inline static constexpr unsigned int BPIGEIIACAM_TypeDefinitionIndex = 14127;

	class BPIGEIIACAM : public ::System::Object
	{
	public:
		::System::String* FBKAMIHGLFK; // 0x10
		::System::String* LDIHBHDHOMF; // 0x18
		::Il2CppArray<::System::UInt32>* PCFNMMOAGLA; // 0x20
		::Il2CppArray<::System::UInt32>* OFABOLACEEN; // 0x28
		::RPG::Client::TextID GFOGDOBBJAF; // 0x30
		::System::UInt32 FPGMJLNEJCF; // 0x40
		::System::UInt32 PHFMCACHFIJ; // 0x44
		::System::UInt32 KEMBKKLCPBD; // 0x48
		::System::UInt32 JMEJCLEBFHN; // 0x4C
		::RPG::Client::TextID LGPDIDLJFOI; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIGEIIACAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BPIGEIIACAM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPIGEIIACAM*))((::PBYTE)hIl2Cpp + BPIGEIIACAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
