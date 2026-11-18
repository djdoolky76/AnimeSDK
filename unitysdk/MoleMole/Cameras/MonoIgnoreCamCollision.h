#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION_EMPTY_OFFSET UNITYSDK_OFFSET(0x121A0AF0)
#define MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x121A0C00)
#define MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x121A0E80)
#define MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x121A0D70)
#define MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION__CCTOR_OFFSET UNITYSDK_OFFSET(0x121A1050)
#define MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x121A1000)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int MonoIgnoreCamCollision_TypeDefinitionIndex = 63276;

	class MonoIgnoreCamCollision : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Cameras::MonoIgnoreCamCollision*>** StaticGet_KDPDNBGNFDO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Cameras::MonoIgnoreCamCollision*>**)Il2CppClass::FromTypeDefinitionIndex(MonoIgnoreCamCollision_TypeDefinitionIndex)->GetStaticField(0x38730);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION__CCTOR_OFFSET))();
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION_EMPTY_OFFSET))();
		}

		static ::MoleMole::Cameras::MonoIgnoreCamCollision* GetComponentSafely(::System::Int32 HLJEFIIDMFA)
		{
			return ((::MoleMole::Cameras::MonoIgnoreCamCollision*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION_GETCOMPONENTSAFELY_OFFSET))(HLJEFIIDMFA);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOIGNORECAMCOLLISION_ONDISABLE_OFFSET))(this);
		}
	};
}
