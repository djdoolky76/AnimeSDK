#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_LAYERRATINGTHRESHOLDVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A087C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_LAYERRATINGTHRESHOLDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A087D70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHadal_LayerRatingThresholdValue_TypeDefinitionIndex = 60359;

	class LDHadal_LayerRatingThresholdValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_LAYERRATINGTHRESHOLDVALUE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::Level::RatingType ratingType)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_LAYERRATINGTHRESHOLDVALUE_INVOKE_OFFSET))(this, ratingType);
		}
	};
}
