#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraSetAttachPointActive; }

#define JHDFICKHEEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB1AA3F0)
#define JHDFICKHEEK_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xB1AA430)
#define JHDFICKHEEK_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB1AA470)

inline static constexpr unsigned int JHDFICKHEEK_TypeDefinitionIndex = 78417;

	class JHDFICKHEEK : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x18
		::RPG::GameCore::ChimeraSetAttachPointActive* IGHAHBNLIJA; // 0x20
		::System::UInt32 AJLJMGEEKOJ; // 0x28
		::System::UInt32 NCBAPGKFFJA; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraSetAttachPointActive* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraSetAttachPointActive*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JHDFICKHEEK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDFICKHEEK_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDFICKHEEK_NPAFMEBNFOB_OFFSET))(this);
		}

	};
