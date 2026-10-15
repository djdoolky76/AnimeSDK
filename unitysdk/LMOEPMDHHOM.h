#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define LMOEPMDHHOM_GCBIIHKKBBA_OFFSET UNITYSDK_OFFSET(0xB7D2380)

	class LMOEPMDHHOM : public ::System::Object
	{
	public:
		static ::System::Void GCBIIHKKBBA(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + LMOEPMDHHOM_GCBIIHKKBBA_OFFSET))(a1, a2, a3);
		}

	};
