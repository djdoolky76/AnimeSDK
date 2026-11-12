#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/Client/Multiplayer/MPSessionState.h"
class FMHEHLIFNGJ;
class MBJOEPEGLII;
class PJMGBLIFDFP;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CJGNCPIDGNH_AHDPEAKFJAK_OFFSET UNITYSDK_OFFSET(0xDB84BD0)
#define CJGNCPIDGNH_BGAIGCGLKEL_OFFSET UNITYSDK_OFFSET(0xDB85570)
#define CJGNCPIDGNH_BHMEGEPHBIC_OFFSET UNITYSDK_OFFSET(0xDB83A20)
#define CJGNCPIDGNH_CDODNONECGH_OFFSET UNITYSDK_OFFSET(0xDB85210)
#define CJGNCPIDGNH_CTOR_OFFSET UNITYSDK_OFFSET(0xDB85630)
#define CJGNCPIDGNH_DKNMJPCENKK_OFFSET UNITYSDK_OFFSET(0xDB83530)
#define CJGNCPIDGNH_EIBLOIFPFEI_OFFSET UNITYSDK_OFFSET(0xDB85400)
#define CJGNCPIDGNH_GMHFMPLLPDL_OFFSET UNITYSDK_OFFSET(0xDB83600)
#define CJGNCPIDGNH_HCJEKDPGABN_OFFSET UNITYSDK_OFFSET(0xDB84EE0)
#define CJGNCPIDGNH_HECJOEDEHHA_OFFSET UNITYSDK_OFFSET(0xDB855E0)
#define CJGNCPIDGNH_HFAGDHEMCKN_OFFSET UNITYSDK_OFFSET(0xDB85300)
#define CJGNCPIDGNH_HIOFMONBFLO_OFFSET UNITYSDK_OFFSET(0xDB81B80)
#define CJGNCPIDGNH_IFPGHFPNIFA_OFFSET UNITYSDK_OFFSET(0xDB85470)
#define CJGNCPIDGNH_IGHBFLPONDH_OFFSET UNITYSDK_OFFSET(0xDB84A80)
#define CJGNCPIDGNH_IJMBDEACKNA_OFFSET UNITYSDK_OFFSET(0xDB84AF0)
#define CJGNCPIDGNH_IPOFJHJGILO_OFFSET UNITYSDK_OFFSET(0xDB828F0)
#define CJGNCPIDGNH_JDMMKOKJPPK_OFFSET UNITYSDK_OFFSET(0xDB814A0)
#define CJGNCPIDGNH_JKNKBLJPGDB_OFFSET UNITYSDK_OFFSET(0xDB81920)
#define CJGNCPIDGNH_JMHBGOJHNFJ_OFFSET UNITYSDK_OFFSET(0xDB84640)
#define CJGNCPIDGNH_KKBJHGKHHFD_OFFSET UNITYSDK_OFFSET(0xDB81F90)
#define CJGNCPIDGNH_KMHFKBNHDOH_OFFSET UNITYSDK_OFFSET(0xDB83D90)
#define CJGNCPIDGNH_MACOBOLJKII_OFFSET UNITYSDK_OFFSET(0xDB821A0)
#define CJGNCPIDGNH_NHNICFNGDBD_OFFSET UNITYSDK_OFFSET(0xDB84150)
#define CJGNCPIDGNH_NIJHDGKBHPM_OFFSET UNITYSDK_OFFSET(0xDB818C0)
#define CJGNCPIDGNH_PGIFLEDFMHK_OFFSET UNITYSDK_OFFSET(0xDB82C70)
#define CJGNCPIDGNH_PINPKNJDKLP_OFFSET UNITYSDK_OFFSET(0xDB83200)
#define CJGNCPIDGNH_START_OFFSET UNITYSDK_OFFSET(0xDB812E0)
#define CJGNCPIDGNH_STOP_OFFSET UNITYSDK_OFFSET(0xDB813C0)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_0_OFFSET UNITYSDK_OFFSET(0xDB858F0)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_2_OFFSET UNITYSDK_OFFSET(0xDB85910)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_5_OFFSET UNITYSDK_OFFSET(0xDB856E0)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_7_OFFSET UNITYSDK_OFFSET(0xDB85700)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_8_OFFSET UNITYSDK_OFFSET(0xDB85840)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_9_OFFSET UNITYSDK_OFFSET(0xDB85A50)
#define CJGNCPIDGNH__TRYGIVEUP_B__11_3_OFFSET UNITYSDK_OFFSET(0xDB85B00)

inline static constexpr unsigned int CJGNCPIDGNH_TypeDefinitionIndex = 83042;

	class CJGNCPIDGNH : public ::BHPMNMMGLHI
	{
	public:
		::MBJOEPEGLII* NCIINDGLMFI; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>*>* BANKIFNMGOG; // 0x28
		::RPG::Client::Promises::Promise* FJNDBBDGKGG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_STOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* JDMMKOKJPPK(::FJPMJPEKLJL a1, ::System::UInt32 a2, ::FMHEHLIFNGJ* a3, ::PJMGBLIFDFP* a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::FJPMJPEKLJL, ::System::UInt32, ::FMHEHLIFNGJ*, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_JDMMKOKJPPK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* JKNKBLJPGDB(::MBJOEPEGLII* a1, ::System::UInt32 a2, ::FMHEHLIFNGJ* a3, ::PJMGBLIFDFP* a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::MBJOEPEGLII*, ::System::UInt32, ::FMHEHLIFNGJ*, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_JKNKBLJPGDB_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* HIOFMONBFLO(::FJPMJPEKLJL a1, ::System::UInt64 a2, ::FMHEHLIFNGJ* a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::FJPMJPEKLJL, ::System::UInt64, ::FMHEHLIFNGJ*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_HIOFMONBFLO_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* KKBJHGKHHFD(::MBJOEPEGLII* a1, ::System::UInt64 a2, ::FMHEHLIFNGJ* a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::MBJOEPEGLII*, ::System::UInt64, ::FMHEHLIFNGJ*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_KKBJHGKHHFD_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* MACOBOLJKII()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_MACOBOLJKII_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PINPKNJDKLP(::FJPMJPEKLJL a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_PINPKNJDKLP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* DKNMJPCENKK(::FJPMJPEKLJL a1, ::RPG::Client::LobbyMemberData* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_DKNMJPCENKK_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* GMHFMPLLPDL(::FJPMJPEKLJL a1, ::FMHEHLIFNGJ* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL, ::FMHEHLIFNGJ*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_GMHFMPLLPDL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* BHMEGEPHBIC(::FJPMJPEKLJL a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_BHMEGEPHBIC_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* PGIFLEDFMHK()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_PGIFLEDFMHK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* KMHFKBNHDOH(::FJPMJPEKLJL a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_KMHFKBNHDOH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* NHNICFNGDBD(::FJPMJPEKLJL a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_NHNICFNGDBD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* JMHBGOJHNFJ(::FJPMJPEKLJL a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_JMHBGOJHNFJ_OFFSET))(this, a1);
		}

		::System::Void IGHBFLPONDH(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_IGHBFLPONDH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AHDPEAKFJAK(::FJPMJPEKLJL a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL, ::System::UInt32))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_AHDPEAKFJAK_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* HCJEKDPGABN(::FJPMJPEKLJL a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_HCJEKDPGABN_OFFSET))(this, a1);
		}

		::System::Void CDODNONECGH(::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_CDODNONECGH_OFFSET))(this, a1);
		}

		::System::Void HFAGDHEMCKN(::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_HFAGDHEMCKN_OFFSET))(this, a1);
		}

		::MBJOEPEGLII* NIJHDGKBHPM(::FJPMJPEKLJL a1)
		{
			return ((::MBJOEPEGLII*(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_NIJHDGKBHPM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* IJMBDEACKNA()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_IJMBDEACKNA_OFFSET))(this);
		}

		::System::Void EIBLOIFPFEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_EIBLOIFPFEI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IPOFJHJGILO()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_IPOFJHJGILO_OFFSET))(this);
		}

		::System::Void IFPGHFPNIFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_IFPGHFPNIFA_OFFSET))(this, a1);
		}

		::System::Void BGAIGCGLKEL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_BGAIGCGLKEL_OFFSET))(this, a1);
		}

		::FJPMJPEKLJL HECJOEDEHHA()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_HECJOEDEHHA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryGiveUpAndQuitCurLobby_b__6_5()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_5_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryGiveUpAndQuitCurLobby_b__6_7()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_7_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryGiveUpAndQuitCurLobby_b__6_8()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_8_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryGiveUpAndQuitCurLobby_b__6_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryGiveUpAndQuitCurLobby_b__6_2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryGiveUpAndQuitCurLobby_b__6_9()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_9_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryGiveUp_b__11_3()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH__TRYGIVEUP_B__11_3_OFFSET))(this);
		}

	};
