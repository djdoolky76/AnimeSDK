#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FNBGPBCDDEB;
class GDLKLEPOLOK;

#define FNBGPBCDDEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDF5A0)
#define FNBGPBCDDEB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDDF070)

inline static constexpr unsigned int FNBGPBCDDEB_TypeDefinitionIndex = 11993;

	class FNBGPBCDDEB : public ::System::Object
	{
	public:
		::Il2CppArray<::GDLKLEPOLOK*>* KLNPCBJKDFI; // 0x10
		::System::UInt32 NCIOIJHNLHD; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::UInt32 KMLOGCDOMPG; // 0x20
		::System::UInt32 OPGAGANBICN; // 0x24
		::System::UInt32 JNFHECCIGDG; // 0x28
		::System::UInt32 CLGNIABAHII; // 0x2C
		::System::UInt32 CCNENAKAHJE; // 0x30
		::System::Boolean LCFNABHMODA; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID IFHCECGLMHH; // 0x38
		::System::UInt32 FGJFNACLHPB; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID KFNKBKPKNCC; // 0x50
		::RPG::Client::TextID OENAMINOLLF; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBGPBCDDEB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FNBGPBCDDEB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FNBGPBCDDEB*))((::PBYTE)hIl2Cpp + FNBGPBCDDEB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
