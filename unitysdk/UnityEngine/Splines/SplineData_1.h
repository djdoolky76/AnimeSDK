#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFE47AD60EB94A25/EA496B15A6646DD9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Splines/DataPoint_1.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class A6BC082CF46A1D17;

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int SplineData_1_TypeDefinitionIndex = 20625;

	template <typename T>
	class SplineData_1 : public ::System::Object
	{
	public:
		static ::A6BC082CF46A1D17<::UnityEngine::Splines::DataPoint_1<T>>** StaticGet_k_DataPointComparer()
		{
			return (::A6BC082CF46A1D17<::UnityEngine::Splines::DataPoint_1<T>>**)Il2CppClass::FromTypeDefinitionIndex(SplineData_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::BFE47AD60EB94A25::EA496B15A6646DD9 m_IndexUnit; // 0x0
		T m_DefaultValue; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Splines::DataPoint_1<T>>* m_DataPoints; // 0x0
		::System::Boolean m_NeedsSort; // 0x0
		::System::Action* changed; // 0x0
		::System::Action* Changed; // 0x0
	};
}
