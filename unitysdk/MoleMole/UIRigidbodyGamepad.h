#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

namespace MoleMole { class UIRigidbody; }

#define MOLEMOLE_UIRIGIDBODYGAMEPAD_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x14803B20)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_FNNGPEIIPNC_OFFSET UNITYSDK_OFFSET(0x148035B0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_GCMIFBNEFCJ_OFFSET UNITYSDK_OFFSET(0x14804BA0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_GET_UIRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x148033E0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_HCIFAAODNFK_OFFSET UNITYSDK_OFFSET(0x14803960)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_HEDKEJGHLJK_OFFSET UNITYSDK_OFFSET(0x14804AF0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_IDDBBFMNJMP_OFFSET UNITYSDK_OFFSET(0x14803790)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_KMKNDCPHIHC_OFFSET UNITYSDK_OFFSET(0x14804AE0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_LJCOLAGLNCC_OFFSET UNITYSDK_OFFSET(0x14804C50)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_LLBDDDHHBGN_OFFSET UNITYSDK_OFFSET(0x14804CE0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_MBCEBFOBHAM_OFFSET UNITYSDK_OFFSET(0x14804800)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x14804A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbodyGamepad_TypeDefinitionIndex = 50784;

	class UIRigidbodyGamepad : public ::MoleMole::MonoGamepadModule
	{
	public:
		::MoleMole::UIRigidbody* EJOIEAIMHMB; // 0xF0
		::MoleMole::InputLogicEventType ClickEvent; // 0xF8
		::MoleMole::InputLogicEventType DragEvent; // 0xFC
		::System::Single DragSpeed; // 0x100
		::System::Boolean ScreenAdpter; // 0x104
		::System::Byte _padding0[0x3];
		::System::Single DragMaxRadius; // 0x108
		::System::Boolean EnableGyroGravity; // 0x10C
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 JCEGAIAIMMB; // 0x110
		::UnityEngine::Vector2 BELEHOINMFC; // 0x118
		::System::Nullable_1<::System::Int32> BECCLNOBJNC; // 0x120
		::System::Boolean MIENEHBEAPF; // 0x128
		::System::Byte _padding2[0x7];
		::Il2CppArray<::UnityEngine::Vector3>* MLBJNGDKAPN; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRigidbody* get_UIRigidbody()
		{
			return ((::MoleMole::UIRigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_GET_UIRIGIDBODY_OFFSET))(this);
		}

		::System::Void FNNGPEIIPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_FNNGPEIIPNC_OFFSET))(this);
		}

		::System::Void IDDBBFMNJMP(::System::Boolean MNDGBAGHIBF, ::System::Boolean GHGCCMKDIPO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_IDDBBFMNJMP_OFFSET))(this, MNDGBAGHIBF, GHGCCMKDIPO);
		}

		::System::Void HCIFAAODNFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_HCIFAAODNFK_OFFSET))(this);
		}

		::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_DIHCGHDHPJP_OFFSET))(this, PKBLAMDICKB);
		}

		::System::Void MBCEBFOBHAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_MBCEBFOBHAM_OFFSET))(this);
		}

		::System::Void KMKNDCPHIHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_KMKNDCPHIHC_OFFSET))(this);
		}

		::System::Boolean HEDKEJGHLJK(::MoleMole::InputActionEvent MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_HEDKEJGHLJK_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GCMIFBNEFCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_GCMIFBNEFCJ_OFFSET))(this);
		}

		::System::Void LJCOLAGLNCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_LJCOLAGLNCC_OFFSET))(this);
		}

		::System::Void LLBDDDHHBGN(::System::Boolean MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_LLBDDDHHBGN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
