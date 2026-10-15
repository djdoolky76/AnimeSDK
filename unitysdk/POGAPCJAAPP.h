#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class PlayChimeraAnimation; }

#define POGAPCJAAPP_CTOR_OFFSET UNITYSDK_OFFSET(0xC35FD00)
#define POGAPCJAAPP_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xC35FD50)
#define POGAPCJAAPP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC35FD90)

inline static constexpr unsigned int POGAPCJAAPP_TypeDefinitionIndex = 78414;

	class POGAPCJAAPP : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayChimeraAnimation* IGHAHBNLIJA; // 0x10
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20
		::System::UInt32 AJLJMGEEKOJ; // 0x28
		::System::UInt32 NCBAPGKFFJA; // 0x2C
		::System::Void _ctor(::RPG::GameCore::PlayChimeraAnimation* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayChimeraAnimation*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + POGAPCJAAPP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + POGAPCJAAPP_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POGAPCJAAPP_NPAFMEBNFOB_OFFSET))(this);
		}

	};
