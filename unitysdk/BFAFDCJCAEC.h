#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/FDJKLJGDCID.h"
#include "unitysdk/HNBGMOIHOAN.h"
class EGGOCLKIAME;
class EJILGJGLKIO;
class FHHAHPNHACD;
class JLHEBEDKIPC;
class MLANPONCIIC;
class OIKGKBHIILL;
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFAFDCJCAEC_BJDIFDMKIJI_OFFSET UNITYSDK_OFFSET(0xB15D220)
#define BFAFDCJCAEC_CENKACFPMME_OFFSET UNITYSDK_OFFSET(0xB15C7D0)
#define BFAFDCJCAEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB15C700)
#define BFAFDCJCAEC_DBEMJAFPFEK_OFFSET UNITYSDK_OFFSET(0xB15D080)
#define BFAFDCJCAEC_DKEOANECPPK_OFFSET UNITYSDK_OFFSET(0xB15D4B0)
#define BFAFDCJCAEC_GOCGGDOHKOE_OFFSET UNITYSDK_OFFSET(0xB15D580)
#define BFAFDCJCAEC_JKCLDPCCCEF_OFFSET UNITYSDK_OFFSET(0xB15CC40)
#define BFAFDCJCAEC_KNJMMNOGPJI_OFFSET UNITYSDK_OFFSET(0xB15C8F0)
#define BFAFDCJCAEC_MBGGONOMMOO_OFFSET UNITYSDK_OFFSET(0xB15CD90)
#define BFAFDCJCAEC__SENDADDRELICPRESETPLAN_B__2_0_OFFSET UNITYSDK_OFFSET(0xB15D730)
#define BFAFDCJCAEC__SENDGETRELICPRESETPLAN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB15D660)

	class BFAFDCJCAEC : public ::BHPMNMMGLHI
	{
	public:
		::RPG::Client::RelicPresetModel* JOKBAPFCJFM; // 0x20
		::System::Void _ctor(::RPG::Client::RelicPresetModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicPresetModel*))((::PBYTE)hIl2Cpp + BFAFDCJCAEC_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* CENKACFPMME(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFAFDCJCAEC_CENKACFPMME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* KNJMMNOGPJI(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::String* a3, ::FDJKLJGDCID a4, ::HNBGMOIHOAN a5)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::String*, ::FDJKLJGDCID, ::HNBGMOIHOAN))((::PBYTE)hIl2Cpp + BFAFDCJCAEC_KNJMMNOGPJI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::Promises::IPromise* JKCLDPCCCEF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BFAFDCJCAEC_JKCLDPCCCEF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* MBGGONOMMOO(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::FDJKLJGDCID a4, ::HNBGMOIHOAN a5)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::FDJKLJGDCID, ::HNBGMOIHOAN))((::PBYTE)hIl2Cpp + BFAFDCJCAEC_MBGGONOMMOO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::Promises::IPromise* DBEMJAFPFEK(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + BFAFDCJCAEC_DBEMJAFPFEK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BJDIFDMKIJI(::System::UInt32 a1, ::OIKGKBHIILL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::OIKGKBHIILL*))((::PBYTE)hIl2Cpp + BFAFDCJCAEC_BJDIFDMKIJI_OFFSET))(this, a1, a2);
		}

		::System::Void DKEOANECPPK(::System::UInt16 a1, ::EGGOCLKIAME* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::EGGOCLKIAME*))((::PBYTE)hIl2Cpp + BFAFDCJCAEC_DKEOANECPPK_OFFSET))(this, a1, a2);
		}

		::System::Void GOCGGDOHKOE(::System::UInt16 a1, ::EJILGJGLKIO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::EJILGJGLKIO*))((::PBYTE)hIl2Cpp + BFAFDCJCAEC_GOCGGDOHKOE_OFFSET))(this, a1, a2);
		}

		::JLHEBEDKIPC* _SendGetRelicPresetPlan_b__1_0(::JLHEBEDKIPC* a1)
		{
			return ((::JLHEBEDKIPC*(*)(::PVOID, ::JLHEBEDKIPC*))((::PBYTE)hIl2Cpp + BFAFDCJCAEC__SENDGETRELICPRESETPLAN_B__1_0_OFFSET))(this, a1);
		}

		::MLANPONCIIC* _SendAddRelicPresetPlan_b__2_0(::MLANPONCIIC* a1)
		{
			return ((::MLANPONCIIC*(*)(::PVOID, ::MLANPONCIIC*))((::PBYTE)hIl2Cpp + BFAFDCJCAEC__SENDADDRELICPRESETPLAN_B__2_0_OFFSET))(this, a1);
		}

	};
