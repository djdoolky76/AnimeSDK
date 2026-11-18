#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class InteractionPoint; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOINTERACTIONPOINT_AWAKE_OFFSET UNITYSDK_OFFSET(0x162E6A60)
#define MOLEMOLE_MONOINTERACTIONPOINT_DISTANCE2D_OFFSET UNITYSDK_OFFSET(0x162E68F0)
#define MOLEMOLE_MONOINTERACTIONPOINT_DISTANCESQ2D_OFFSET UNITYSDK_OFFSET(0x162E6220)
#define MOLEMOLE_MONOINTERACTIONPOINT_EBABFPHBKHC_OFFSET UNITYSDK_OFFSET(0x162E62B0)
#define MOLEMOLE_MONOINTERACTIONPOINT_GETINTERACTIONPOINTBYNAME_OFFSET UNITYSDK_OFFSET(0x162E5A20)
#define MOLEMOLE_MONOINTERACTIONPOINT_GETNEARESTINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x162E5450)
#define MOLEMOLE_MONOINTERACTIONPOINT_GETPATHTOTARGETPOINT_OFFSET UNITYSDK_OFFSET(0x162E5BA0)
#define MOLEMOLE_MONOINTERACTIONPOINT_GETREACHABLENEARESTINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x162E5C70)
#define MOLEMOLE_MONOINTERACTIONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x162E6D10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInteractionPoint_TypeDefinitionIndex = 77342;

	class MonoInteractionPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::InteractionPoint*>* interactionPointList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT__CTOR_OFFSET))(this);
		}

		::MoleMole::InteractionPoint* GetNearestInteractionPoint(::System::Collections::Generic::List_1<::System::String*>* MKEMBKPOHKF)
		{
			return ((::MoleMole::InteractionPoint*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_GETNEARESTINTERACTIONPOINT_OFFSET))(this, MKEMBKPOHKF);
		}

		::MoleMole::InteractionPoint* GetInteractionPointByName(::System::String* HIAIKHDFCLN)
		{
			return ((::MoleMole::InteractionPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_GETINTERACTIONPOINTBYNAME_OFFSET))(this, HIAIKHDFCLN);
		}

		static ::System::Void GetPathToTargetPoint(::MoleMole::InteractionPoint* OPMPKFEHOBM, ::UnityEngine::Vector3 CPILJNMFPJL, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI)
		{
			return ((::System::Void(*)(::MoleMole::InteractionPoint*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_GETPATHTOTARGETPOINT_OFFSET))(OPMPKFEHOBM, CPILJNMFPJL, CJBJONJDOLI);
		}

		::MoleMole::InteractionPoint* GetReachableNearestInteractionPoint(::MoleMole::Battle::Entity* BDHOILPIGKB, ::System::Collections::Generic::IList_1<::System::String*>* MKEMBKPOHKF, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PJCLMOLEOEJ)
		{
			return ((::MoleMole::InteractionPoint*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_GETREACHABLENEARESTINTERACTIONPOINT_OFFSET))(this, BDHOILPIGKB, MKEMBKPOHKF, PJCLMOLEOEJ);
		}

		static ::System::Single DistanceSq2D(::UnityEngine::Vector3 FFDFGGJEKJI, ::UnityEngine::Vector3 FGLJPLFOOKH)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_DISTANCESQ2D_OFFSET))(FFDFGGJEKJI, FGLJPLFOOKH);
		}

		static ::System::Single Distance2D(::UnityEngine::Vector3 FFDFGGJEKJI, ::UnityEngine::Vector3 FGLJPLFOOKH)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_DISTANCE2D_OFFSET))(FFDFGGJEKJI, FGLJPLFOOKH);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_AWAKE_OFFSET))(this);
		}

		::MoleMole::InteractionPoint* EBABFPHBKHC(::UnityEngine::Vector3 CPILJNMFPJL, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>>* EKOOLBDPPBB, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PJCLMOLEOEJ)
		{
			return ((::MoleMole::InteractionPoint*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT_EBABFPHBKHC_OFFSET))(this, CPILJNMFPJL, EKOOLBDPPBB, PJCLMOLEOEJ);
		}
	};
}
