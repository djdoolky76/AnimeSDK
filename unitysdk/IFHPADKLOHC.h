#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraPostSoundEvent; }

#define IFHPADKLOHC_CTOR_OFFSET UNITYSDK_OFFSET(0x15F17A30)
#define IFHPADKLOHC_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0x15F17A80)
#define IFHPADKLOHC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15F17AC0)

	class IFHPADKLOHC : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraPostSoundEvent* IGHAHBNLIJA; // 0x10
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20
		::System::UInt32 AJLJMGEEKOJ; // 0x28
		::System::UInt32 NCBAPGKFFJA; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraPostSoundEvent* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraPostSoundEvent*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + IFHPADKLOHC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHPADKLOHC_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHPADKLOHC_NPAFMEBNFOB_OFFSET))(this);
		}

	};
