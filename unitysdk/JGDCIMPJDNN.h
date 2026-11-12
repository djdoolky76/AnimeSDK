#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOEIAGPENLB;
class EEMOEKHIFNN;
class FJCPGIHOMCN;
class GNDPHNBIDJJ;
class HPOCHBIJIHH;
class KKHBPFEMLKM;
class NCBOENDMDIC;
class OBJANKHLNGO;
class PHKEBBMDJKD;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define JGDCIMPJDNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B0D90)
#define JGDCIMPJDNN_GET_WAITFULLSYNCFINISH_OFFSET UNITYSDK_OFFSET(0xB9B1400)
#define JGDCIMPJDNN_GJJOENMGPMB_OFFSET UNITYSDK_OFFSET(0xB9B10A0)
#define JGDCIMPJDNN_IEAAPKFFKND_OFFSET UNITYSDK_OFFSET(0xB9B1280)
#define JGDCIMPJDNN_LNCIJBEMPJF_OFFSET UNITYSDK_OFFSET(0xB9B0E00)
#define JGDCIMPJDNN_SET_WAITFULLSYNCFINISH_OFFSET UNITYSDK_OFFSET(0xB9B1410)

inline static constexpr unsigned int JGDCIMPJDNN_TypeDefinitionIndex = 83300;

	class JGDCIMPJDNN : public ::System::Object
	{
	public:
		::FJCPGIHOMCN* LHPCCAJAECM; // 0x10
		::PHKEBBMDJKD* FMKJAMIPAFM; // 0x18
		::GNDPHNBIDJJ* MJHHLOPFDNK; // 0x20
		::BOEIAGPENLB* GKCLDOGEHGI; // 0x28
		::RPG::Client::Promises::Promise* _WaitFullSyncFinish_k__BackingField; // 0x30
		::HPOCHBIJIHH* PODJBLOPDAK; // 0x38
		::OBJANKHLNGO* GJALMBBNNOF; // 0x40
		::KKHBPFEMLKM* HNLOJEIEFKC; // 0x48
		::EEMOEKHIFNN* KMGJFPLCEDC; // 0x50
		::System::Void _ctor(::GNDPHNBIDJJ* a1, ::KKHBPFEMLKM* a2, ::HPOCHBIJIHH* a3, ::FJCPGIHOMCN* a4, ::EEMOEKHIFNN* a5, ::BOEIAGPENLB* a6, ::PHKEBBMDJKD* a7, ::OBJANKHLNGO* a8)
		{
			return ((::System::Void(*)(::PVOID, ::GNDPHNBIDJJ*, ::KKHBPFEMLKM*, ::HPOCHBIJIHH*, ::FJCPGIHOMCN*, ::EEMOEKHIFNN*, ::BOEIAGPENLB*, ::PHKEBBMDJKD*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + JGDCIMPJDNN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::RPG::Client::Promises::IPromise* LNCIJBEMPJF()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDCIMPJDNN_LNCIJBEMPJF_OFFSET))(this);
		}

		::System::Void GJJOENMGPMB(::NCBOENDMDIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCBOENDMDIC*))((::PBYTE)hIl2Cpp + JGDCIMPJDNN_GJJOENMGPMB_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::NCBOENDMDIC*>* IEAAPKFFKND(::NCBOENDMDIC* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::NCBOENDMDIC*>*(*)(::PVOID, ::NCBOENDMDIC*))((::PBYTE)hIl2Cpp + JGDCIMPJDNN_IEAAPKFFKND_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* get_WaitFullSyncFinish()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDCIMPJDNN_GET_WAITFULLSYNCFINISH_OFFSET))(this);
		}

		::System::Void set_WaitFullSyncFinish(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + JGDCIMPJDNN_SET_WAITFULLSYNCFINISH_OFFSET))(this, a1);
		}

	};
