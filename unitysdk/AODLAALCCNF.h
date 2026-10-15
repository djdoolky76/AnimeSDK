#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMOPLAHDEPN;
class DHCNDENHLGO;
class FBAMAFLOBGA;
class FOMDMAGLLNI;
class GFNAHGHNICL;
class ICMJACOKIPI;
class JCKGBFJJFFC;
class OIPLJGNIGKD;
class PMMOFOBCINL;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AODLAALCCNF_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x158A7400)
#define AODLAALCCNF_ADD_ONPLANCHANGED_OFFSET UNITYSDK_OFFSET(0x158A7330)
#define AODLAALCCNF_CTOR_OFFSET UNITYSDK_OFFSET(0x158A74C0)
#define AODLAALCCNF_EDIDFAGCNPM_OFFSET UNITYSDK_OFFSET(0x158A7520)
#define AODLAALCCNF_FDBEBNCMIDJ_OFFSET UNITYSDK_OFFSET(0x158A75B0)
#define AODLAALCCNF_FLPDELEDIBK_OFFSET UNITYSDK_OFFSET(0x158A7230)
#define AODLAALCCNF_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x158A73F0)
#define AODLAALCCNF_IKLBKDOKBGN_OFFSET UNITYSDK_OFFSET(0x158A7780)
#define AODLAALCCNF_JFMKPGMCFLE_OFFSET UNITYSDK_OFFSET(0x158A78D0)
#define AODLAALCCNF_LCDHNICFONC_OFFSET UNITYSDK_OFFSET(0x158A7A70)
#define AODLAALCCNF_LHJEMKJFLJK_OFFSET UNITYSDK_OFFSET(0x158A71F0)
#define AODLAALCCNF_LJBBIGBMLLI_OFFSET UNITYSDK_OFFSET(0x158A7960)
#define AODLAALCCNF_MMAFLBPLHPD_OFFSET UNITYSDK_OFFSET(0x158A79F0)
#define AODLAALCCNF_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x158A7460)
#define AODLAALCCNF_REMOVE_ONPLANCHANGED_OFFSET UNITYSDK_OFFSET(0x158A7390)

	class AODLAALCCNF : public ::System::Object
	{
	public:
		::System::Action* OnPlanChanged; // 0x10
		::GFNAHGHNICL* _Progress_k__BackingField; // 0x18
		::System::Action* OnChanged; // 0x20
		::FOMDMAGLLNI* JEDPHGCLJBL; // 0x28
		::OIPLJGNIGKD* ECKBBFILCDB; // 0x30
		::System::Void _ctor(::System::Int32 a1, ::OIPLJGNIGKD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::OIPLJGNIGKD*))((::PBYTE)hIl2Cpp + AODLAALCCNF_CTOR_OFFSET))(this, a1, a2);
		}

		::FOMDMAGLLNI* LHJEMKJFLJK()
		{
			return ((::FOMDMAGLLNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODLAALCCNF_LHJEMKJFLJK_OFFSET))(this);
		}

		::System::Void FLPDELEDIBK(::FOMDMAGLLNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOMDMAGLLNI*))((::PBYTE)hIl2Cpp + AODLAALCCNF_FLPDELEDIBK_OFFSET))(this, a1);
		}

		::System::Void add_OnPlanChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AODLAALCCNF_ADD_ONPLANCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPlanChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AODLAALCCNF_REMOVE_ONPLANCHANGED_OFFSET))(this, a1);
		}

		::GFNAHGHNICL* get_Progress()
		{
			return ((::GFNAHGHNICL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODLAALCCNF_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void add_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AODLAALCCNF_ADD_ONCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AODLAALCCNF_REMOVE_ONCHANGED_OFFSET))(this, a1);
		}

		::System::Void EDIDFAGCNPM(::DHCNDENHLGO* a1, ::System::Collections::Generic::IReadOnlyList_1<::ICMJACOKIPI*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*, ::System::Collections::Generic::IReadOnlyList_1<::ICMJACOKIPI*>*))((::PBYTE)hIl2Cpp + AODLAALCCNF_EDIDFAGCNPM_OFFSET))(this, a1, a2);
		}

		::System::Void FDBEBNCMIDJ(::DHCNDENHLGO* a1, ::System::Collections::Generic::IEnumerable_1<::CMOPLAHDEPN*>* a2, ::System::Collections::Generic::IReadOnlyList_1<::PMMOFOBCINL*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*, ::System::Collections::Generic::IEnumerable_1<::CMOPLAHDEPN*>*, ::System::Collections::Generic::IReadOnlyList_1<::PMMOFOBCINL*>*))((::PBYTE)hIl2Cpp + AODLAALCCNF_FDBEBNCMIDJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IKLBKDOKBGN(::FOMDMAGLLNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOMDMAGLLNI*))((::PBYTE)hIl2Cpp + AODLAALCCNF_IKLBKDOKBGN_OFFSET))(this, a1);
		}

		::System::Void JFMKPGMCFLE(::DHCNDENHLGO* a1, ::JCKGBFJJFFC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*, ::JCKGBFJJFFC*))((::PBYTE)hIl2Cpp + AODLAALCCNF_JFMKPGMCFLE_OFFSET))(this, a1, a2);
		}

		::System::Void LJBBIGBMLLI(::DHCNDENHLGO* a1, ::System::Collections::Generic::IReadOnlyList_1<::PMMOFOBCINL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*, ::System::Collections::Generic::IReadOnlyList_1<::PMMOFOBCINL*>*))((::PBYTE)hIl2Cpp + AODLAALCCNF_LJBBIGBMLLI_OFFSET))(this, a1, a2);
		}

		::System::Void MMAFLBPLHPD(::FBAMAFLOBGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMAFLOBGA*))((::PBYTE)hIl2Cpp + AODLAALCCNF_MMAFLBPLHPD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* LCDHNICFONC(::FOMDMAGLLNI* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FOMDMAGLLNI*))((::PBYTE)hIl2Cpp + AODLAALCCNF_LCDHNICFONC_OFFSET))(this, a1);
		}

	};
