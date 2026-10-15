#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowNPCDither; }

#define LGEGDKDALFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB68A2C0)
#define LGEGDKDALFH_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xB68A5A0)
#define LGEGDKDALFH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB68A300)

inline static constexpr unsigned int LGEGDKDALFH_TypeDefinitionIndex = 78406;

	class LGEGDKDALFH : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x18
		::RPG::GameCore::ChimeraBattleShowNPCDither* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowNPCDither* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowNPCDither*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + LGEGDKDALFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEGDKDALFH_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEGDKDALFH_KMFNKDMEJBC_OFFSET))(this);
		}

	};
