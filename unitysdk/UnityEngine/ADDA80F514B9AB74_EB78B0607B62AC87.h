#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/E3199C7155F59413.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_ADDA80F514B9AB74_EB78B0607B62AC87_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define UNITYENGINE_ADDA80F514B9AB74_EB78B0607B62AC87__CTOR_OFFSET UNITYSDK_OFFSET(0x4132020)

namespace UnityEngine
{
	inline static constexpr unsigned int ADDA80F514B9AB74_EB78B0607B62AC87_TypeDefinitionIndex = 17171;

	class ADDA80F514B9AB74_EB78B0607B62AC87 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDA80F514B9AB74_EB78B0607B62AC87__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::String* B37E8E89CDAB6CFC, ::System::String* BCDB13E083706FEB, ::UnityEngine::E3199C7155F59413 A288CB28FC2A6DA3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::E3199C7155F59413))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDA80F514B9AB74_EB78B0607B62AC87_INVOKE_OFFSET))(this, B37E8E89CDAB6CFC, BCDB13E083706FEB, A288CB28FC2A6DA3);
		}
	};
}
