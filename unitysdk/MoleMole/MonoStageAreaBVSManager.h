#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoStageAreaBVSManager_ILHPPOCBICE; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B80F90)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_CURRENTBOUNDVALID_OFFSET UNITYSDK_OFFSET(0x12B81890)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_ISINCURRENTBOUND_OFFSET UNITYSDK_OFFSET(0x12B818D0)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B81950)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_START_OFFSET UNITYSDK_OFFSET(0x12B80FE0)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER_UPDATECURRENTBOUND_OFFSET UNITYSDK_OFFSET(0x12B81460)
#define MOLEMOLE_MONOSTAGEAREABVSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B819A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageAreaBVSManager_TypeDefinitionIndex = 88795;

	class MonoStageAreaBVSManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::MonoStageAreaBVSManager** StaticGet_Current()
		{
			return (::MoleMole::MonoStageAreaBVSManager**)Il2CppClass::FromTypeDefinitionIndex(MonoStageAreaBVSManager_TypeDefinitionIndex)->GetStaticField(0x37820);
		}
		::System::Int32 CulledCount; // 0x18
		::System::Int32 VisibleCount; // 0x1C
		::System::Boolean HBJLEHGPLAN; // 0x20
		::System::Byte _padding0[0x7];
		::MoleMole::MonoStageAreaBVSManager_ILHPPOCBICE* DKDEHNJKIEM; // 0x28
		::System::String* DPODDKABHCF; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* FACBAENILLI; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_START_OFFSET))(this);
		}

		::System::Void UpdateCurrentBound(::UnityEngine::Vector3 OHOGDOMNHNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_UPDATECURRENTBOUND_OFFSET))(this, OHOGDOMNHNK);
		}

		::System::Boolean CurrentBoundValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_CURRENTBOUNDVALID_OFFSET))(this);
		}

		::System::Boolean IsInCurrentBound(::UnityEngine::Vector3 OHOGDOMNHNK)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_ISINCURRENTBOUND_OFFSET))(this, OHOGDOMNHNK);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEAREABVSMANAGER_ONDESTROY_OFFSET))(this);
		}
	};
}
