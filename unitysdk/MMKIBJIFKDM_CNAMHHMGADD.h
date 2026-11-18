#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MMKIBJIFKDM;
class MonoUITableScrollV2_InitScrollViewData;
namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class RectTransform; }

#define MMKIBJIFKDM_CNAMHHMGADD_BIALHNAOJFE_OFFSET UNITYSDK_OFFSET(0x1A69E6B0)
#define MMKIBJIFKDM_CNAMHHMGADD_CFENLKANILF_OFFSET UNITYSDK_OFFSET(0x1A69E7F0)
#define MMKIBJIFKDM_CNAMHHMGADD_DKBNILCFHKF_OFFSET UNITYSDK_OFFSET(0x1A69E760)
#define MMKIBJIFKDM_CNAMHHMGADD_EDMJJNFFBIB_OFFSET UNITYSDK_OFFSET(0x1A69E9C0)
#define MMKIBJIFKDM_CNAMHHMGADD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69E6A0)

inline static constexpr unsigned int MMKIBJIFKDM_CNAMHHMGADD_TypeDefinitionIndex = 53937;

class MMKIBJIFKDM_CNAMHHMGADD : public ::System::Object
{
public:
	::UnityEngine::RectTransform* NDCNIKAGHPA; // 0x10
	::MMKIBJIFKDM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_CNAMHHMGADD__CTOR_OFFSET))(this);
	}

	::System::Void BIALHNAOJFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_CNAMHHMGADD_BIALHNAOJFE_OFFSET))(this);
	}

	::System::Int32 DKBNILCFHKF(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_CNAMHHMGADD_DKBNILCFHKF_OFFSET))(this, HBJOLKHGGDD);
	}

	::System::Collections::IEnumerable* CFENLKANILF()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_CNAMHHMGADD_CFENLKANILF_OFFSET))(this);
	}

	::MonoUITableScrollV2_InitScrollViewData* EDMJJNFFBIB()
	{
		return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_CNAMHHMGADD_EDMJJNFFBIB_OFFSET))(this);
	}
};
