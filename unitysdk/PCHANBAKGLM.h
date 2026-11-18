#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCFHEIFLHEN.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCHANBAKGLM_APIBHMBEPDJ_OFFSET UNITYSDK_OFFSET(0x1AFD6930)
#define PCHANBAKGLM_EAOLNJKONOB_OFFSET UNITYSDK_OFFSET(0x1AFD6A00)
#define PCHANBAKGLM_GGPLJHKJKNL_OFFSET UNITYSDK_OFFSET(0x1AFD6920)
#define PCHANBAKGLM_ILIPDNDMPPH_OFFSET UNITYSDK_OFFSET(0x1AFD69A0)
#define PCHANBAKGLM_JBBIKKIDJCI_OFFSET UNITYSDK_OFFSET(0x1AFD6910)
#define PCHANBAKGLM_JHJFMDKNOLD_OFFSET UNITYSDK_OFFSET(0x1AFD6A20)
#define PCHANBAKGLM_NIGIINOECBO_OFFSET UNITYSDK_OFFSET(0x1AFD6A10)
#define PCHANBAKGLM_NJMPIIMEKDH_OFFSET UNITYSDK_OFFSET(0x1AFD6A30)
#define PCHANBAKGLM_NPFADBMMIOA_OFFSET UNITYSDK_OFFSET(0x1AFD6900)
#define PCHANBAKGLM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6880)

inline static constexpr unsigned int PCHANBAKGLM_TypeDefinitionIndex = 53658;

class PCHANBAKGLM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MCFHEIFLHEN>* _IGGKEOABAJK_k__BackingField; // 0x10
	::System::Int32 _JLGNHEAGDLG_k__BackingField; // 0x18
	::System::Int32 _HIPHJIDLADB_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Int32 JLOMLLEDCNO, ::System::Collections::Generic::List_1<::MCFHEIFLHEN>* MNJKGKDANJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MCFHEIFLHEN>*))((::PBYTE)hIl2Cpp + PCHANBAKGLM__CTOR_OFFSET))(this, JLOMLLEDCNO, MNJKGKDANJM);
	}

	::System::Int32 NPFADBMMIOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHANBAKGLM_NPFADBMMIOA_OFFSET))(this);
	}

	::System::Void JBBIKKIDJCI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCHANBAKGLM_JBBIKKIDJCI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GGPLJHKJKNL(::System::Collections::Generic::List_1<::MCFHEIFLHEN>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MCFHEIFLHEN>*))((::PBYTE)hIl2Cpp + PCHANBAKGLM_GGPLJHKJKNL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean APIBHMBEPDJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCHANBAKGLM_APIBHMBEPDJ_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Boolean ILIPDNDMPPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHANBAKGLM_ILIPDNDMPPH_OFFSET))(this);
	}

	::System::Void EAOLNJKONOB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCHANBAKGLM_EAOLNJKONOB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NIGIINOECBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHANBAKGLM_NIGIINOECBO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MCFHEIFLHEN>* JHJFMDKNOLD()
	{
		return ((::System::Collections::Generic::List_1<::MCFHEIFLHEN>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHANBAKGLM_JHJFMDKNOLD_OFFSET))(this);
	}

	::MCFHEIFLHEN NJMPIIMEKDH()
	{
		return ((::MCFHEIFLHEN(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHANBAKGLM_NJMPIIMEKDH_OFFSET))(this);
	}
};
