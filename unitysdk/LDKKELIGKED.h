#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraWorkFireBullet; }

#define LDKKELIGKED_CTOR_OFFSET UNITYSDK_OFFSET(0xB636AA0)
#define LDKKELIGKED_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xB636AF0)
#define LDKKELIGKED_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB636B30)
#define LDKKELIGKED__START_B__2_0_OFFSET UNITYSDK_OFFSET(0xB636D50)

inline static constexpr unsigned int LDKKELIGKED_TypeDefinitionIndex = 78412;

	class LDKKELIGKED : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x10
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
		::RPG::GameCore::ChimeraWorkFireBullet* IGHAHBNLIJA; // 0x20
		::System::UInt32 NCBAPGKFFJA; // 0x28
		::System::UInt32 AJLJMGEEKOJ; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraWorkFireBullet* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraWorkFireBullet*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + LDKKELIGKED_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKKELIGKED_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKKELIGKED_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void _Start_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKKELIGKED__START_B__2_0_OFFSET))(this);
		}

	};
