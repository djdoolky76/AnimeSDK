#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowBubbleTalk; }

#define LABJELNIKEE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5CF870)
#define LABJELNIKEE_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xB5CFE00)
#define LABJELNIKEE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB5CF8D0)

inline static constexpr unsigned int LABJELNIKEE_TypeDefinitionIndex = 78403;

	class LABJELNIKEE : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
		::RPG::GameCore::ChimeraBattleShowBubbleTalk* IGHAHBNLIJA; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20
		::System::UInt32 LEKGODGIMCH; // 0x28
		::System::UInt32 AJLJMGEEKOJ; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowBubbleTalk* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowBubbleTalk*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LABJELNIKEE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABJELNIKEE_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LABJELNIKEE_KMFNKDMEJBC_OFFSET))(this);
		}

	};
