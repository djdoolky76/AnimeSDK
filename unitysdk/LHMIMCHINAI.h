#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ONBNJIHCGCE.h"

class EFNFAOBLNAE;
class MLDFDEOGGPF;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define LHMIMCHINAI_EFOKKDFKELM_OFFSET UNITYSDK_OFFSET(0x1518AA50)
#define LHMIMCHINAI_HNLEINPJELG_OFFSET UNITYSDK_OFFSET(0x1518AD10)
#define LHMIMCHINAI_IGKMGKLCPGB_OFFSET UNITYSDK_OFFSET(0x1518A960)
#define LHMIMCHINAI_LKLGPBCIOEE_OFFSET UNITYSDK_OFFSET(0x1518A890)
#define LHMIMCHINAI_OACLLLHCALH_OFFSET UNITYSDK_OFFSET(0x1518AFE0)
#define LHMIMCHINAI_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1518ADD0)
#define LHMIMCHINAI_PJFPEPHIEGE_OFFSET UNITYSDK_OFFSET(0x1518AB10)
#define LHMIMCHINAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1518B0B0)

inline static constexpr unsigned int LHMIMCHINAI_TypeDefinitionIndex = 77088;

class LHMIMCHINAI : public ::System::Object
{
public:
	::System::Collections::Generic::LinkedList_1<::MLDFDEOGGPF*>* EGHDDBNDFAN; // 0x10
	::System::Single EPPCCEEAHLN; // 0x18
	::System::Int32 GCMEBAIINGO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMIMCHINAI__CTOR_OFFSET))(this);
	}

	::EFNFAOBLNAE* LKLGPBCIOEE(::System::Single HCOJLFECINK)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHMIMCHINAI_LKLGPBCIOEE_OFFSET))(this, HCOJLFECINK);
	}

	::EFNFAOBLNAE* EFOKKDFKELM(::System::Func_2<::ONBNJIHCGCE, ::System::Boolean>* KPDNJEDICCM)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Func_2<::ONBNJIHCGCE, ::System::Boolean>*))((::PBYTE)hIl2Cpp + LHMIMCHINAI_EFOKKDFKELM_OFFSET))(this, KPDNJEDICCM);
	}

	::EFNFAOBLNAE* IGKMGKLCPGB(::System::Func_2<::ONBNJIHCGCE, ::System::Boolean>* KPDNJEDICCM)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::System::Func_2<::ONBNJIHCGCE, ::System::Boolean>*))((::PBYTE)hIl2Cpp + LHMIMCHINAI_IGKMGKLCPGB_OFFSET))(this, KPDNJEDICCM);
	}

	::System::Boolean PJFPEPHIEGE(::EFNFAOBLNAE* LGBLDAMKBPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::EFNFAOBLNAE*))((::PBYTE)hIl2Cpp + LHMIMCHINAI_PJFPEPHIEGE_OFFSET))(this, LGBLDAMKBPM);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHMIMCHINAI_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Collections::Generic::LinkedListNode_1<::MLDFDEOGGPF*>* OACLLLHCALH(::System::Collections::Generic::LinkedListNode_1<::MLDFDEOGGPF*>* HHIJHDFHPOI)
	{
		return ((::System::Collections::Generic::LinkedListNode_1<::MLDFDEOGGPF*>*(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::MLDFDEOGGPF*>*))((::PBYTE)hIl2Cpp + LHMIMCHINAI_OACLLLHCALH_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Collections::Generic::LinkedListNode_1<::MLDFDEOGGPF*>* HNLEINPJELG(::EFNFAOBLNAE* LGBLDAMKBPM)
	{
		return ((::System::Collections::Generic::LinkedListNode_1<::MLDFDEOGGPF*>*(*)(::PVOID, ::EFNFAOBLNAE*))((::PBYTE)hIl2Cpp + LHMIMCHINAI_HNLEINPJELG_OFFSET))(this, LGBLDAMKBPM);
	}
};
