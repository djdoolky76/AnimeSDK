#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/BB38535E93894DB3.h"
#include "unitysdk/PampelGames/RoadConstructor/SceneObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_A001490FD219BB4A_OFFSET UNITYSDK_OFFSET(0x3DA5DC0)
#define PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_A26F3CCE399B781A_OFFSET UNITYSDK_OFFSET(0x3DA5BE0)
#define PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_A6A28B87FA771207_OFFSET UNITYSDK_OFFSET(0x3DA5C40)
#define PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_E78DB22ABCD59DD1_OFFSET UNITYSDK_OFFSET(0x1B96BE0)
#define PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_E911C39240B41EBC_OFFSET UNITYSDK_OFFSET(0x3DA5E30)
#define PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_FAD84A4E1065D75D_OFFSET UNITYSDK_OFFSET(0x3DA5CA0)
#define PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x3DA5E90)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int IntersectionObject_TypeDefinitionIndex = 18897;

	class IntersectionObject : public ::PampelGames::RoadConstructor::SceneObject
	{
	public:
		::B223EC95048EAAE0::BB38535E93894DB3 intersectionType; // 0x70
		::UnityEngine::Vector3 centerPosition; // 0x74
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* roadConnections; // 0x80

		::System::Void E911C39240B41EBC(::PampelGames::RoadConstructor::RoadObject* FF4BE10145898F75)
		{
			return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::RoadObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_E911C39240B41EBC_OFFSET))(this, FF4BE10145898F75);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void A26F3CCE399B781A(::PampelGames::RoadConstructor::RoadObject* FF4BE10145898F75)
		{
			return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::RoadObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_A26F3CCE399B781A_OFFSET))(this, FF4BE10145898F75);
		}

		::System::Void FAD84A4E1065D75D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_FAD84A4E1065D75D_OFFSET))(this);
		}

		::System::Void A001490FD219BB4A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_A001490FD219BB4A_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* E78DB22ABCD59DD1()
		{
			return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_E78DB22ABCD59DD1_OFFSET))(this);
		}

		::System::Void A6A28B87FA771207(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* A32F1635F5B6E358)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_INTERSECTIONOBJECT_A6A28B87FA771207_OFFSET))(this, A32F1635F5B6E358);
		}
	};
}
