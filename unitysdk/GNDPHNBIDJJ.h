#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class AIKICHNEPKE;
class DNNNCIPMPKH;
class EILMEGELLLJ;
class FNHBHPDJACF;
class GCJCLFOLBPP;
class GIGMJINJFJC;
class KBFCICJOJPE;
class KDMOONKPLPI;
class KNLJDBNOPKD;
class NCBOENDMDIC;
class OBJANKHLNGO;
class PMEHLELAFJI;
class PPGFKFIAAHL;
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNDPHNBIDJJ_BACFIBGEPJG_OFFSET UNITYSDK_OFFSET(0x15AFEE40)
#define GNDPHNBIDJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFEA00)
#define GNDPHNBIDJJ_EJNLHHJKGAC_OFFSET UNITYSDK_OFFSET(0x15AFF0A0)
#define GNDPHNBIDJJ_ENFJJGGMFFM_OFFSET UNITYSDK_OFFSET(0x15AFF1E0)
#define GNDPHNBIDJJ_HNHEPCIGGLA_OFFSET UNITYSDK_OFFSET(0x15AFEEF0)
#define GNDPHNBIDJJ_IBDINCPLAKO_OFFSET UNITYSDK_OFFSET(0x15AFF140)
#define GNDPHNBIDJJ_JFKPGCOMCIH_OFFSET UNITYSDK_OFFSET(0x15AFECB0)
#define GNDPHNBIDJJ_LEONBEGMMKG_OFFSET UNITYSDK_OFFSET(0x15AFF320)
#define GNDPHNBIDJJ_NFPJBEIPCCA_OFFSET UNITYSDK_OFFSET(0x15AFEC40)
#define GNDPHNBIDJJ_NKIMDHNOEIA_OFFSET UNITYSDK_OFFSET(0x15AFEF90)
#define GNDPHNBIDJJ_NLGNPCLDBNA_OFFSET UNITYSDK_OFFSET(0x15AFF280)
#define GNDPHNBIDJJ_PGMEMNLNAND_OFFSET UNITYSDK_OFFSET(0x15AFEDA0)
#define GNDPHNBIDJJ_START_OFFSET UNITYSDK_OFFSET(0x15AFEA50)
#define GNDPHNBIDJJ_STOP_OFFSET UNITYSDK_OFFSET(0x15AFEC00)

	class GNDPHNBIDJJ : public ::BHPMNMMGLHI
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::System::Void _ctor(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_STOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NFPJBEIPCCA()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_NFPJBEIPCCA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* JFKPGCOMCIH(::System::Collections::Generic::List_1<::GCJCLFOLBPP*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::GCJCLFOLBPP*>*))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_JFKPGCOMCIH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* PGMEMNLNAND(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_PGMEMNLNAND_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* BACFIBGEPJG(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_BACFIBGEPJG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* HNHEPCIGGLA(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_HNHEPCIGGLA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* NKIMDHNOEIA(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_NKIMDHNOEIA_OFFSET))(this, a1, a2);
		}

		::System::Void EJNLHHJKGAC(::System::UInt16 a1, ::KNLJDBNOPKD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::KNLJDBNOPKD*))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_EJNLHHJKGAC_OFFSET))(this, a1, a2);
		}

		::System::Void IBDINCPLAKO(::System::UInt16 a1, ::EILMEGELLLJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::EILMEGELLLJ*))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_IBDINCPLAKO_OFFSET))(this, a1, a2);
		}

		::System::Void ENFJJGGMFFM(::System::UInt16 a1, ::DNNNCIPMPKH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::DNNNCIPMPKH*))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_ENFJJGGMFFM_OFFSET))(this, a1, a2);
		}

		::System::Void NLGNPCLDBNA(::System::UInt16 a1, ::PPGFKFIAAHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::PPGFKFIAAHL*))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_NLGNPCLDBNA_OFFSET))(this, a1, a2);
		}

		::System::Void LEONBEGMMKG(::System::UInt16 a1, ::AIKICHNEPKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::AIKICHNEPKE*))((::PBYTE)hIl2Cpp + GNDPHNBIDJJ_LEONBEGMMKG_OFFSET))(this, a1, a2);
		}

	};
