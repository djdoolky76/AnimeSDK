#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMADJLNOLLP;
class FACPIGKNMLI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IDOLCJGLMKP_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x15BFE770)
#define IDOLCJGLMKP_DPBDCOJKKPB_OFFSET UNITYSDK_OFFSET(0x15BFEA90)
#define IDOLCJGLMKP_IGCHPGKFGJH_OFFSET UNITYSDK_OFFSET(0x15BFE7B0)
#define IDOLCJGLMKP_INOKFEPEEDJ_OFFSET UNITYSDK_OFFSET(0x15BFE670)
#define IDOLCJGLMKP_JBCCKBDHPOO_OFFSET UNITYSDK_OFFSET(0x15BFF610)
#define IDOLCJGLMKP_KEMNCHPABMJ_OFFSET UNITYSDK_OFFSET(0x15BFEA80)
#define IDOLCJGLMKP_LBNAMNHJDBC_1_OFFSET UNITYSDK_OFFSET(0x15BFE9D0)
#define IDOLCJGLMKP_LBNAMNHJDBC_OFFSET UNITYSDK_OFFSET(0x15BFE970)
#define IDOLCJGLMKP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15BFF620)
#define IDOLCJGLMKP__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFE570)

inline static constexpr unsigned int IDOLCJGLMKP_TypeDefinitionIndex = 40015;

class IDOLCJGLMKP : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* COKIPMBMMKE; // 0x10
	::System::Collections::Generic::Dictionary_2<::FACPIGKNMLI*, ::System::Int32>* PBKLDEDHJBK; // 0x18
	::BMADJLNOLLP* _CCPDHANFDHD_k__BackingField; // 0x20

	::System::Void _ctor(::BMADJLNOLLP* FLJBALGNBCN)
	{
		return ((::System::Void(*)(::PVOID, ::BMADJLNOLLP*))((::PBYTE)hIl2Cpp + IDOLCJGLMKP__CTOR_OFFSET))(this, FLJBALGNBCN);
	}

	::System::Void INOKFEPEEDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOLCJGLMKP_INOKFEPEEDJ_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOLCJGLMKP_DFJPMOOOLHM_OFFSET))(this);
	}

	::System::Void IGCHPGKFGJH(::System::Boolean AACACKINAFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDOLCJGLMKP_IGCHPGKFGJH_OFFSET))(this, AACACKINAFJ);
	}

	::System::Void LBNAMNHJDBC(::System::Int32 PLBMCLKBNDE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDOLCJGLMKP_LBNAMNHJDBC_OFFSET))(this, PLBMCLKBNDE);
	}

	::System::Void LBNAMNHJDBC_1(::Il2CppArray<::System::Int32>* LDLKPEHIMMD)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + IDOLCJGLMKP_LBNAMNHJDBC_1_OFFSET))(this, LDLKPEHIMMD);
	}

	::BMADJLNOLLP* KEMNCHPABMJ()
	{
		return ((::BMADJLNOLLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOLCJGLMKP_KEMNCHPABMJ_OFFSET))(this);
	}

	::System::Void DPBDCOJKKPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOLCJGLMKP_DPBDCOJKKPB_OFFSET))(this);
	}

	::System::Void JBCCKBDHPOO(::BMADJLNOLLP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BMADJLNOLLP*))((::PBYTE)hIl2Cpp + IDOLCJGLMKP_JBCCKBDHPOO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOLCJGLMKP_OKJCHFGIKBH_OFFSET))(this);
	}
};
