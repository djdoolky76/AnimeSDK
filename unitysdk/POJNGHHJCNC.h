#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBJKPHOMIME;
class EBCAOIKOEPG;
class ECCFPCCFGNG;
class GDCDKDFCOMF;
class IHCMDBENEEC;
class JJAMLPOHBIH;
class LDPHPNIPBME;
class PMOMFDCLALP;
class POJNGHHJCNC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POJNGHHJCNC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCCA0CF0)
#define POJNGHHJCNC_CTOR_OFFSET UNITYSDK_OFFSET(0xCCA0E50)
#define POJNGHHJCNC_GET_CUSTOMER_OFFSET UNITYSDK_OFFSET(0xCCA0C30)
#define POJNGHHJCNC_GET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xCCA0B90)
#define POJNGHHJCNC_GET_EARNINGITEMS_OFFSET UNITYSDK_OFFSET(0xCCA0BF0)
#define POJNGHHJCNC_GET_EARNINGS_OFFSET UNITYSDK_OFFSET(0xCCA0BB0)
#define POJNGHHJCNC_GET_FINISHORDERID_OFFSET UNITYSDK_OFFSET(0xCCA0CB0)
#define POJNGHHJCNC_GET_LEVELREWARD_OFFSET UNITYSDK_OFFSET(0xCCA0C70)
#define POJNGHHJCNC_GET_PRODUCT_OFFSET UNITYSDK_OFFSET(0xCCA0BD0)
#define POJNGHHJCNC_GET_REVENUE_OFFSET UNITYSDK_OFFSET(0xCCA0C10)
#define POJNGHHJCNC_GET_RUNNINGEXAMID_OFFSET UNITYSDK_OFFSET(0xCCA0C90)
#define POJNGHHJCNC_GET_TALENTEFFECT_OFFSET UNITYSDK_OFFSET(0xCCA0C50)
#define POJNGHHJCNC_GET_UNLOCKMECHIDS_OFFSET UNITYSDK_OFFSET(0xCCA0CD0)
#define POJNGHHJCNC_SET_CUSTOMER_OFFSET UNITYSDK_OFFSET(0xCCA0C40)
#define POJNGHHJCNC_SET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xCCA0BA0)
#define POJNGHHJCNC_SET_EARNINGITEMS_OFFSET UNITYSDK_OFFSET(0xCCA0C00)
#define POJNGHHJCNC_SET_EARNINGS_OFFSET UNITYSDK_OFFSET(0xCCA0BC0)
#define POJNGHHJCNC_SET_FINISHORDERID_OFFSET UNITYSDK_OFFSET(0xCCA0CC0)
#define POJNGHHJCNC_SET_LEVELREWARD_OFFSET UNITYSDK_OFFSET(0xCCA0C80)
#define POJNGHHJCNC_SET_PRODUCT_OFFSET UNITYSDK_OFFSET(0xCCA0BE0)
#define POJNGHHJCNC_SET_REVENUE_OFFSET UNITYSDK_OFFSET(0xCCA0C20)
#define POJNGHHJCNC_SET_RUNNINGEXAMID_OFFSET UNITYSDK_OFFSET(0xCCA0CA0)
#define POJNGHHJCNC_SET_TALENTEFFECT_OFFSET UNITYSDK_OFFSET(0xCCA0C60)
#define POJNGHHJCNC_SET_UNLOCKMECHIDS_OFFSET UNITYSDK_OFFSET(0xCCA0CE0)

inline static constexpr unsigned int POJNGHHJCNC_TypeDefinitionIndex = 82958;

	class POJNGHHJCNC : public ::System::Object
	{
	public:
		::GDCDKDFCOMF* _DesignLevel_k__BackingField; // 0x10
		::PMOMFDCLALP* _TalentEffect_k__BackingField; // 0x18
		::DBJKPHOMIME* _Customer_k__BackingField; // 0x20
		::ECCFPCCFGNG* _Product_k__BackingField; // 0x28
		::EBCAOIKOEPG* _Revenue_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::LDPHPNIPBME*>* _EarningItems_k__BackingField; // 0x38
		::JJAMLPOHBIH* _Earnings_k__BackingField; // 0x40
		::IHCMDBENEEC* _LevelReward_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockMechIDs_k__BackingField; // 0x50
		::System::UInt32 _FinishOrderID_k__BackingField; // 0x58
		::System::UInt32 _RunningExamID_k__BackingField; // 0x5C
		::System::Void _ctor(::GDCDKDFCOMF* a1, ::JJAMLPOHBIH* a2, ::ECCFPCCFGNG* a3, ::System::Collections::Generic::List_1<::LDPHPNIPBME*>* a4, ::EBCAOIKOEPG* a5, ::DBJKPHOMIME* a6, ::PMOMFDCLALP* a7, ::IHCMDBENEEC* a8, ::System::UInt32 a9, ::System::UInt32 a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11)
		{
			return ((::System::Void(*)(::PVOID, ::GDCDKDFCOMF*, ::JJAMLPOHBIH*, ::ECCFPCCFGNG*, ::System::Collections::Generic::List_1<::LDPHPNIPBME*>*, ::EBCAOIKOEPG*, ::DBJKPHOMIME*, ::PMOMFDCLALP*, ::IHCMDBENEEC*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::GDCDKDFCOMF* get_DesignLevel()
		{
			return ((::GDCDKDFCOMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_DESIGNLEVEL_OFFSET))(this);
		}

		::System::Void set_DesignLevel(::GDCDKDFCOMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDCDKDFCOMF*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_DESIGNLEVEL_OFFSET))(this, a1);
		}

		::JJAMLPOHBIH* get_Earnings()
		{
			return ((::JJAMLPOHBIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_EARNINGS_OFFSET))(this);
		}

		::System::Void set_Earnings(::JJAMLPOHBIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJAMLPOHBIH*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_EARNINGS_OFFSET))(this, a1);
		}

		::ECCFPCCFGNG* get_Product()
		{
			return ((::ECCFPCCFGNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_PRODUCT_OFFSET))(this);
		}

		::System::Void set_Product(::ECCFPCCFGNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECCFPCCFGNG*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_PRODUCT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LDPHPNIPBME*>* get_EarningItems()
		{
			return ((::System::Collections::Generic::List_1<::LDPHPNIPBME*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_EARNINGITEMS_OFFSET))(this);
		}

		::System::Void set_EarningItems(::System::Collections::Generic::List_1<::LDPHPNIPBME*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LDPHPNIPBME*>*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_EARNINGITEMS_OFFSET))(this, a1);
		}

		::EBCAOIKOEPG* get_Revenue()
		{
			return ((::EBCAOIKOEPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_REVENUE_OFFSET))(this);
		}

		::System::Void set_Revenue(::EBCAOIKOEPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBCAOIKOEPG*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_REVENUE_OFFSET))(this, a1);
		}

		::DBJKPHOMIME* get_Customer()
		{
			return ((::DBJKPHOMIME*(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_CUSTOMER_OFFSET))(this);
		}

		::System::Void set_Customer(::DBJKPHOMIME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBJKPHOMIME*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_CUSTOMER_OFFSET))(this, a1);
		}

		::PMOMFDCLALP* get_TalentEffect()
		{
			return ((::PMOMFDCLALP*(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_TALENTEFFECT_OFFSET))(this);
		}

		::System::Void set_TalentEffect(::PMOMFDCLALP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMOMFDCLALP*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_TALENTEFFECT_OFFSET))(this, a1);
		}

		::IHCMDBENEEC* get_LevelReward()
		{
			return ((::IHCMDBENEEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_LEVELREWARD_OFFSET))(this);
		}

		::System::Void set_LevelReward(::IHCMDBENEEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHCMDBENEEC*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_LEVELREWARD_OFFSET))(this, a1);
		}

		::System::UInt32 get_RunningExamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_RUNNINGEXAMID_OFFSET))(this);
		}

		::System::Void set_RunningExamID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_RUNNINGEXAMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishOrderID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_FINISHORDERID_OFFSET))(this);
		}

		::System::Void set_FinishOrderID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_FINISHORDERID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockMechIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POJNGHHJCNC_GET_UNLOCKMECHIDS_OFFSET))(this);
		}

		::System::Void set_UnlockMechIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_SET_UNLOCKMECHIDS_OFFSET))(this, a1);
		}

		static ::POJNGHHJCNC* BPLPBPMEODA(::GDCDKDFCOMF* a1, ::JJAMLPOHBIH* a2, ::ECCFPCCFGNG* a3, ::System::Collections::Generic::List_1<::LDPHPNIPBME*>* a4, ::EBCAOIKOEPG* a5, ::DBJKPHOMIME* a6, ::PMOMFDCLALP* a7, ::IHCMDBENEEC* a8, ::System::UInt32 a9, ::System::UInt32 a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11)
		{
			return ((::POJNGHHJCNC*(*)(::GDCDKDFCOMF*, ::JJAMLPOHBIH*, ::ECCFPCCFGNG*, ::System::Collections::Generic::List_1<::LDPHPNIPBME*>*, ::EBCAOIKOEPG*, ::DBJKPHOMIME*, ::PMOMFDCLALP*, ::IHCMDBENEEC*, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + POJNGHHJCNC_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

	};
