#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System { template <typename T> class E891BA3236FD13E7; }

#define PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_F5628F8349D4A8A6_B26534A4E2D9ABD6_OFFSET UNITYSDK_OFFSET(0x3DB8860)
#define PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DB8A50)
#define PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int IntersectionObject_F5628F8349D4A8A6_TypeDefinitionIndex = 18896;

	class IntersectionObject_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::PampelGames::RoadConstructor::IntersectionObject_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::PampelGames::RoadConstructor::IntersectionObject_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(IntersectionObject_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::E891BA3236FD13E7<::PampelGames::RoadConstructor::RoadObject*>** StaticGet_F4EB4229F3368E16()
		{
			return (::System::E891BA3236FD13E7<::PampelGames::RoadConstructor::RoadObject*>**)Il2CppClass::FromTypeDefinitionIndex(IntersectionObject_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean B26534A4E2D9ABD6(::PampelGames::RoadConstructor::RoadObject* EC35F88C87A83BEB)
		{
			return ((::System::Boolean(*)(::PVOID, ::PampelGames::RoadConstructor::RoadObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_F5628F8349D4A8A6_B26534A4E2D9ABD6_OFFSET))(this, EC35F88C87A83BEB);
		}
	};
}
