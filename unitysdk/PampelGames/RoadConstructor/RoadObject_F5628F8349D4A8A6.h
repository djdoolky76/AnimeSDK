#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System { template <typename T> class E891BA3236FD13E7; }

#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F5628F8349D4A8A6_E02E656F307D8C38_OFFSET UNITYSDK_OFFSET(0x3D80C90)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F5628F8349D4A8A6_E4EB14DF45F204CF_OFFSET UNITYSDK_OFFSET(0x3D80CE0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D80DD0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int RoadObject_F5628F8349D4A8A6_TypeDefinitionIndex = 18826;

	class RoadObject_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::PampelGames::RoadConstructor::RoadObject_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::PampelGames::RoadConstructor::RoadObject_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(RoadObject_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::E891BA3236FD13E7<::PampelGames::RoadConstructor::IntersectionObject*>** StaticGet_E7075C39E6B63936()
		{
			return (::System::E891BA3236FD13E7<::PampelGames::RoadConstructor::IntersectionObject*>**)Il2CppClass::FromTypeDefinitionIndex(RoadObject_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::E891BA3236FD13E7<::PampelGames::RoadConstructor::RoadObject*>** StaticGet_BFC2B29B610F5A11()
		{
			return (::System::E891BA3236FD13E7<::PampelGames::RoadConstructor::RoadObject*>**)Il2CppClass::FromTypeDefinitionIndex(RoadObject_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean E02E656F307D8C38(::PampelGames::RoadConstructor::IntersectionObject* EC35F88C87A83BEB)
		{
			return ((::System::Boolean(*)(::PVOID, ::PampelGames::RoadConstructor::IntersectionObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F5628F8349D4A8A6_E02E656F307D8C38_OFFSET))(this, EC35F88C87A83BEB);
		}

		::System::Boolean E4EB14DF45F204CF(::PampelGames::RoadConstructor::RoadObject* EC35F88C87A83BEB)
		{
			return ((::System::Boolean(*)(::PVOID, ::PampelGames::RoadConstructor::RoadObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F5628F8349D4A8A6_E4EB14DF45F204CF_OFFSET))(this, EC35F88C87A83BEB);
		}
	};
}
