#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define ABC_UI_MONOUIANIMATOR_AE0C274C3A63F1E9_OFFSET UNITYSDK_OFFSET(0x1EFD5F0)
#define ABC_UI_MONOUIANIMATOR_B150C8BB2C9A18A8_OFFSET UNITYSDK_OFFSET(0x1EFCB50)
#define ABC_UI_MONOUIANIMATOR_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x1EFCBE0)
#define ABC_UI_MONOUIANIMATOR_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x1EFD740)
#define ABC_UI_MONOUIANIMATOR_E24CEFA9CB730E56_OFFSET UNITYSDK_OFFSET(0x1EFD1F0)
#define ABC_UI_MONOUIANIMATOR_E32FD40837F88BAD_1_OFFSET UNITYSDK_OFFSET(0x1EFD4E0)
#define ABC_UI_MONOUIANIMATOR_E32FD40837F88BAD_2_OFFSET UNITYSDK_OFFSET(0x1EFD3D0)
#define ABC_UI_MONOUIANIMATOR_E32FD40837F88BAD_OFFSET UNITYSDK_OFFSET(0x1EFD2C0)
#define ABC_UI_MONOUIANIMATOR_E9E23DDEAEB7E010_OFFSET UNITYSDK_OFFSET(0x1EFC850)
#define ABC_UI_MONOUIANIMATOR_F163A00970F2D44E_OFFSET UNITYSDK_OFFSET(0x1EFD0F0)
#define ABC_UI_MONOUIANIMATOR_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x1EFC950)
#define ABC_UI_MONOUIANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoUIAnimator_TypeDefinitionIndex = 7441;

	class MonoUIAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* AdaptAnimator; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* BF76B1D559610534; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* AA6BB885F42A9615; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* B2BB504D66E77DB8; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* F3DD6ADB9332374F; // 0x40
		::System::Action_1<::System::Boolean>* EEF03490AE8529A6; // 0x48
		::System::Int32 EACAA6CB32E7B53F; // 0x50
		::System::Boolean AEDA68B5745EB608; // 0x54
		::System::Boolean B5493229170329F1; // 0x55

		::System::Void E32FD40837F88BAD(::System::Int32 ACF177FCA137E933, ::System::Int32 EAE9DF61530DB75A, ::System::Action_1<::System::Boolean>* A148D02C64816912)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_E32FD40837F88BAD_OFFSET))(this, ACF177FCA137E933, EAE9DF61530DB75A, A148D02C64816912);
		}

		::System::Void F163A00970F2D44E(::System::Int32 ACF177FCA137E933)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_F163A00970F2D44E_OFFSET))(this, ACF177FCA137E933);
		}

		::System::Void B150C8BB2C9A18A8(::System::Boolean ACFBA03F9E31C599)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_B150C8BB2C9A18A8_OFFSET))(this, ACFBA03F9E31C599);
		}

		::System::Void E32FD40837F88BAD_1(::System::Int32 ACF177FCA137E933, ::System::Boolean EAE9DF61530DB75A, ::System::Action_1<::System::Boolean>* A148D02C64816912)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_E32FD40837F88BAD_1_OFFSET))(this, ACF177FCA137E933, EAE9DF61530DB75A, A148D02C64816912);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void E9E23DDEAEB7E010(::System::Action_1<::System::Boolean>* A148D02C64816912)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_E9E23DDEAEB7E010_OFFSET))(this, A148D02C64816912);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_E02954280801633F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void AE0C274C3A63F1E9(::System::Int32 ACF177FCA137E933, ::System::Action_1<::System::Boolean>* A148D02C64816912)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_AE0C274C3A63F1E9_OFFSET))(this, ACF177FCA137E933, A148D02C64816912);
		}

		::System::Void E32FD40837F88BAD_2(::System::Int32 ACF177FCA137E933, ::System::Single EAE9DF61530DB75A, ::System::Action_1<::System::Boolean>* A148D02C64816912)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_E32FD40837F88BAD_2_OFFSET))(this, ACF177FCA137E933, EAE9DF61530DB75A, A148D02C64816912);
		}

		::System::Void E24CEFA9CB730E56(::System::Int32 ACF177FCA137E933, ::System::Action_1<::System::Boolean>* A148D02C64816912)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ABC_UI_MONOUIANIMATOR_E24CEFA9CB730E56_OFFSET))(this, ACF177FCA137E933, A148D02C64816912);
		}
	};
}
