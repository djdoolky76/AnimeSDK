#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LDMONOHELPER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1246ABE0)
#define MOLEMOLE_LDMONOHELPER_CONFIRMINUPDATE_OFFSET UNITYSDK_OFFSET(0x1246B040)
#define MOLEMOLE_LDMONOHELPER_GET_ISINLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1246ABD0)
#define MOLEMOLE_LDMONOHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x1246AE20)
#define MOLEMOLE_LDMONOHELPER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1246ADE0)
#define MOLEMOLE_LDMONOHELPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1246AC30)
#define MOLEMOLE_LDMONOHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1246ACC0)
#define MOLEMOLE_LDMONOHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1246B210)

namespace MoleMole
{
	inline static constexpr unsigned int LDMonoHelper_TypeDefinitionIndex = 38554;

	class LDMonoHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::LDMonoHelper** StaticGet_lazyInstance()
		{
			return (::MoleMole::LDMonoHelper**)Il2CppClass::FromTypeDefinitionIndex(LDMonoHelper_TypeDefinitionIndex)->GetStaticField(0x41B60);
		}
		::System::Boolean IsInUpdate; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Action*>* GMCINJKOEKE; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_GET_ISINLATEUPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_LATEUPDATE_OFFSET))(this);
		}

		static ::System::Boolean Init()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_INIT_OFFSET))();
		}

		static ::System::Void ConfirmInUpdate(::System::Action* EBPNNJLAOON)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_LDMONOHELPER_CONFIRMINUPDATE_OFFSET))(EBPNNJLAOON);
		}
	};
}
