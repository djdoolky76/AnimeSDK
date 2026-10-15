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
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CJGNCPIDGNH_AHDPEAKFJAK_OFFSET UNITYSDK_OFFSET(0xD20EFE0)
#define CJGNCPIDGNH_BGAIGCGLKEL_OFFSET UNITYSDK_OFFSET(0xD20F980)
#define CJGNCPIDGNH_BHMEGEPHBIC_OFFSET UNITYSDK_OFFSET(0xD20DE30)
#define CJGNCPIDGNH_CDODNONECGH_OFFSET UNITYSDK_OFFSET(0xD20F620)
#define CJGNCPIDGNH_CTOR_OFFSET UNITYSDK_OFFSET(0xD20FA40)
#define CJGNCPIDGNH_DKNMJPCENKK_OFFSET UNITYSDK_OFFSET(0xD20D940)
#define CJGNCPIDGNH_EIBLOIFPFEI_OFFSET UNITYSDK_OFFSET(0xD20F810)
#define CJGNCPIDGNH_GMHFMPLLPDL_OFFSET UNITYSDK_OFFSET(0xD20DA10)
#define CJGNCPIDGNH_HCJEKDPGABN_OFFSET UNITYSDK_OFFSET(0xD20F2F0)
#define CJGNCPIDGNH_HECJOEDEHHA_OFFSET UNITYSDK_OFFSET(0xD20F9F0)
#define CJGNCPIDGNH_HFAGDHEMCKN_OFFSET UNITYSDK_OFFSET(0xD20F710)
#define CJGNCPIDGNH_HIOFMONBFLO_OFFSET UNITYSDK_OFFSET(0xD20BF80)
#define CJGNCPIDGNH_IFPGHFPNIFA_OFFSET UNITYSDK_OFFSET(0xD20F880)
#define CJGNCPIDGNH_IGHBFLPONDH_OFFSET UNITYSDK_OFFSET(0xD20EE90)
#define CJGNCPIDGNH_IJMBDEACKNA_OFFSET UNITYSDK_OFFSET(0xD20EF00)
#define CJGNCPIDGNH_IPOFJHJGILO_OFFSET UNITYSDK_OFFSET(0xD20CD00)
#define CJGNCPIDGNH_JDMMKOKJPPK_OFFSET UNITYSDK_OFFSET(0xD20B8A0)
#define CJGNCPIDGNH_JKNKBLJPGDB_OFFSET UNITYSDK_OFFSET(0xD20BD20)
#define CJGNCPIDGNH_JMHBGOJHNFJ_OFFSET UNITYSDK_OFFSET(0xD20EA50)
#define CJGNCPIDGNH_KKBJHGKHHFD_OFFSET UNITYSDK_OFFSET(0xD20C390)
#define CJGNCPIDGNH_KMHFKBNHDOH_OFFSET UNITYSDK_OFFSET(0xD20E1A0)
#define CJGNCPIDGNH_MACOBOLJKII_OFFSET UNITYSDK_OFFSET(0xD20C5A0)
#define CJGNCPIDGNH_NHNICFNGDBD_OFFSET UNITYSDK_OFFSET(0xD20E560)
#define CJGNCPIDGNH_NIJHDGKBHPM_OFFSET UNITYSDK_OFFSET(0xD20BCC0)
#define CJGNCPIDGNH_PGIFLEDFMHK_OFFSET UNITYSDK_OFFSET(0xD20D080)
#define CJGNCPIDGNH_PINPKNJDKLP_OFFSET UNITYSDK_OFFSET(0xD20D610)
#define CJGNCPIDGNH_START_OFFSET UNITYSDK_OFFSET(0xD20B6E0)
#define CJGNCPIDGNH_STOP_OFFSET UNITYSDK_OFFSET(0xD20B7C0)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_0_OFFSET UNITYSDK_OFFSET(0xD20FD00)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_2_OFFSET UNITYSDK_OFFSET(0xD20FD20)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_5_OFFSET UNITYSDK_OFFSET(0xD20FAF0)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_7_OFFSET UNITYSDK_OFFSET(0xD20FB10)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_8_OFFSET UNITYSDK_OFFSET(0xD20FC50)
#define CJGNCPIDGNH__TRYGIVEUPANDQUITCURLOBBY_B__6_9_OFFSET UNITYSDK_OFFSET(0xD20FE60)
#define CJGNCPIDGNH__TRYGIVEUP_B__11_3_OFFSET UNITYSDK_OFFSET(0xD20FF10)

	class CJGNCPIDGNH : public ::BHPMNMMGLHI
	{
	public:
		::MBJOEPEGLII* NCIINDGLMFI; // 0x20
		::RPG::Client::Promises::Promise* FJNDBBDGKGG; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Action*>* BANKIFNMGOG; // 0x30
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

		::RPG::Client::Promises::IPromise* JDMMKOKJPPK(::FJPMJPEKLJL a1, ::System::UInt32 a2, ::FMHEHLIFNGJ* a3, ::PJMGBLIFDFP* a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL, ::System::UInt32, ::FMHEHLIFNGJ*, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_JDMMKOKJPPK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* JKNKBLJPGDB(::MBJOEPEGLII* a1, ::System::UInt32 a2, ::FMHEHLIFNGJ* a3, ::PJMGBLIFDFP* a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::MBJOEPEGLII*, ::System::UInt32, ::FMHEHLIFNGJ*, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_JKNKBLJPGDB_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* HIOFMONBFLO(::FJPMJPEKLJL a1, ::System::UInt64 a2, ::FMHEHLIFNGJ* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL, ::System::UInt64, ::FMHEHLIFNGJ*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_HIOFMONBFLO_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* KKBJHGKHHFD(::MBJOEPEGLII* a1, ::System::UInt64 a2, ::FMHEHLIFNGJ* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::MBJOEPEGLII*, ::System::UInt64, ::FMHEHLIFNGJ*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_KKBJHGKHHFD_OFFSET))(this, a1, a2, a3);
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

		::System::Void CDODNONECGH(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_CDODNONECGH_OFFSET))(this, a1);
		}

		::System::Void HFAGDHEMCKN(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH_HFAGDHEMCKN_OFFSET))(this, a1);
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
