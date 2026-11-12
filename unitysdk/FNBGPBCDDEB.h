#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FNBGPBCDDEB;
class GDLKLEPOLOK;

#define FNBGPBCDDEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE6DE0)
#define FNBGPBCDDEB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DFE68B0)

inline static constexpr unsigned int FNBGPBCDDEB_TypeDefinitionIndex = 12050;

	class FNBGPBCDDEB : public ::System::Object
	{
	public:
		::Il2CppArray<::GDLKLEPOLOK*>* KLNPCBJKDFI; // 0x10
		::RPG::Client::TextID IFHCECGLMHH; // 0x18
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::System::UInt32 KMLOGCDOMPG; // 0x38
		::System::UInt32 JNFHECCIGDG; // 0x3C
		::System::UInt32 CCNENAKAHJE; // 0x40
		::System::UInt32 OPGAGANBICN; // 0x44
		::System::UInt32 PHFMCACHFIJ; // 0x48
		::System::UInt32 FGJFNACLHPB; // 0x4C
		::System::UInt32 CLGNIABAHII; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID KFNKBKPKNCC; // 0x58
		::System::Boolean LCFNABHMODA; // 0x68
		::System::Byte _padding1[0x3];
		::System::UInt32 NCIOIJHNLHD; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBGPBCDDEB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FNBGPBCDDEB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FNBGPBCDDEB*))((::PBYTE)hIl2Cpp + FNBGPBCDDEB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
