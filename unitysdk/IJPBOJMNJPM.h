#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class GridLayoutGroup; }

#define IJPBOJMNJPM_ABOOENLOLOG_OFFSET UNITYSDK_OFFSET(0x16472EB0)
#define IJPBOJMNJPM_AFPFPECLGPG_OFFSET UNITYSDK_OFFSET(0x16472B90)
#define IJPBOJMNJPM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x164730F0)
#define IJPBOJMNJPM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16473210)
#define IJPBOJMNJPM_BNDMNAGPHEP_OFFSET UNITYSDK_OFFSET(0x16472D90)
#define IJPBOJMNJPM_CTOR_OFFSET UNITYSDK_OFFSET(0x16473300)
#define IJPBOJMNJPM_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16472A20)
#define IJPBOJMNJPM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x164729A0)
#define IJPBOJMNJPM_HBPDFPKOFOL_OFFSET UNITYSDK_OFFSET(0x16472E20)
#define IJPBOJMNJPM_HMCHIMDKEJI_OFFSET UNITYSDK_OFFSET(0x16473060)
#define IJPBOJMNJPM_JACNGHFHPNM_OFFSET UNITYSDK_OFFSET(0x16472F10)
#define IJPBOJMNJPM_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x16472B00)
#define IJPBOJMNJPM_KAPBBLCIMPD_OFFSET UNITYSDK_OFFSET(0x16472FD0)
#define IJPBOJMNJPM__ONBIND_OFFSET UNITYSDK_OFFSET(0x164728E0)
#define IJPBOJMNJPM__ONTICK_OFFSET UNITYSDK_OFFSET(0x16472CD0)

inline static constexpr unsigned int IJPBOJMNJPM_TypeDefinitionIndex = 71415;

	class IJPBOJMNJPM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::GridLayoutGroup* BMLLEFLGKMG; // 0x60
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x68
		::UnityEngine::Transform* OENNKFPNCKE; // 0x70
		::System::Boolean IILOLKBHJBJ; // 0x78
		::System::Byte _padding0[0x3];
		::System::Single JFHFAHDEACB; // 0x7C
		::UnityEngine::Vector2 GGBAIMNJPHN; // 0x80
		// static const ::System::Object GLDOGCMJFLP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPBOJMNJPM__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJPBOJMNJPM__ONTICK_OFFSET))(this, a1);
		}

		::System::Void BNDMNAGPHEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_BNDMNAGPHEP_OFFSET))(this);
		}

		::System::Void HBPDFPKOFOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_HBPDFPKOFOL_OFFSET))(this);
		}

		::System::Void ABOOENLOLOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_ABOOENLOLOG_OFFSET))(this, a1);
		}

		::System::Void AFPFPECLGPG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_AFPFPECLGPG_OFFSET))(this, a1);
		}

		::System::UInt32 JACNGHFHPNM(::UnityEngine::Transform* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_JACNGHFHPNM_OFFSET))(this, a1);
		}

		::System::Void KAPBBLCIMPD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_KAPBBLCIMPD_OFFSET))(this, a1);
		}

		::System::Void HMCHIMDKEJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_HMCHIMDKEJI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPBOJMNJPM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
