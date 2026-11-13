#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowNPCLeave; }

#define BIKABCFACPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1BABCEE0)
#define BIKABCFACPH_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0x1BABD1C0)
#define BIKABCFACPH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1BABCF20)

inline static constexpr unsigned int BIKABCFACPH_TypeDefinitionIndex = 81142;

	class BIKABCFACPH : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraBattleShowNPCLeave* IGHAHBNLIJA; // 0x10
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20
		::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowNPCLeave* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowNPCLeave*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + BIKABCFACPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKABCFACPH_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKABCFACPH_KMFNKDMEJBC_OFFSET))(this);
		}

	};
