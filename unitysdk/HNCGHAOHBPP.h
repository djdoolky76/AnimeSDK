#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HNCGHAOHBPP;

#define HNCGHAOHBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AB7F0)
#define HNCGHAOHBPP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E0AB330)

inline static constexpr unsigned int HNCGHAOHBPP_TypeDefinitionIndex = 12045;

	class HNCGHAOHBPP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MEPGCJIPDON; // 0x10
		::Il2CppArray<::System::UInt32>* JKKJNOPADBO; // 0x18
		::RPG::Client::TextID KHPNJPFNHKN; // 0x20
		::RPG::Client::TextID NMAHGFAPENI; // 0x30
		::System::UInt32 AAGKEBFHLMC; // 0x40
		::System::UInt32 CLGNIABAHII; // 0x44
		::System::UInt32 KHIJNANHBFB; // 0x48
		::System::UInt32 ANCJFPFEGHA; // 0x4C
		::System::UInt32 GGBPEGPAGNJ; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID LNPNCKGNKID; // 0x58
		::System::UInt32 PHFMCACHFIJ; // 0x68
		::System::UInt32 BLAJKCJIAPH; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCGHAOHBPP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HNCGHAOHBPP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNCGHAOHBPP*))((::PBYTE)hIl2Cpp + HNCGHAOHBPP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
