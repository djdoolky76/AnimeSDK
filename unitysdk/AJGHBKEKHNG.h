#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraWorkLeave; }

#define AJGHBKEKHNG_CTOR_OFFSET UNITYSDK_OFFSET(0x12D9AC30)
#define AJGHBKEKHNG_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0x12D9AC70)
#define AJGHBKEKHNG_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x12D9ACB0)

inline static constexpr unsigned int AJGHBKEKHNG_TypeDefinitionIndex = 81157;

	class AJGHBKEKHNG : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraWorkLeave* IGHAHBNLIJA; // 0x10
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20
		::System::Void _ctor(::RPG::GameCore::ChimeraWorkLeave* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraWorkLeave*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + AJGHBKEKHNG_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGHBKEKHNG_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGHBKEKHNG_NPAFMEBNFOB_OFFSET))(this);
		}

	};
