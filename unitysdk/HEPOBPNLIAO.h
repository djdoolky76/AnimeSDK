#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class COBBDMDECDJ;
class GIDHOABFFFP;
class GJABEBPIGDN;
class KGHMBCLFFLG;
class NNOALJAEMCG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HEPOBPNLIAO_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x15C66C60)
#define HEPOBPNLIAO_APICMFHMIOA_OFFSET UNITYSDK_OFFSET(0x15C65000)
#define HEPOBPNLIAO_CHOLNJIJACF_OFFSET UNITYSDK_OFFSET(0x15C66660)
#define HEPOBPNLIAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C66EA0)
#define HEPOBPNLIAO_DIFLDJAGOND_OFFSET UNITYSDK_OFFSET(0x15C66570)
#define HEPOBPNLIAO_FIDCOLPDHJI_OFFSET UNITYSDK_OFFSET(0x15C65F90)
#define HEPOBPNLIAO_GIBOFKOHOOK_OFFSET UNITYSDK_OFFSET(0x15C660B0)
#define HEPOBPNLIAO_INCBLLFLMMI_OFFSET UNITYSDK_OFFSET(0x15C66720)
#define HEPOBPNLIAO_JIDJAHOBEBG_OFFSET UNITYSDK_OFFSET(0x15C66BC0)
#define HEPOBPNLIAO_KBOKKGIMPMH_OFFSET UNITYSDK_OFFSET(0x15C65EA0)
#define HEPOBPNLIAO_KHCLLCMAGIO_OFFSET UNITYSDK_OFFSET(0x15C65F40)
#define HEPOBPNLIAO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15C65130)
#define HEPOBPNLIAO_KIOFPFLNCKM_OFFSET UNITYSDK_OFFSET(0x15C66610)
#define HEPOBPNLIAO_MFKGHGDGLAP_OFFSET UNITYSDK_OFFSET(0x15C65240)
#define HEPOBPNLIAO_OKHAKGCOJCP_OFFSET UNITYSDK_OFFSET(0x15C65EF0)
#define HEPOBPNLIAO_PEDMOABIHNI_OFFSET UNITYSDK_OFFSET(0x15C65FE0)
#define HEPOBPNLIAO_PGGNAKNBEOB_OFFSET UNITYSDK_OFFSET(0x15C5B8B0)

inline static constexpr unsigned int HEPOBPNLIAO_TypeDefinitionIndex = 62700;

	class HEPOBPNLIAO : public ::System::Object
	{
	public:
		::GJABEBPIGDN* EGMKPBBMFCD; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>* HOIIJPHKMNK; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>* IIGEFGEKKCH; // 0x20
		::System::UInt32 GPIENJKOJJM; // 0x28
		::System::UInt32 DLILEAOJJMB; // 0x2C
		::System::UInt32 IACHHFMCKMC; // 0x30
		::System::UInt32 MPPKIIELGBC; // 0x34
		::System::UInt32 OCFAKKNPBOJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_CTOR_OFFSET))(this);
		}

		::GIDHOABFFFP* APICMFHMIOA(::COBBDMDECDJ* a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::COBBDMDECDJ*))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_APICMFHMIOA_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* MFKGHGDGLAP(::NNOALJAEMCG* a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_MFKGHGDGLAP_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* PGGNAKNBEOB(::System::UInt32 a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_PGGNAKNBEOB_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* KBOKKGIMPMH(::System::UInt32 a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_KBOKKGIMPMH_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* OKHAKGCOJCP(::System::UInt32 a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_OKHAKGCOJCP_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* KHCLLCMAGIO(::System::UInt32 a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_KHCLLCMAGIO_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* FIDCOLPDHJI(::System::UInt32 a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_FIDCOLPDHJI_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* PEDMOABIHNI(::RPG::GameCore::RelicType a1, ::KGHMBCLFFLG* a2)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::RPG::GameCore::RelicType, ::KGHMBCLFFLG*))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_PEDMOABIHNI_OFFSET))(this, a1, a2);
		}

		::GIDHOABFFFP* GIBOFKOHOOK(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple>* a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple>*))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_GIBOFKOHOOK_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* DIFLDJAGOND()
		{
			return ((::GIDHOABFFFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_DIFLDJAGOND_OFFSET))(this);
		}

		::GIDHOABFFFP* KIOFPFLNCKM(::GJABEBPIGDN* a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::GJABEBPIGDN*))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_KIOFPFLNCKM_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* CHOLNJIJACF(::KFBOFAILIBG a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::KFBOFAILIBG))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_CHOLNJIJACF_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* INCBLLFLMMI(::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>* a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>*))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_INCBLLFLMMI_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* JIDJAHOBEBG()
		{
			return ((::GIDHOABFFFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_JIDJAHOBEBG_OFFSET))(this);
		}

		::GIDHOABFFFP* KHGIKBFDLFB()
		{
			return ((::GIDHOABFFFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_KHGIKBFDLFB_OFFSET))(this);
		}

		::NNOALJAEMCG* AKJABINEGDJ()
		{
			return ((::NNOALJAEMCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_AKJABINEGDJ_OFFSET))(this);
		}

	};
