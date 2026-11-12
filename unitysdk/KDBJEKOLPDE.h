#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitMode.h"
#include "unitysdk/RPG/GameCore/FateTraitTag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KDBJEKOLPDE;
namespace System { class String; }

#define KDBJEKOLPDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E270120)
#define KDBJEKOLPDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E26FC70)

inline static constexpr unsigned int KDBJEKOLPDE_TypeDefinitionIndex = 11574;

	class KDBJEKOLPDE : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EPHLMOECOHP; // 0x10
		::System::String* LBLJLNPBDPB; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x20
		::RPG::Client::TextID GODMIEOJGAE; // 0x28
		::System::UInt32 PDMPABKDHDI; // 0x38
		::System::UInt32 ENJOALLODBG; // 0x3C
		::RPG::Client::TextID JFKADAONNOD; // 0x40
		::RPG::GameCore::FateTraitMode FCGFFAJIBKA; // 0x50
		::System::UInt32 BNCKFPAGOMF; // 0x54
		::RPG::GameCore::FateTraitTag NHALJPDONCP; // 0x58
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID KBNHPKIOGLH; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJEKOLPDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KDBJEKOLPDE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KDBJEKOLPDE*))((::PBYTE)hIl2Cpp + KDBJEKOLPDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
