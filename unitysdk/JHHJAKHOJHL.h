#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraFireEffect; }

#define JHHJAKHOJHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B3910)
#define JHHJAKHOJHL_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xB1B3960)
#define JHHJAKHOJHL_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB1B39A0)

inline static constexpr unsigned int JHHJAKHOJHL_TypeDefinitionIndex = 78413;

	class JHHJAKHOJHL : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
		::RPG::GameCore::ChimeraFireEffect* IGHAHBNLIJA; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20
		::System::UInt32 NCBAPGKFFJA; // 0x28
		::System::UInt32 AJLJMGEEKOJ; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraFireEffect* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraFireEffect*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + JHHJAKHOJHL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHJAKHOJHL_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHJAKHOJHL_NPAFMEBNFOB_OFFSET))(this);
		}

	};
