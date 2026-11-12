#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGMNKINFKFH.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class COBBDMDECDJ;
class GIDHOABFFFP;
class GJABEBPIGDN;
class KGHMBCLFFLG;
class NNOALJAEMCG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEPOBPNLIAO_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x16BAB1D0)
#define HEPOBPNLIAO_APICMFHMIOA_OFFSET UNITYSDK_OFFSET(0x16BA9450)
#define HEPOBPNLIAO_CHCFDCFDOFI_OFFSET UNITYSDK_OFFSET(0x16BAA450)
#define HEPOBPNLIAO_CHOLNJIJACF_OFFSET UNITYSDK_OFFSET(0x16BAABD0)
#define HEPOBPNLIAO_CTOR_OFFSET UNITYSDK_OFFSET(0x16BAB450)
#define HEPOBPNLIAO_DIFLDJAGOND_OFFSET UNITYSDK_OFFSET(0x16BAAAE0)
#define HEPOBPNLIAO_FIDCOLPDHJI_OFFSET UNITYSDK_OFFSET(0x16BAA500)
#define HEPOBPNLIAO_GIBOFKOHOOK_OFFSET UNITYSDK_OFFSET(0x16BAA620)
#define HEPOBPNLIAO_IBEFINODNAD_OFFSET UNITYSDK_OFFSET(0x16BAA3E0)
#define HEPOBPNLIAO_INCBLLFLMMI_OFFSET UNITYSDK_OFFSET(0x16BAAC90)
#define HEPOBPNLIAO_JIDJAHOBEBG_OFFSET UNITYSDK_OFFSET(0x16BAB130)
#define HEPOBPNLIAO_KBOKKGIMPMH_OFFSET UNITYSDK_OFFSET(0x16BAA340)
#define HEPOBPNLIAO_KHCLLCMAGIO_OFFSET UNITYSDK_OFFSET(0x16BAA4B0)
#define HEPOBPNLIAO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16BA9580)
#define HEPOBPNLIAO_KIOFPFLNCKM_OFFSET UNITYSDK_OFFSET(0x16BAAB80)
#define HEPOBPNLIAO_MFKGHGDGLAP_OFFSET UNITYSDK_OFFSET(0x16BA96B0)
#define HEPOBPNLIAO_OKHAKGCOJCP_OFFSET UNITYSDK_OFFSET(0x16BAA390)
#define HEPOBPNLIAO_PEDMOABIHNI_OFFSET UNITYSDK_OFFSET(0x16BAA550)
#define HEPOBPNLIAO_PGGNAKNBEOB_OFFSET UNITYSDK_OFFSET(0x16BA0310)

inline static constexpr unsigned int HEPOBPNLIAO_TypeDefinitionIndex = 64134;

	class HEPOBPNLIAO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::KFBOFAILIBG>* HOIIJPHKMNK; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>* IIGEFGEKKCH; // 0x18
		::System::Collections::Generic::List_1<::DGMNKINFKFH>* OBOKADNFHIE; // 0x20
		::GJABEBPIGDN* EGMKPBBMFCD; // 0x28
		::System::UInt32 DLILEAOJJMB; // 0x30
		::System::UInt32 OCFAKKNPBOJ; // 0x34
		::System::UInt32 GPIENJKOJJM; // 0x38
		::System::UInt32 IACHHFMCKMC; // 0x3C
		::System::UInt32 MPPKIIELGBC; // 0x40
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

		::GIDHOABFFFP* IBEFINODNAD(::System::Collections::Generic::IEnumerable_1<::DGMNKINFKFH>* a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::DGMNKINFKFH>*))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_IBEFINODNAD_OFFSET))(this, a1);
		}

		::GIDHOABFFFP* CHCFDCFDOFI()
		{
			return ((::GIDHOABFFFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_CHCFDCFDOFI_OFFSET))(this);
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

		::GIDHOABFFFP* GIBOFKOHOOK(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>* a1)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>*))((::PBYTE)hIl2Cpp + HEPOBPNLIAO_GIBOFKOHOOK_OFFSET))(this, a1);
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
