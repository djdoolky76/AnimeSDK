#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowDither; }

#define JKFFJDJJFAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB215C20)
#define JKFFJDJJFAA_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xB216030)
#define JKFFJDJJFAA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB215C80)

inline static constexpr unsigned int JKFFJDJJFAA_TypeDefinitionIndex = 78405;

	class JKFFJDJJFAA : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraBattleShowDither* IGHAHBNLIJA; // 0x10
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20
		::System::UInt32 LEKGODGIMCH; // 0x28
		::System::UInt32 AJLJMGEEKOJ; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowDither* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowDither*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JKFFJDJJFAA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFFJDJJFAA_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFFJDJJFAA_KMFNKDMEJBC_OFFSET))(this);
		}

	};
