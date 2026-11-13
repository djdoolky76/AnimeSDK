#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }

#define NDAKLNGIAAL_ACAOANMOOJI_OFFSET UNITYSDK_OFFSET(0x1510C480)
#define NDAKLNGIAAL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1510C7D0)
#define NDAKLNGIAAL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1510C9E0)
#define NDAKLNGIAAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1510CBB0)
#define NDAKLNGIAAL_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1510C310)
#define NDAKLNGIAAL_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0x1510C500)
#define NDAKLNGIAAL_FKACEBELLNH_OFFSET UNITYSDK_OFFSET(0x1510C630)
#define NDAKLNGIAAL_KHBFDMNMPAG_OFFSET UNITYSDK_OFFSET(0x1510C6C0)
#define NDAKLNGIAAL_MFHNMBNIFFK_OFFSET UNITYSDK_OFFSET(0x1510C5E0)
#define NDAKLNGIAAL_MHEIOIGLFPG_OFFSET UNITYSDK_OFFSET(0x1510C710)
#define NDAKLNGIAAL__ONBIND_OFFSET UNITYSDK_OFFSET(0x1510C270)
#define NDAKLNGIAAL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1510C430)

inline static constexpr unsigned int NDAKLNGIAAL_TypeDefinitionIndex = 73636;

	class NDAKLNGIAAL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x60
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAKLNGIAAL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAKLNGIAAL__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAKLNGIAAL_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAKLNGIAAL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void ACAOANMOOJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDAKLNGIAAL_ACAOANMOOJI_OFFSET))(this, a1);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDAKLNGIAAL_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Void MFHNMBNIFFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDAKLNGIAAL_MFHNMBNIFFK_OFFSET))(this, a1);
		}

		::System::Void FKACEBELLNH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NDAKLNGIAAL_FKACEBELLNH_OFFSET))(this, a1);
		}

		::System::Void KHBFDMNMPAG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDAKLNGIAAL_KHBFDMNMPAG_OFFSET))(this, a1);
		}

		::System::Void MHEIOIGLFPG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDAKLNGIAAL_MHEIOIGLFPG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAKLNGIAAL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAKLNGIAAL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
