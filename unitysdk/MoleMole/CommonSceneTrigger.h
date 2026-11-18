#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_COMMONSCENETRIGGER_CREATEBOXTRIGGER_OFFSET UNITYSDK_OFFSET(0x19225E40)
#define MOLEMOLE_COMMONSCENETRIGGER_CREATECAPSULETRIGGER_OFFSET UNITYSDK_OFFSET(0x192261E0)
#define MOLEMOLE_COMMONSCENETRIGGER_CREATESPHERETRIGGER_OFFSET UNITYSDK_OFFSET(0x19226550)
#define MOLEMOLE_COMMONSCENETRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x19225A60)
#define MOLEMOLE_COMMONSCENETRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x19225AF0)
#define MOLEMOLE_COMMONSCENETRIGGER_REGISTERTRIGGERENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x19225B80)
#define MOLEMOLE_COMMONSCENETRIGGER_REGISTERTRIGGEREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x19225C30)
#define MOLEMOLE_COMMONSCENETRIGGER_UNREGISTERTRIGGERENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x19225CE0)
#define MOLEMOLE_COMMONSCENETRIGGER_UNREGISTERTRIGGEREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x19225D90)
#define MOLEMOLE_COMMONSCENETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x192268B0)

namespace MoleMole
{
	inline static constexpr unsigned int CommonSceneTrigger_TypeDefinitionIndex = 82240;

	class CommonSceneTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::UnityEngine::Collider*>* PHALPKHJBGL; // 0x18
		::System::Action_1<::UnityEngine::Collider*>* GGOMPAFOFCC; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void RegisterTriggerEnterCallBack(::System::Action_1<::UnityEngine::Collider*>* PHALPKHJBGL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_REGISTERTRIGGERENTERCALLBACK_OFFSET))(this, PHALPKHJBGL);
		}

		::System::Void RegisterTriggerExitCallBack(::System::Action_1<::UnityEngine::Collider*>* GGOMPAFOFCC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_REGISTERTRIGGEREXITCALLBACK_OFFSET))(this, GGOMPAFOFCC);
		}

		::System::Void UnregisterTriggerEnterCallBack(::System::Action_1<::UnityEngine::Collider*>* PHALPKHJBGL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_UNREGISTERTRIGGERENTERCALLBACK_OFFSET))(this, PHALPKHJBGL);
		}

		::System::Void UnregisterTriggerExitCallBack(::System::Action_1<::UnityEngine::Collider*>* GGOMPAFOFCC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_UNREGISTERTRIGGEREXITCALLBACK_OFFSET))(this, GGOMPAFOFCC);
		}

		static ::MoleMole::CommonSceneTrigger* CreateBoxTrigger(::UnityEngine::Transform* IAPKABMDJNF, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH, ::System::Single BDEDDEGJFKL, ::UnityEngine::Vector3 CFEHGOPNBPI, ::System::Int32 KMOHKCADPNA)
		{
			return ((::MoleMole::CommonSceneTrigger*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_CREATEBOXTRIGGER_OFFSET))(IAPKABMDJNF, OHOGDOMNHNK, BFBELMDIAHI, JBGLCAFPGHK, KKAMDFNMMJH, BDEDDEGJFKL, CFEHGOPNBPI, KMOHKCADPNA);
		}

		static ::MoleMole::CommonSceneTrigger* CreateCapsuleTrigger(::UnityEngine::Transform* IAPKABMDJNF, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH, ::UnityEngine::Vector3 CFEHGOPNBPI, ::System::Int32 KMOHKCADPNA)
		{
			return ((::MoleMole::CommonSceneTrigger*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_CREATECAPSULETRIGGER_OFFSET))(IAPKABMDJNF, OHOGDOMNHNK, BFBELMDIAHI, NCCDJLDKFGA, KKAMDFNMMJH, CFEHGOPNBPI, KMOHKCADPNA);
		}

		static ::MoleMole::CommonSceneTrigger* CreateSphereTrigger(::UnityEngine::Transform* IAPKABMDJNF, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH, ::UnityEngine::Vector3 CFEHGOPNBPI, ::System::Int32 KMOHKCADPNA)
		{
			return ((::MoleMole::CommonSceneTrigger*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMONSCENETRIGGER_CREATESPHERETRIGGER_OFFSET))(IAPKABMDJNF, OHOGDOMNHNK, BFBELMDIAHI, NCCDJLDKFGA, KKAMDFNMMJH, CFEHGOPNBPI, KMOHKCADPNA);
		}
	};
}
