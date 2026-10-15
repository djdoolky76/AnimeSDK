#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleSwapPosition; }

#define LHBIHKKNJMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB6A0780)
#define LHBIHKKNJMJ_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xB6A0B40)
#define LHBIHKKNJMJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB6A07E0)

inline static constexpr unsigned int LHBIHKKNJMJ_TypeDefinitionIndex = 78409;

	class LHBIHKKNJMJ : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraBattleSwapPosition* IGHAHBNLIJA; // 0x10
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x18
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x20
		::System::UInt32 AJLJMGEEKOJ; // 0x28
		::System::UInt32 LEKGODGIMCH; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraBattleSwapPosition* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleSwapPosition*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LHBIHKKNJMJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBIHKKNJMJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBIHKKNJMJ_KMFNKDMEJBC_OFFSET))(this);
		}

	};
