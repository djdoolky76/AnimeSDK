#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Splines { class SplineContainer; }

#define ABC_TECHART_ABCROADSPLINEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x286AE50)
#define ABC_TECHART_ABCROADSPLINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x286B600)

namespace ABC::TechArt
{
	inline static constexpr unsigned int ABCRoadSplineData_TypeDefinitionIndex = 16126;

	class ABCRoadSplineData : public ::System::Object
	{
	public:
		::System::String* splineName; // 0x10
		::System::Int32 splineCount; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* pointCount; // 0x20
		::System::Collections::Generic::List_1<::System::Boolean>* isClosed; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* pointRoadWidthList; // 0x38

		::System::Void _ctor(::UnityEngine::Splines::SplineContainer* F03E0BDCBABB08A2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::SplineContainer*))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADSPLINEDATA__CTOR_OFFSET))(this, F03E0BDCBABB08A2);
		}

		::System::Boolean Init(::UnityEngine::Splines::SplineContainer* EF7FDF97A4E149AB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Splines::SplineContainer*))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADSPLINEDATA_INIT_OFFSET))(this, EF7FDF97A4E149AB);
		}
	};
}
