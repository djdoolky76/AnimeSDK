#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/System/ValueTuple_2.h"

class AEMACNJMPBP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class LJHFMILANJA_1;

#define AFKMHKBGFDC_AOHLIKBCDFL_OFFSET UNITYSDK_OFFSET(0x134BCFB0)
#define AFKMHKBGFDC_DGONCNOAKFG_OFFSET UNITYSDK_OFFSET(0x134BCE10)
#define AFKMHKBGFDC_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x134BCC80)
#define AFKMHKBGFDC_OOMIDEOBOLK_OFFSET UNITYSDK_OFFSET(0x134BD4B0)
#define AFKMHKBGFDC_PAFGFGJANMJ_OFFSET UNITYSDK_OFFSET(0x134BD1F0)
#define AFKMHKBGFDC__CTOR_OFFSET UNITYSDK_OFFSET(0x134BCD00)

inline static constexpr unsigned int AFKMHKBGFDC_TypeDefinitionIndex = 60317;

class AFKMHKBGFDC : public ::JJEJBPGJPJN
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* DIEPMBLJMNF; // 0x88
	::System::Collections::Generic::List_1<::System::UInt32>* PJFNEGCHBFP; // 0x90
	::LJHFMILANJA_1<::System::Boolean>* GBCAFAKDKJF; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AEMACNJMPBP*>* OEOALMCOLNO; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKMHKBGFDC__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKMHKBGFDC_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void DGONCNOAKFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKMHKBGFDC_DGONCNOAKFG_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> AOHLIKBCDFL(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFKMHKBGFDC_AOHLIKBCDFL_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Collections::Generic::List_1<::AEMACNJMPBP*>* PAFGFGJANMJ(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Collections::Generic::List_1<::AEMACNJMPBP*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFKMHKBGFDC_PAFGFGJANMJ_OFFSET))(this, MOBNMDEDJIP);
	}

	::AEMACNJMPBP* OOMIDEOBOLK(::System::Int32 KCJHDEGPBNI)
	{
		return ((::AEMACNJMPBP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFKMHKBGFDC_OOMIDEOBOLK_OFFSET))(this, KCJHDEGPBNI);
	}
};
