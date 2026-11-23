#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/AA2675AA19B26A98.h"
#include "unitysdk/PampelGames/RoadConstructor/SceneObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_A001490FD219BB4A_OFFSET UNITYSDK_OFFSET(0x3D75360)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_A26F3CCE399B781A_OFFSET UNITYSDK_OFFSET(0x3D74FF0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_A6A28B87FA771207_OFFSET UNITYSDK_OFFSET(0x3D75050)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_B811D31375CC8682_OFFSET UNITYSDK_OFFSET(0x3D74F90)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_BDD6B1731BD4F9C9_OFFSET UNITYSDK_OFFSET(0x3D753D0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_E2BC2D9B4BEDE484_OFFSET UNITYSDK_OFFSET(0x3D750B0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_E78DB22ABCD59DD1_OFFSET UNITYSDK_OFFSET(0x1921850)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_E911C39240B41EBC_OFFSET UNITYSDK_OFFSET(0x3D75430)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_EE70C4CB46330E93_OFFSET UNITYSDK_OFFSET(0x17919E0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F2D2723D27098A12_OFFSET UNITYSDK_OFFSET(0x3D752F0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F6E49E170652CE88_OFFSET UNITYSDK_OFFSET(0x3D74F30)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_FAD84A4E1065D75D_OFFSET UNITYSDK_OFFSET(0x3D751D0)
#define PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x3D75490)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int RoadObject_TypeDefinitionIndex = 18827;

	class RoadObject : public ::PampelGames::RoadConstructor::SceneObject
	{
	public:
		::System::Single length; // 0x70
		::B223EC95048EAAE0::AA2675AA19B26A98 connectionType; // 0x74
		::System::Boolean snapPositionSet; // 0x78
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 snapPosition; // 0x7C
		::System::Boolean previewRoad; // 0x88
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* intersectionConnections; // 0x90
		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* roadConnections; // 0x98

		::System::Void B811D31375CC8682(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* E0FCAB7EBD0B656C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_B811D31375CC8682_OFFSET))(this, E0FCAB7EBD0B656C);
		}

		::System::Void FAD84A4E1065D75D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_FAD84A4E1065D75D_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* E78DB22ABCD59DD1()
		{
			return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_E78DB22ABCD59DD1_OFFSET))(this);
		}

		::System::Void A6A28B87FA771207(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* A32F1635F5B6E358)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_A6A28B87FA771207_OFFSET))(this, A32F1635F5B6E358);
		}

		::System::Void E2BC2D9B4BEDE484()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_E2BC2D9B4BEDE484_OFFSET))(this);
		}

		::System::Void F2D2723D27098A12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F2D2723D27098A12_OFFSET))(this);
		}

		::System::Void A26F3CCE399B781A(::PampelGames::RoadConstructor::RoadObject* FF4BE10145898F75)
		{
			return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::RoadObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_A26F3CCE399B781A_OFFSET))(this, FF4BE10145898F75);
		}

		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>* EE70C4CB46330E93()
		{
			return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::IntersectionObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_EE70C4CB46330E93_OFFSET))(this);
		}

		::System::Void BDD6B1731BD4F9C9(::PampelGames::RoadConstructor::IntersectionObject* FF4BE10145898F75)
		{
			return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::IntersectionObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_BDD6B1731BD4F9C9_OFFSET))(this, FF4BE10145898F75);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void A001490FD219BB4A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_A001490FD219BB4A_OFFSET))(this);
		}

		::System::Void E911C39240B41EBC(::PampelGames::RoadConstructor::RoadObject* FF4BE10145898F75)
		{
			return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::RoadObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_E911C39240B41EBC_OFFSET))(this, FF4BE10145898F75);
		}

		::System::Void F6E49E170652CE88(::PampelGames::RoadConstructor::IntersectionObject* F635A879A243B3C1)
		{
			return ((::System::Void(*)(::PVOID, ::PampelGames::RoadConstructor::IntersectionObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_ROADOBJECT_F6E49E170652CE88_OFFSET))(this, F635A879A243B3C1);
		}
	};
}
