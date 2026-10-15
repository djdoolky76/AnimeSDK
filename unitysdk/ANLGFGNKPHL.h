#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEPEINGEKCD;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraAbilityProgressBase; }
namespace System { class Action; }
namespace System { class String; }

#define ANLGFGNKPHL_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x15899ED0)
#define ANLGFGNKPHL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15899E20)
#define ANLGFGNKPHL_KCKLKNEDPBG_OFFSET UNITYSDK_OFFSET(0x1589A490)

	class ANLGFGNKPHL : public ::System::Object
	{
	public:
		static ::RPG::Client::Promises::IPromise* BPLPBPMEODA(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + ANLGFGNKPHL_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::Promises::IPromise* BPLPBPMEODA_1(::RPG::GameCore::ChimeraAbilityProgressBase* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::RPG::GameCore::ChimeraAbilityProgressBase*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + ANLGFGNKPHL_BPLPBPMEODA_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::AEPEINGEKCD* KCKLKNEDPBG(::RPG::GameCore::ChimeraAbilityProgressBase* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
		{
			return ((::AEPEINGEKCD*(*)(::RPG::GameCore::ChimeraAbilityProgressBase*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + ANLGFGNKPHL_KCKLKNEDPBG_OFFSET))(a1, a2, a3, a4);
		}

	};
