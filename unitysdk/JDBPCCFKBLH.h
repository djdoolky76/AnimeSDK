#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIKNDKJDLG;
class EBHGHFIKCOD;
class FHNIKPHKIOH;
class GKEPCDFBABH;
class JBPOKKNFOKM;
class JJFKMEJGOAG;
class LDFEDNEMOCD;
class MINAKLCBJMO;
class OBJANKHLNGO;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDBPCCFKBLH_AKPLBGMCJIF_OFFSET UNITYSDK_OFFSET(0x1697F820)
#define JDBPCCFKBLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x16980F20)
#define JDBPCCFKBLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1697F450)
#define JDBPCCFKBLH_EAPGNCBACFC_OFFSET UNITYSDK_OFFSET(0x16980270)
#define JDBPCCFKBLH_ENINFLCBKBH_OFFSET UNITYSDK_OFFSET(0x16980E40)
#define JDBPCCFKBLH_FAGFEPPGHOG_OFFSET UNITYSDK_OFFSET(0x16980650)
#define JDBPCCFKBLH_GJANCDODAND_OFFSET UNITYSDK_OFFSET(0x169806F0)
#define JDBPCCFKBLH_HKEHBBONAFD_OFFSET UNITYSDK_OFFSET(0x16980D90)
#define JDBPCCFKBLH_KAOMEMJCOAD_OFFSET UNITYSDK_OFFSET(0x1697F790)
#define JDBPCCFKBLH_KKLIJHJMGKI_OFFSET UNITYSDK_OFFSET(0x1697FAA0)
#define JDBPCCFKBLH_MFKBOMMAGAL_OFFSET UNITYSDK_OFFSET(0x169804D0)
#define JDBPCCFKBLH_NIEEHLEPIFE_OFFSET UNITYSDK_OFFSET(0x16980370)
#define JDBPCCFKBLH_OMMPGNAAJKO_OFFSET UNITYSDK_OFFSET(0x1697F930)
#define JDBPCCFKBLH_START_OFFSET UNITYSDK_OFFSET(0x1697F600)
#define JDBPCCFKBLH_STOP_OFFSET UNITYSDK_OFFSET(0x1697F6E0)

inline static constexpr unsigned int JDBPCCFKBLH_TypeDefinitionIndex = 84871;

	class JDBPCCFKBLH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise_1<::JBPOKKNFOKM*>*>* DGLMIMMJALN; // 0x10
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x18
		::FHNIKPHKIOH* FPNMIGDJBIE; // 0x20
		::OBJANKHLNGO* GJALMBBNNOF; // 0x28
		::LDFEDNEMOCD* MJHHLOPFDNK; // 0x30
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LEBIBBOHPJE()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("", "JDBPCCFKBLH")->GetStaticField(0x67140);
		}

		::System::Void _ctor(::LDFEDNEMOCD* a1, ::MINAKLCBJMO* a2, ::FHNIKPHKIOH* a3, ::OBJANKHLNGO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::LDFEDNEMOCD*, ::MINAKLCBJMO*, ::FHNIKPHKIOH*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDBPCCFKBLH_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_STOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::BJIKNDKJDLG*>* KAOMEMJCOAD(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::BJIKNDKJDLG*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_KAOMEMJCOAD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::Promises::IPromise_1<::BJIKNDKJDLG*>*>* KKLIJHJMGKI(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::Promises::IPromise_1<::BJIKNDKJDLG*>*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_KKLIJHJMGKI_OFFSET))(this, a1);
		}

		::System::Boolean EAPGNCBACFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_EAPGNCBACFC_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::BJIKNDKJDLG*>* OMMPGNAAJKO(::System::UInt32 a1, ::RPG::Client::Promises::IPromise* a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::BJIKNDKJDLG*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::Promises::IPromise*))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_OMMPGNAAJKO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::JBPOKKNFOKM*>* NIEEHLEPIFE(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::JBPOKKNFOKM*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_NIEEHLEPIFE_OFFSET))(this, a1);
		}

		::System::Void MFKBOMMAGAL(::JJFKMEJGOAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJFKMEJGOAG*))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_MFKBOMMAGAL_OFFSET))(this, a1);
		}

		::System::Void FAGFEPPGHOG(::GKEPCDFBABH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKEPCDFBABH*))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_FAGFEPPGHOG_OFFSET))(this, a1);
		}

		::BJIKNDKJDLG* GJANCDODAND(::System::UInt32 a1, ::JBPOKKNFOKM* a2)
		{
			return ((::BJIKNDKJDLG*(*)(::PVOID, ::System::UInt32, ::JBPOKKNFOKM*))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_GJANCDODAND_OFFSET))(this, a1, a2);
		}

		::EBHGHFIKCOD* ENINFLCBKBH(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
		{
			return ((::EBHGHFIKCOD*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_ENINFLCBKBH_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::Promises::IPromise* AKPLBGMCJIF()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + JDBPCCFKBLH_AKPLBGMCJIF_OFFSET))();
		}

		static ::System::Boolean HKEHBBONAFD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JDBPCCFKBLH_HKEHBBONAFD_OFFSET))(a1);
		}

	};
