#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
class KFGCLOPEGJO_JBMFPOPNLPP;
namespace System { class String; }
namespace UnityEngine::UI::Extension { class ITabButtonGroup; }

#define KFGCLOPEGJO_HKFNAAPGIJK_ECPKOACNHKK_OFFSET UNITYSDK_OFFSET(0x15B87BC0)
#define KFGCLOPEGJO_HKFNAAPGIJK_GPAICHLOOJB_OFFSET UNITYSDK_OFFSET(0x15B87AE0)
#define KFGCLOPEGJO_HKFNAAPGIJK_MPHNDAPJLNO_OFFSET UNITYSDK_OFFSET(0x15B87B50)
#define KFGCLOPEGJO_HKFNAAPGIJK_OJLPIOOMICK_OFFSET UNITYSDK_OFFSET(0x15B87D70)
#define KFGCLOPEGJO_HKFNAAPGIJK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B87AD0)

inline static constexpr unsigned int KFGCLOPEGJO_HKFNAAPGIJK_TypeDefinitionIndex = 78952;

class KFGCLOPEGJO_HKFNAAPGIJK : public ::System::Object
{
public:
	::KFGCLOPEGJO_JBMFPOPNLPP* EEMOEMFLABI; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HKFNAAPGIJK__CTOR_OFFSET))(this);
	}

	::System::Boolean GPAICHLOOJB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HKFNAAPGIJK_GPAICHLOOJB_OFFSET))(this);
	}

	::System::String* MPHNDAPJLNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HKFNAAPGIJK_MPHNDAPJLNO_OFFSET))(this);
	}

	::System::Void ECPKOACNHKK(::UnityEngine::UI::Extension::ITabButtonGroup* CBLGCIFLMKL, ::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ITabButtonGroup*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HKFNAAPGIJK_ECPKOACNHKK_OFFSET))(this, CBLGCIFLMKL, HFMHOELKCAJ);
	}

	::IBENDELLLAO* OJLPIOOMICK()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HKFNAAPGIJK_OJLPIOOMICK_OFFSET))(this);
	}
};
