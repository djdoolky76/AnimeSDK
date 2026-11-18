#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KOGPMKOGCLC;
template <typename T> class LJHFMILANJA_1;

#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x194D8160)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x194D8180)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x194D8170)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x194D4840)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_Model_TypeDefinitionIndex = 85889;

	class UITimeWidget_Model : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Boolean>* _IsEnd_k__BackingField; // 0x88

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_IsEnd()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_GET_ISEND_OFFSET))(this);
		}

		::System::Void set_IsEnd(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_SET_ISEND_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
