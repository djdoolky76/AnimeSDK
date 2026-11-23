#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_A0AA782C4FF26AD2_F5628F8349D4A8A6_ABE26E0F2A914890_OFFSET UNITYSDK_OFFSET(0x4120D40)
#define UNITYENGINE_A0AA782C4FF26AD2_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x41211B0)
#define UNITYENGINE_A0AA782C4FF26AD2_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int A0AA782C4FF26AD2_F5628F8349D4A8A6_TypeDefinitionIndex = 17004;

	class A0AA782C4FF26AD2_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::A0AA782C4FF26AD2_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::A0AA782C4FF26AD2_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A0AA782C4FF26AD2_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet_E4AE7C6234D30C14()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(A0AA782C4FF26AD2_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_A0AA782C4FF26AD2_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A0AA782C4FF26AD2_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean ABE26E0F2A914890(::System::String* A45600735D539BFC)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_A0AA782C4FF26AD2_F5628F8349D4A8A6_ABE26E0F2A914890_OFFSET))(this, A45600735D539BFC);
		}
	};
}
