#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FACE5A0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FACE5E0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C___CCTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1FACE5F0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C___CCTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x1FACE6A0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityQuaternionExtensions___c_TypeDefinitionIndex = 34385;

	class UnityQuaternionExtensions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UnityQuaternionExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2A250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Single __cctor_b__9_0(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C___CCTOR_B__9_0_OFFSET))(this, a, b, t);
		}

		::System::Single __cctor_b__9_1(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS___C___CCTOR_B__9_1_OFFSET))(this, a, b, t);
		}
	};
}
