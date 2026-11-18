#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceComposite_5___c__13_6_TypeDefinitionIndex = 36468;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class CameraSequenceComposite_5___c__13_6 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5___c__13_6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T1, ::System::Collections::Generic::IEnumerable_1<T2>*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<T1, ::System::Collections::Generic::IEnumerable_1<T2>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceComposite_5___c__13_6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
