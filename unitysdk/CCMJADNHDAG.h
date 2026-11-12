#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class BFMHFBHIAAL;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
class KAKADGHNMFK;
class NBFCOGKMDGA;
class PEBLIEJAJPK;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CCMJADNHDAG_CTOR_OFFSET UNITYSDK_OFFSET(0xD0B7C90)
#define CCMJADNHDAG_EAKBDBNBBOA_OFFSET UNITYSDK_OFFSET(0xD0B7FC0)
#define CCMJADNHDAG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD0B83E0)
#define CCMJADNHDAG_KGFJEKJDIGN_OFFSET UNITYSDK_OFFSET(0xD0B7D60)
#define CCMJADNHDAG_LIPCPKOHGDJ_OFFSET UNITYSDK_OFFSET(0xD0B80C0)
#define CCMJADNHDAG_MCGOFFADONA_OFFSET UNITYSDK_OFFSET(0xD0B8150)
#define CCMJADNHDAG_TICK_OFFSET UNITYSDK_OFFSET(0xD0B85B0)

inline static constexpr unsigned int CCMJADNHDAG_TypeDefinitionIndex = 80398;

	class CCMJADNHDAG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* ANIMIKECIMK; // 0x10
		::NBFCOGKMDGA* KGEIJJIFGOI; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* CBIDHFIBBGG; // 0x20
		::System::Collections::Generic::Queue_1<::PEBLIEJAJPK*>* LMKKGJFNMGM; // 0x28
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x30
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* OJFECHILFHG; // 0x38
		::System::Void _ctor(::NBFCOGKMDGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBFCOGKMDGA*))((::PBYTE)hIl2Cpp + CCMJADNHDAG_CTOR_OFFSET))(this, a1);
		}

		::System::Void KGFJEKJDIGN(::BFMHFBHIAAL* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::System::Void(*)(::PVOID, ::BFMHFBHIAAL*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CCMJADNHDAG_KGFJEKJDIGN_OFFSET))(this, a1, a2);
		}

		::System::Void EAKBDBNBBOA(::KAKADGHNMFK* a1, ::BFMHFBHIAAL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::BFMHFBHIAAL*))((::PBYTE)hIl2Cpp + CCMJADNHDAG_EAKBDBNBBOA_OFFSET))(this, a1, a2);
		}

		::System::Void LIPCPKOHGDJ(::PEBLIEJAJPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEBLIEJAJPK*))((::PBYTE)hIl2Cpp + CCMJADNHDAG_LIPCPKOHGDJ_OFFSET))(this, a1);
		}

		::System::Void MCGOFFADONA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMJADNHDAG_MCGOFFADONA_OFFSET))(this);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + CCMJADNHDAG_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCMJADNHDAG_TICK_OFFSET))(this, a1);
		}

	};
