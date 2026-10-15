#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HNCGHAOHBPP;

#define HNCGHAOHBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CECABA0)
#define HNCGHAOHBPP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CECA6E0)

inline static constexpr unsigned int HNCGHAOHBPP_TypeDefinitionIndex = 11988;

	class HNCGHAOHBPP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MEPGCJIPDON; // 0x10
		::Il2CppArray<::System::UInt32>* JKKJNOPADBO; // 0x18
		::RPG::Client::TextID LNPNCKGNKID; // 0x20
		::RPG::Client::TextID NMAHGFAPENI; // 0x30
		::RPG::Client::TextID KHPNJPFNHKN; // 0x40
		::System::UInt32 KHIJNANHBFB; // 0x50
		::System::UInt32 BLAJKCJIAPH; // 0x54
		::System::UInt32 ANCJFPFEGHA; // 0x58
		::System::UInt32 AAGKEBFHLMC; // 0x5C
		::System::UInt32 GGBPEGPAGNJ; // 0x60
		::System::UInt32 CLGNIABAHII; // 0x64
		::System::UInt32 PHFMCACHFIJ; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCGHAOHBPP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HNCGHAOHBPP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNCGHAOHBPP*))((::PBYTE)hIl2Cpp + HNCGHAOHBPP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
