#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ElationEchoPointUIType.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/JKHCFCIMIBJ.h"
class ANJIIFAPKCD;
class KJLPEOPGAMA;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define BKMPDMKHBOK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC12A480)
#define BKMPDMKHBOK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC12A550)
#define BKMPDMKHBOK_CTOR_OFFSET UNITYSDK_OFFSET(0xC12A5F0)
#define BKMPDMKHBOK_DBFINJHALNL_OFFSET UNITYSDK_OFFSET(0xC129DA0)
#define BKMPDMKHBOK_DBLIALBBCII_OFFSET UNITYSDK_OFFSET(0xC12A1E0)
#define BKMPDMKHBOK_DEOCOHMHHEA_OFFSET UNITYSDK_OFFSET(0xC12A240)
#define BKMPDMKHBOK_DGJLHNMLEIJ_OFFSET UNITYSDK_OFFSET(0xC12A320)
#define BKMPDMKHBOK_GCPKEEMKGGF_OFFSET UNITYSDK_OFFSET(0xC12A2B0)
#define BKMPDMKHBOK_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xC129CF0)
#define BKMPDMKHBOK_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC12A060)
#define BKMPDMKHBOK_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC12A150)
#define BKMPDMKHBOK__ONBIND_OFFSET UNITYSDK_OFFSET(0xC129B50)
#define BKMPDMKHBOK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC129C40)
#define BKMPDMKHBOK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC129D50)

inline static constexpr unsigned int BKMPDMKHBOK_TypeDefinitionIndex = 73458;

	class BKMPDMKHBOK : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::KJLPEOPGAMA* DIMFIPKFFGA; // 0x68
		::System::String* NHJNLPKCEIE; // 0x70
		::ANJIIFAPKCD* CNNFCEEIJAB; // 0x78
		::UnityEngine::Transform* LGNIFMDFDCK; // 0x80
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		// static const ::System::String* NEDFPDMNEED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BKMPDMKHBOK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_ONRETURN_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_LIDKFDENKAP_OFFSET))(this);
		}

		::System::Void DEOCOHMHHEA(::JKHCFCIMIBJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKHCFCIMIBJ))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_DEOCOHMHHEA_OFFSET))(this, a1);
		}

		::System::Void DBFINJHALNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_DBFINJHALNL_OFFSET))(this);
		}

		::System::Void DBLIALBBCII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_DBLIALBBCII_OFFSET))(this);
		}

		::System::String* GCPKEEMKGGF(::RPG::GameCore::ElationEchoPointUIType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ElationEchoPointUIType))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_GCPKEEMKGGF_OFFSET))(this, a1);
		}

		::System::Void DGJLHNMLEIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_DGJLHNMLEIJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPDMKHBOK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
