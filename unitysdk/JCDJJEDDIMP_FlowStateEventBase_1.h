#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

inline static constexpr unsigned int JCDJJEDDIMP_FlowStateEventBase_1_TypeDefinitionIndex = 66107;

	template <typename T>
	class JCDJJEDDIMP_FlowStateEventBase_1 : public ::System::Object
	{
	public:
		static T* StaticGet__Instance()
		{
			return (T*)UnitySDK::FromName("", "FlowStateEventBase`1")->GetStaticField(0x0);
		}

	};
