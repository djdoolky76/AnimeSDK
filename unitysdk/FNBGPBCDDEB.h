#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FNBGPBCDDEB;
class GDLKLEPOLOK;

#define FNBGPBCDDEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2F910)
#define FNBGPBCDDEB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA2F3E0)

inline static constexpr unsigned int FNBGPBCDDEB_TypeDefinitionIndex = 12050;

	class FNBGPBCDDEB : public ::System::Object
	{
	public:
		::Il2CppArray<::GDLKLEPOLOK*>* KLNPCBJKDFI; // 0x10
		::RPG::Client::TextID IFHCECGLMHH; // 0x18
		::System::Boolean LCFNABHMODA; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 KMLOGCDOMPG; // 0x2C
		::System::UInt32 CLGNIABAHII; // 0x30
		::System::UInt32 JNFHECCIGDG; // 0x34
		::RPG::Client::TextID OENAMINOLLF; // 0x38
		::RPG::Client::TextID KFNKBKPKNCC; // 0x48
		::System::UInt32 CCNENAKAHJE; // 0x58
		::System::UInt32 FGJFNACLHPB; // 0x5C
		::System::UInt32 PHFMCACHFIJ; // 0x60
		::System::UInt32 NCIOIJHNLHD; // 0x64
		::System::UInt32 OPGAGANBICN; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBGPBCDDEB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FNBGPBCDDEB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FNBGPBCDDEB*))((::PBYTE)hIl2Cpp + FNBGPBCDDEB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
