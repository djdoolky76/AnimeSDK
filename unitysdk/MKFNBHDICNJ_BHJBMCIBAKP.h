#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class MKFNBHDICNJ;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFNBHDICNJ_BHJBMCIBAKP_GHIDGFNPLPO_OFFSET UNITYSDK_OFFSET(0x12D90B10)
#define MKFNBHDICNJ_BHJBMCIBAKP_LELKDGOHJKP_OFFSET UNITYSDK_OFFSET(0x12D90880)
#define MKFNBHDICNJ_BHJBMCIBAKP_MMGFLDKLCPI_OFFSET UNITYSDK_OFFSET(0x12D90850)
#define MKFNBHDICNJ_BHJBMCIBAKP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D90840)

inline static constexpr unsigned int MKFNBHDICNJ_BHJBMCIBAKP_TypeDefinitionIndex = 61339;

class MKFNBHDICNJ_BHJBMCIBAKP : public ::System::Object
{
public:
	::System::Func_2<::FBHPDPBIGPK*, ::System::Boolean>* DLMJCFBENGB; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18
	::System::Action* EDNJGMKPFHG; // 0x20
	::System::Action_1<::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*>* FFMGICPLKFB; // 0x28
	::System::UInt32 FJLIILLCBCE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BHJBMCIBAKP__CTOR_OFFSET))(this);
	}

	::System::Boolean MMGFLDKLCPI(::FBHPDPBIGPK* PMLAACAFPDO)
	{
		return ((::System::Boolean(*)(::PVOID, ::FBHPDPBIGPK*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BHJBMCIBAKP_MMGFLDKLCPI_OFFSET))(this, PMLAACAFPDO);
	}

	::System::Void LELKDGOHJKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BHJBMCIBAKP_LELKDGOHJKP_OFFSET))(this);
	}

	::System::Void GHIDGFNPLPO(::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BHJBMCIBAKP_GHIDGFNPLPO_OFFSET))(this, PIIPCLCCOIG);
	}
};
