#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowNPCLeave; }

#define BIKABCFACPH_CTOR_OFFSET UNITYSDK_OFFSET(0xB4AA830)
#define BIKABCFACPH_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xB4AAB10)
#define BIKABCFACPH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB4AA870)

inline static constexpr unsigned int BIKABCFACPH_TypeDefinitionIndex = 78407;

	class BIKABCFACPH : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x18
		::RPG::GameCore::ChimeraBattleShowNPCLeave* IGHAHBNLIJA; // 0x20
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
