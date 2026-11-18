#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OGDIIIHHMNM_HNNDILLKNJG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"

class OGDIIIHHMNM_FFBKOPLFGFE;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define OGDIIIHHMNM_CONTAINS_OFFSET UNITYSDK_OFFSET(0xE14C1A0)
#define OGDIIIHHMNM_DISABLE_OFFSET UNITYSDK_OFFSET(0xE14C3D0)
#define OGDIIIHHMNM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE14BE60)
#define OGDIIIHHMNM_ENABLE_OFFSET UNITYSDK_OFFSET(0xE14C380)
#define OGDIIIHHMNM_FINDACTION_OFFSET UNITYSDK_OFFSET(0xE14C480)
#define OGDIIIHHMNM_FINDBINDING_OFFSET UNITYSDK_OFFSET(0xE14C4F0)
#define OGDIIIHHMNM_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE14C260)
#define OGDIIIHHMNM_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0xE14BF40)
#define OGDIIIHHMNM_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0xE14C420)
#define OGDIIIHHMNM_GET_CONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0xE14C160)
#define OGDIIIHHMNM_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0xE14C080)
#define OGDIIIHHMNM_LOGMNFFOOCB_OFFSET UNITYSDK_OFFSET(0xE14C5E0)
#define OGDIIIHHMNM_OHHPFOIOIHK_OFFSET UNITYSDK_OFFSET(0xE14C5F0)
#define OGDIIIHHMNM_SET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0xE14BF90)
#define OGDIIIHHMNM_SET_DEVICES_OFFSET UNITYSDK_OFFSET(0xE14C0E0)
#define OGDIIIHHMNM_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE14C2E0)
#define OGDIIIHHMNM__CTOR_OFFSET UNITYSDK_OFFSET(0xE14BD70)

inline static constexpr unsigned int OGDIIIHHMNM_TypeDefinitionIndex = 93271;

class OGDIIIHHMNM : public ::System::Object
{
public:
	::UnityEngine::InputSystem::InputAction* JIEPNDDCDNI; // 0x10
	::OGDIIIHHMNM_FFBKOPLFGFE* ENKJDHKDEJH; // 0x18
	::UnityEngine::InputSystem::InputActionAsset* _AHIDBBLINHO_k__BackingField; // 0x20
	::UnityEngine::InputSystem::InputAction* ADMCACPNNKE; // 0x28
	::UnityEngine::InputSystem::InputAction* NHCCDFFAAJO; // 0x30
	::UnityEngine::InputSystem::InputActionMap* KCCBHIPNAHF; // 0x38
	::UnityEngine::InputSystem::InputAction* JKLHDOPGAJA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_DISPOSE_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask()
	{
		return ((::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_GET_BINDINGMASK_OFFSET))(this);
	}

	::System::Void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_SET_BINDINGMASK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices()
	{
		return ((::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_GET_DEVICES_OFFSET))(this);
	}

	::System::Void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_SET_DEVICES_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes()
	{
		return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_GET_CONTROLSCHEMES_OFFSET))(this);
	}

	::System::Boolean Contains(::UnityEngine::InputSystem::InputAction* GJBHEJGENMI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_CONTAINS_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void Enable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_ENABLE_OFFSET))(this);
	}

	::System::Void Disable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_DISABLE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_GET_BINDINGS_OFFSET))(this);
	}

	::UnityEngine::InputSystem::InputAction* FindAction(::System::String* JLHKFBAPIGI, ::System::Boolean LPNBBNPGCCI)
	{
		return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_FINDACTION_OFFSET))(this, JLHKFBAPIGI, LPNBBNPGCCI);
	}

	::System::Int32 FindBinding(::UnityEngine::InputSystem::InputBinding EBIAODHHBKM, ::UnityEngine::InputSystem::InputAction*& GJBHEJGENMI)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputAction*&))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_FINDBINDING_OFFSET))(this, EBIAODHHBKM, GJBHEJGENMI);
	}

	::OGDIIIHHMNM_HNNDILLKNJG LOGMNFFOOCB()
	{
		return ((::OGDIIIHHMNM_HNNDILLKNJG(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_LOGMNFFOOCB_OFFSET))(this);
	}

	::UnityEngine::InputSystem::InputActionAsset* OHHPFOIOIHK()
	{
		return ((::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDIIIHHMNM_OHHPFOIOIHK_OFFSET))(this);
	}
};
