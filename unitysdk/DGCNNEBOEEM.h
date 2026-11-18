#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define DGCNNEBOEEM_EDBBKLIBNJA_OFFSET UNITYSDK_OFFSET(0x19A42430)
#define DGCNNEBOEEM_GIJJPGICCKL_OFFSET UNITYSDK_OFFSET(0x19A42060)
#define DGCNNEBOEEM_GMHLEDHIDDF_OFFSET UNITYSDK_OFFSET(0x19A414C0)
#define DGCNNEBOEEM_OEDKBKPFIOC_OFFSET UNITYSDK_OFFSET(0x19A42580)
#define DGCNNEBOEEM_PHJIAICBDJE_OFFSET UNITYSDK_OFFSET(0x19A42C30)

inline static constexpr unsigned int DGCNNEBOEEM_TypeDefinitionIndex = 63705;

class DGCNNEBOEEM : public ::System::Object
{
public:
	// static const ::System::Single BCOIMMLAPGG; // 0x0

	static ::System::Void GMHLEDHIDDF(::UnityEngine::RectTransform* IAPKABMDJNF, ::UnityEngine::RectTransform* FFLFILBNECF, ::UnityEngine::RectTransform* KFJFIHBHPBD, ::System::Single BMFKPKCKHGE)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + DGCNNEBOEEM_GMHLEDHIDDF_OFFSET))(IAPKABMDJNF, FFLFILBNECF, KFJFIHBHPBD, BMFKPKCKHGE);
	}

	static ::System::Void OEDKBKPFIOC(::UnityEngine::RectTransform* IAPKABMDJNF, ::UnityEngine::RectTransform* BIAEEAMCEMN, ::UnityEngine::RectTransform* MPCPODIAFKC, ::System::Single BMFKPKCKHGE)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + DGCNNEBOEEM_OEDKBKPFIOC_OFFSET))(IAPKABMDJNF, BIAEEAMCEMN, MPCPODIAFKC, BMFKPKCKHGE);
	}

	static ::System::Single EDBBKLIBNJA(::UnityEngine::RectTransform* IAPKABMDJNF, ::UnityEngine::RectTransform* MGOFOAFCFIJ)
	{
		return ((::System::Single(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + DGCNNEBOEEM_EDBBKLIBNJA_OFFSET))(IAPKABMDJNF, MGOFOAFCFIJ);
	}

	static ::System::Void PHJIAICBDJE(::UnityEngine::RectTransform* IAPKABMDJNF, ::UnityEngine::RectTransform* JBDDEIBNIMD, ::UnityEngine::RectTransform* MPCPODIAFKC, ::System::Single BMFKPKCKHGE)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + DGCNNEBOEEM_PHJIAICBDJE_OFFSET))(IAPKABMDJNF, JBDDEIBNIMD, MPCPODIAFKC, BMFKPKCKHGE);
	}

	static ::System::Void GIJJPGICCKL(::UnityEngine::RectTransform* MPCPODIAFKC)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + DGCNNEBOEEM_GIJJPGICCKL_OFFSET))(MPCPODIAFKC);
	}
};
