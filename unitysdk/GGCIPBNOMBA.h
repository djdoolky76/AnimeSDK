#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleRunOut; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GGCIPBNOMBA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A023A0)
#define GGCIPBNOMBA_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0x15A02C40)
#define GGCIPBNOMBA_LONNFPKGNCN_OFFSET UNITYSDK_OFFSET(0x15A02B10)
#define GGCIPBNOMBA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15A02420)

	class GGCIPBNOMBA : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraBattleRunOut* IGHAHBNLIJA; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* ECJADDMLLPJ; // 0x18
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x20
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x28
		::System::UInt32 IDCDJCNHDHC; // 0x30
		::System::UInt32 LEKGODGIMCH; // 0x34
		::System::UInt32 AJLJMGEEKOJ; // 0x38
		::System::UInt32 MEFAHAJDKKJ; // 0x3C
		::System::Void _ctor(::RPG::GameCore::ChimeraBattleRunOut* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleRunOut*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GGCIPBNOMBA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCIPBNOMBA_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void LONNFPKGNCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCIPBNOMBA_LONNFPKGNCN_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCIPBNOMBA_KMFNKDMEJBC_OFFSET))(this);
		}

	};
