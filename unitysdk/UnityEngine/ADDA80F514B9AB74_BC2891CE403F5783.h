#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/E1E80627D89AD4F3.h"

namespace System { class Object; }

#define UNITYENGINE_ADDA80F514B9AB74_BC2891CE403F5783_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_ADDA80F514B9AB74_BC2891CE403F5783__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ADDA80F514B9AB74_BC2891CE403F5783_TypeDefinitionIndex = 17170;

	class ADDA80F514B9AB74_BC2891CE403F5783 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDA80F514B9AB74_BC2891CE403F5783__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::E1E80627D89AD4F3& E8074BBF0ADF3A7B)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E1E80627D89AD4F3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDA80F514B9AB74_BC2891CE403F5783_INVOKE_OFFSET))(this, E8074BBF0ADF3A7B);
		}
	};
}
