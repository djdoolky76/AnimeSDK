#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define A418C49FA6A8C1F7_EB91BB1407406B2F_INVOKE_OFFSET UNITYSDK_OFFSET(0x374AC80)
#define A418C49FA6A8C1F7_EB91BB1407406B2F__CTOR_OFFSET UNITYSDK_OFFSET(0x42E7EA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int EB91BB1407406B2F_TypeDefinitionIndex = 13358;

	class EB91BB1407406B2F : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB91BB1407406B2F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::UnityEngine::Object* Invoke(::System::String* B9C392338C9B23D1, ::System::Type* A288CB28FC2A6DA3, ::System::Single E7E29A22AD2C41F4)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Single))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB91BB1407406B2F_INVOKE_OFFSET))(this, B9C392338C9B23D1, A288CB28FC2A6DA3, E7E29A22AD2C41F4);
		}
	};
}
