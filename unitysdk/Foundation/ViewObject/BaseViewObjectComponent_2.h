#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFlags.h"
#include "unitysdk/MCKCKBEGCCM.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject { template <typename T> class ViewObjectBase_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int BaseViewObjectComponent_2_TypeDefinitionIndex = 76709;

	template <typename T1, typename T2>
	class BaseViewObjectComponent_2 : public ::System::Object
	{
	public:
		static ::MCKCKBEGCCM* StaticGet__ReceiveEventMask()
		{
			return (::MCKCKBEGCCM*)Il2CppClass::FromTypeDefinitionIndex(BaseViewObjectComponent_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 _RecycleVersion_k__BackingField; // 0x0
		::Foundation::ViewObject::EViewObjectComponentFlags flags; // 0x0
		::System::Boolean _enable; // 0x0
		::Foundation::ViewObject::ViewObjectBase_1<T1>* _owner; // 0x0
	};
}
