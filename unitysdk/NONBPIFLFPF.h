#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraTriggerWorkPerformance; }

#define NONBPIFLFPF_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF4FB0)
#define NONBPIFLFPF_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xBCF5000)
#define NONBPIFLFPF_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBCF5040)
#define NONBPIFLFPF__START_B__2_0_OFFSET UNITYSDK_OFFSET(0xBCF5210)

inline static constexpr unsigned int NONBPIFLFPF_TypeDefinitionIndex = 78421;

	class NONBPIFLFPF : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x10
		::RPG::GameCore::ChimeraTriggerWorkPerformance* IGHAHBNLIJA; // 0x18
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x20
		::System::UInt32 AJLJMGEEKOJ; // 0x28
		::System::UInt32 LEKGODGIMCH; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraTriggerWorkPerformance* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTriggerWorkPerformance*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NONBPIFLFPF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONBPIFLFPF_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONBPIFLFPF_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void _Start_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONBPIFLFPF__START_B__2_0_OFFSET))(this);
		}

	};
