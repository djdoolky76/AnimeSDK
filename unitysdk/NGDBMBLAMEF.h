#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
class EMPEMOHABKH;
class KLJLODIBPDF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }

#define NGDBMBLAMEF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18E87030)
#define NGDBMBLAMEF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18E87100)
#define NGDBMBLAMEF_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x18E86D80)
#define NGDBMBLAMEF_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x18E86DD0)
#define NGDBMBLAMEF_CTOR_OFFSET UNITYSDK_OFFSET(0x18E871A0)
#define NGDBMBLAMEF_GGKFMIOMFKN_OFFSET UNITYSDK_OFFSET(0x18E86E90)
#define NGDBMBLAMEF_GHNLJPHHJNL_OFFSET UNITYSDK_OFFSET(0x18E86E40)
#define NGDBMBLAMEF_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x18E86C30)
#define NGDBMBLAMEF_MFKLBELIIFD_OFFSET UNITYSDK_OFFSET(0x18E86F30)
#define NGDBMBLAMEF__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18E86A60)
#define NGDBMBLAMEF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18E86BD0)

inline static constexpr unsigned int NGDBMBLAMEF_TypeDefinitionIndex = 73746;

	class NGDBMBLAMEF : public ::FMPCODLIOLG
	{
	public:
		::KLJLODIBPDF* EAGJDPFNCPF; // 0x60
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x68
		::EMPEMOHABKH* JABHNGNBIOL; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDBMBLAMEF_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDBMBLAMEF__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDBMBLAMEF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + NGDBMBLAMEF_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NGDBMBLAMEF_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void GHNLJPHHJNL(::KLJLODIBPDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJLODIBPDF*))((::PBYTE)hIl2Cpp + NGDBMBLAMEF_GHNLJPHHJNL_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDBMBLAMEF_KANMCJHEFJJ_OFFSET))(this);
		}

		::EMPEMOHABKH* GGKFMIOMFKN()
		{
			return ((::EMPEMOHABKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDBMBLAMEF_GGKFMIOMFKN_OFFSET))(this);
		}

		::System::Void MFKLBELIIFD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGDBMBLAMEF_MFKLBELIIFD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDBMBLAMEF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDBMBLAMEF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
