#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class E891BA3236FD13E7; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine::Splines { class Spline; }

#define UNITYENGINE_SPLINES_SPLINECONTAINER_E83EAC3ECE14F475_FA126E41771C028B_OFFSET UNITYSDK_OFFSET(0x4050C10)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_E83EAC3ECE14F475__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int SplineContainer_E83EAC3ECE14F475_TypeDefinitionIndex = 20661;

	class SplineContainer_E83EAC3ECE14F475 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* E937D4885DAA1AE8; // 0x10
		::System::Int32 FC300ADBDFF24726; // 0x18
		::System::Byte _padding0[0x4];
		::System::E891BA3236FD13E7<::UnityEngine::Splines::Spline*>* F422651CC4956382; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_E83EAC3ECE14F475__CTOR_OFFSET))(this);
		}

		::System::Boolean FA126E41771C028B(::UnityEngine::Splines::Spline* F03E0BDCBABB08A2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Splines::Spline*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_E83EAC3ECE14F475_FA126E41771C028B_OFFSET))(this, F03E0BDCBABB08A2);
		}
	};
}
