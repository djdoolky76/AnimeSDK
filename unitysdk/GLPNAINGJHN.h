#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleCheckWorkFinish; }

#define GLPNAINGJHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB6820)
#define GLPNAINGJHN_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0x15AB6930)
#define GLPNAINGJHN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15AB6880)

inline static constexpr unsigned int GLPNAINGJHN_TypeDefinitionIndex = 78398;

	class GLPNAINGJHN : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x10
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
		::RPG::GameCore::ChimeraBattleCheckWorkFinish* IGHAHBNLIJA; // 0x20
		::System::UInt32 AJLJMGEEKOJ; // 0x28
		::System::UInt32 LEKGODGIMCH; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraBattleCheckWorkFinish* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleCheckWorkFinish*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GLPNAINGJHN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPNAINGJHN_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPNAINGJHN_KMFNKDMEJBC_OFFSET))(this);
		}

	};
