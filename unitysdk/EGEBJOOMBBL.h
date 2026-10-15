#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLEFGGIHGMI_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEBHBAOHHII.h"
#include "unitysdk/GLAJJDPBHLL.h"

#define EGEBJOOMBBL_EPLEGCOPIKB_OFFSET UNITYSDK_OFFSET(0x13A648E0)
#define EGEBJOOMBBL_LHECAAHOKCL_1_OFFSET UNITYSDK_OFFSET(0x13A649B0)
#define EGEBJOOMBBL_LHECAAHOKCL_OFFSET UNITYSDK_OFFSET(0x13A647B0)
#define EGEBJOOMBBL_MGNALFFKEMM_OFFSET UNITYSDK_OFFSET(0x13A64C30)
#define EGEBJOOMBBL_NNHLMFFCNLO_OFFSET UNITYSDK_OFFSET(0x13A64890)
#define EGEBJOOMBBL_PCKCPPGNLHG_1_OFFSET UNITYSDK_OFFSET(0x13A64B10)
#define EGEBJOOMBBL_PCKCPPGNLHG_OFFSET UNITYSDK_OFFSET(0x13A64A80)

inline static constexpr unsigned int EGEBJOOMBBL_TypeDefinitionIndex = 62160;

	class EGEBJOOMBBL : public ::System::Object
	{
	public:
		static ::DEBHBAOHHII LHECAAHOKCL(::GLAJJDPBHLL a1, ::System::Boolean a2, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a3)
		{
			return ((::DEBHBAOHHII(*)(::GLAJJDPBHLL, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + EGEBJOOMBBL_LHECAAHOKCL_OFFSET))(a1, a2, a3);
		}

		static ::DEBHBAOHHII EPLEGCOPIKB(::GLAJJDPBHLL a1, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a2)
		{
			return ((::DEBHBAOHHII(*)(::GLAJJDPBHLL, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + EGEBJOOMBBL_EPLEGCOPIKB_OFFSET))(a1, a2);
		}

		static ::DEBHBAOHHII LHECAAHOKCL_1(::RPG::GameCore::StageRegionVisualState a1, ::System::Boolean a2, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a3)
		{
			return ((::DEBHBAOHHII(*)(::RPG::GameCore::StageRegionVisualState, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + EGEBJOOMBBL_LHECAAHOKCL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean NNHLMFFCNLO(::GLAJJDPBHLL a1)
		{
			return ((::System::Boolean(*)(::GLAJJDPBHLL))((::PBYTE)hIl2Cpp + EGEBJOOMBBL_NNHLMFFCNLO_OFFSET))(a1);
		}

		static ::DEBHBAOHHII PCKCPPGNLHG(::GLAJJDPBHLL a1, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a2)
		{
			return ((::DEBHBAOHHII(*)(::GLAJJDPBHLL, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + EGEBJOOMBBL_PCKCPPGNLHG_OFFSET))(a1, a2);
		}

		static ::DEBHBAOHHII PCKCPPGNLHG_1(::RPG::GameCore::StageRegionVisualState a1, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a2)
		{
			return ((::DEBHBAOHHII(*)(::RPG::GameCore::StageRegionVisualState, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + EGEBJOOMBBL_PCKCPPGNLHG_1_OFFSET))(a1, a2);
		}

		static ::DEBHBAOHHII MGNALFFKEMM(::RPG::GameCore::RegionBlockVisibilityStatus a1, ::System::Boolean a2)
		{
			return ((::DEBHBAOHHII(*)(::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + EGEBJOOMBBL_MGNALFFKEMM_OFFSET))(a1, a2);
		}

	};
