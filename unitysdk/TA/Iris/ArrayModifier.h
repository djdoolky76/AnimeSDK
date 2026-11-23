#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/Iris/ArrayModifier_EEEF0CFCE37DE4A6.h"
#include "unitysdk/TA/Iris/ModifierBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace TA::Iris { class IrisCloud; }
namespace UnityEngine::Splines { class SplineContainer; }

#define TA_IRIS_ARRAYMODIFIER_APPLY_OFFSET UNITYSDK_OFFSET(0x28818A0)
#define TA_IRIS_ARRAYMODIFIER_GENERATEBYFITLENGTH_OFFSET UNITYSDK_OFFSET(0x2881BA0)
#define TA_IRIS_ARRAYMODIFIER_GENERATEBYFITSPLINE_OFFSET UNITYSDK_OFFSET(0x2881DE0)
#define TA_IRIS_ARRAYMODIFIER_GENERATEBYFIXEDCOUNT_OFFSET UNITYSDK_OFFSET(0x2882710)
#define TA_IRIS_ARRAYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x2882980)
#define TA_IRIS_ARRAYMODIFIER___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0x2882920)

namespace TA::Iris
{
	inline static constexpr unsigned int ArrayModifier_TypeDefinitionIndex = 16172;

	class ArrayModifier : public ::TA::Iris::ModifierBase
	{
	public:
		::TA::Iris::ArrayModifier_EEEF0CFCE37DE4A6 fitType; // 0x28
		::System::Int32 count; // 0x2C
		::UnityEngine::Vector3 offset; // 0x30
		::System::Single length; // 0x3C
		::UnityEngine::Vector3 direction; // 0x40
		::System::Byte _padding0[0x4];
		::UnityEngine::Splines::SplineContainer* splines; // 0x50
		::System::Boolean rotateAlongTangent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_ARRAYMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void GenerateByFixedCount(::TA::Iris::IrisCloud*& A5B509ED86E92FBE, ::TA::Iris::IrisCloud*& A5F7DFACA0DB024C)
		{
			return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisCloud*&, ::TA::Iris::IrisCloud*&))((::PBYTE)hIl2Cpp + TA_IRIS_ARRAYMODIFIER_GENERATEBYFIXEDCOUNT_OFFSET))(this, A5B509ED86E92FBE, A5F7DFACA0DB024C);
		}

		::System::Void GenerateByFitLength(::TA::Iris::IrisCloud*& A5B509ED86E92FBE, ::TA::Iris::IrisCloud*& A5F7DFACA0DB024C)
		{
			return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisCloud*&, ::TA::Iris::IrisCloud*&))((::PBYTE)hIl2Cpp + TA_IRIS_ARRAYMODIFIER_GENERATEBYFITLENGTH_OFFSET))(this, A5B509ED86E92FBE, A5F7DFACA0DB024C);
		}

		::System::Void __iFixBaseProxy_Apply(::TA::Iris::IrisCloud*& EF750947C30CE985)
		{
			return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisCloud*&))((::PBYTE)hIl2Cpp + TA_IRIS_ARRAYMODIFIER___IFIXBASEPROXY_APPLY_OFFSET))(this, EF750947C30CE985);
		}

		::System::Void GenerateByFitSpline(::TA::Iris::IrisCloud*& A5B509ED86E92FBE, ::TA::Iris::IrisCloud*& A5F7DFACA0DB024C)
		{
			return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisCloud*&, ::TA::Iris::IrisCloud*&))((::PBYTE)hIl2Cpp + TA_IRIS_ARRAYMODIFIER_GENERATEBYFITSPLINE_OFFSET))(this, A5B509ED86E92FBE, A5F7DFACA0DB024C);
		}

		::System::Void Apply(::TA::Iris::IrisCloud*& B8B0EF9ED37BA7F0)
		{
			return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisCloud*&))((::PBYTE)hIl2Cpp + TA_IRIS_ARRAYMODIFIER_APPLY_OFFSET))(this, B8B0EF9ED37BA7F0);
		}
	};
}
