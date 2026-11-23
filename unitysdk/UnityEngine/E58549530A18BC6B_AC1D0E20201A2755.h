#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/E79D6DCE4DE1BCF3.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Terrain; }

#define UNITYENGINE_E58549530A18BC6B_AC1D0E20201A2755_INVOKE_OFFSET UNITYSDK_OFFSET(0x41CA250)
#define UNITYENGINE_E58549530A18BC6B_AC1D0E20201A2755__CTOR_OFFSET UNITYSDK_OFFSET(0x41CA290)

namespace UnityEngine
{
	inline static constexpr unsigned int E58549530A18BC6B_AC1D0E20201A2755_TypeDefinitionIndex = 21043;

	class E58549530A18BC6B_AC1D0E20201A2755 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_E58549530A18BC6B_AC1D0E20201A2755__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::Terrain* E2696312240EF6B5, ::System::String* F5B0B069E93658C9, ::UnityEngine::E79D6DCE4DE1BCF3 BE848780048DEBA8, ::System::Boolean F2BD4BA571E58658)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*, ::System::String*, ::UnityEngine::E79D6DCE4DE1BCF3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_E58549530A18BC6B_AC1D0E20201A2755_INVOKE_OFFSET))(this, E2696312240EF6B5, F5B0B069E93658C9, BE848780048DEBA8, F2BD4BA571E58658);
		}
	};
}
