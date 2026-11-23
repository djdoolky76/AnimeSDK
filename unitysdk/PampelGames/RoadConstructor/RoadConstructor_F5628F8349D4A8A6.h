#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class Road; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAMPELGAMES_ROADCONSTRUCTOR_ROADCONSTRUCTOR_F5628F8349D4A8A6_E278F6FCA33AA990_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADCONSTRUCTOR_F5628F8349D4A8A6_EFDD85209628B1F1_OFFSET UNITYSDK_OFFSET(0x3DA0FE0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADCONSTRUCTOR_F5628F8349D4A8A6_F1689C0215584F10_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADCONSTRUCTOR_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DA15B0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADCONSTRUCTOR_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int RoadConstructor_F5628F8349D4A8A6_TypeDefinitionIndex = 18844;

	class RoadConstructor_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::PampelGames::RoadConstructor::RoadConstructor_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::PampelGames::RoadConstructor::RoadConstructor_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(RoadConstructor_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PampelGames::RoadConstructor::Road*, ::System::Boolean>** StaticGet_FE3B0FA038854060()
		{
			return (::System::Func_2<::PampelGames::RoadConstructor::Road*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RoadConstructor_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action_2<::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*>** StaticGet_EBE5768277281575()
		{
			return (::System::Action_2<::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(RoadConstructor_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Action_2<::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*>** StaticGet_B37B746C8FD9A2D0()
		{
			return (::System::Action_2<::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(RoadConstructor_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADCONSTRUCTOR_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADCONSTRUCTOR_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean EFDD85209628B1F1(::PampelGames::RoadConstructor::Road* BFB6C894910B2791)
		{
			return ((::System::Boolean(*)(::PVOID, ::PampelGames::RoadConstructor::Road*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADCONSTRUCTOR_F5628F8349D4A8A6_EFDD85209628B1F1_OFFSET))(this, BFB6C894910B2791);
		}

		::System::Void F1689C0215584F10(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* A24289F86856ED60, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* EA28F2477E0BCAF7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADCONSTRUCTOR_F5628F8349D4A8A6_F1689C0215584F10_OFFSET))(this, A24289F86856ED60, EA28F2477E0BCAF7);
		}

		::System::Void E278F6FCA33AA990(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* A24289F86856ED60, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* EA28F2477E0BCAF7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADCONSTRUCTOR_F5628F8349D4A8A6_E278F6FCA33AA990_OFFSET))(this, A24289F86856ED60, EA28F2477E0BCAF7);
		}
	};
}
