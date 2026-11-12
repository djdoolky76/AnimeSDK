#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattlePlayDestruction; }

#define NONFMPAEMGN_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E3940)
#define NONFMPAEMGN_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xC5E3DF0)
#define NONFMPAEMGN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC5E39A0)

inline static constexpr unsigned int NONFMPAEMGN_TypeDefinitionIndex = 81136;

	class NONFMPAEMGN : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x18
		::RPG::GameCore::ChimeraBattlePlayDestruction* IGHAHBNLIJA; // 0x20
		::System::UInt32 AJLJMGEEKOJ; // 0x28
		::System::UInt32 LEKGODGIMCH; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraBattlePlayDestruction* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattlePlayDestruction*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NONFMPAEMGN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONFMPAEMGN_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONFMPAEMGN_KMFNKDMEJBC_OFFSET))(this);
		}

	};
