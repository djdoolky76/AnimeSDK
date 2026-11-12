#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::ChenLingBattle { class IGamePhase; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define GOCODBMFHPH_BHLDCIHDBDM_OFFSET UNITYSDK_OFFSET(0x16AAF990)
#define GOCODBMFHPH_CTOR_OFFSET UNITYSDK_OFFSET(0x16AAF9D0)
#define GOCODBMFHPH_DCJBGECKAHO_OFFSET UNITYSDK_OFFSET(0x16AAFC90)
#define GOCODBMFHPH_GGJDNENMHNA_OFFSET UNITYSDK_OFFSET(0x16AAFAD0)
#define GOCODBMFHPH_IDCGCDAOKIK_OFFSET UNITYSDK_OFFSET(0x16AAFDF0)
#define GOCODBMFHPH_IEBBOMGACIG_OFFSET UNITYSDK_OFFSET(0x16AAF450)
#define GOCODBMFHPH_JGAFOJIBEPA_OFFSET UNITYSDK_OFFSET(0x16AAFEF0)
#define GOCODBMFHPH_KLJJJPECGLI_OFFSET UNITYSDK_OFFSET(0x16AAF260)
#define GOCODBMFHPH_NMEIKMNMFCJ_OFFSET UNITYSDK_OFFSET(0x16AAFFB0)
#define GOCODBMFHPH_OELCJEDFNFD_OFFSET UNITYSDK_OFFSET(0x16AAFD60)
#define GOCODBMFHPH_OMAPMGMEBFA_OFFSET UNITYSDK_OFFSET(0x16AAFE70)

inline static constexpr unsigned int GOCODBMFHPH_TypeDefinitionIndex = 78631;

	class GOCODBMFHPH : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::IGamePhase* BOKIJMMFCKO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::ChenLingBattle::IGamePhase*>* PAHJPOGLALP; // 0x18
		::System::Collections::Generic::Queue_1<::System::Object*>* JKEJPOGHMND; // 0x20
		::RPG::Client::ChenLingBattle::IGamePhase* GDHFEAKLHFJ; // 0x28
		::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* PHCFMCOJHAO; // 0x30
		::RPG::Client::ChenLingBattle::IGamePhase* OIONFABNEBK; // 0x38
		::System::Boolean AKBAIKCDEHP; // 0x40
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*))((::PBYTE)hIl2Cpp + GOCODBMFHPH_CTOR_OFFSET))(this, a1);
		}

		::System::Void KLJJJPECGLI(::System::Type* a1, ::System::Object* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + GOCODBMFHPH_KLJJJPECGLI_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ChenLingBattle::IGamePhase* BHLDCIHDBDM()
		{
			return ((::RPG::Client::ChenLingBattle::IGamePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH_BHLDCIHDBDM_OFFSET))(this);
		}

		::System::Void GGJDNENMHNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH_GGJDNENMHNA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OELCJEDFNFD()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH_OELCJEDFNFD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IDCGCDAOKIK()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH_IDCGCDAOKIK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OMAPMGMEBFA()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH_OMAPMGMEBFA_OFFSET))(this);
		}

		::System::Void JGAFOJIBEPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH_JGAFOJIBEPA_OFFSET))(this);
		}

		::System::Void IEBBOMGACIG(::RPG::Client::ChenLingBattle::IGamePhase* a1, ::System::Object* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::IGamePhase*, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + GOCODBMFHPH_IEBBOMGACIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DCJBGECKAHO(::RPG::Client::ChenLingBattle::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::IGamePhase*))((::PBYTE)hIl2Cpp + GOCODBMFHPH_DCJBGECKAHO_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattle::IGamePhase* NMEIKMNMFCJ()
		{
			return ((::RPG::Client::ChenLingBattle::IGamePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH_NMEIKMNMFCJ_OFFSET))(this);
		}

	};
