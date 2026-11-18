#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectLoadingTask.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDBDJENIDEO_CHHONDACICG_PAJKPMHHNKP_VISIT_OFFSET UNITYSDK_OFFSET(0x17225A70)
#define EDBDJENIDEO_CHHONDACICG_PAJKPMHHNKP__CTOR_OFFSET UNITYSDK_OFFSET(0x17225A60)

inline static constexpr unsigned int EDBDJENIDEO_CHHONDACICG_PAJKPMHHNKP_TypeDefinitionIndex = 90353;

class EDBDJENIDEO_CHHONDACICG_PAJKPMHHNKP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x10
	::System::Int32 JGKIOBOJOAK; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* HODAIDNDKHD, ::System::Int32 MDKMEMLADPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*, ::System::Int32))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CHHONDACICG_PAJKPMHHNKP__CTOR_OFFSET))(this, HODAIDNDKHD, MDKMEMLADPC);
	}

	::System::Boolean Visit(::Foundation::ViewObject::ViewObjectLoadingTask PLBEAIIJADM)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectLoadingTask))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CHHONDACICG_PAJKPMHHNKP_VISIT_OFFSET))(this, PLBEAIIJADM);
	}
};
