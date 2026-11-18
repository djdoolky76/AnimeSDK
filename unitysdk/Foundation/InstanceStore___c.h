#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_INSTANCESTORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4D8770)
#define FOUNDATION_INSTANCESTORE___C__CHECKALIVE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1F4D87C0)
#define FOUNDATION_INSTANCESTORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D87B0)

namespace Foundation
{
	inline static constexpr unsigned int InstanceStore___c_TypeDefinitionIndex = 8646;

	class InstanceStore___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Object*>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(InstanceStore___c_TypeDefinitionIndex)->GetStaticField(0x7320);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InstanceStore___c_TypeDefinitionIndex)->GetStaticField(0x7328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckAlive_b__9_0(::UnityEngine::Object* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCESTORE___C__CHECKALIVE_B__9_0_OFFSET))(this, item);
		}
	};
}
