#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class BBDFGMBNDGD;
class FMPCODLIOLG;
class IEHGPFIGKOB;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CNIBMPJMNGF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1914A920)
#define CNIBMPJMNGF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1914A9F0)
#define CNIBMPJMNGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1914AA90)
#define CNIBMPJMNGF_HBEGAAOJOMK_OFFSET UNITYSDK_OFFSET(0x1914A7D0)
#define CNIBMPJMNGF_NDGDDMIPGKM_OFFSET UNITYSDK_OFFSET(0x1914A6C0)
#define CNIBMPJMNGF_PLGEGHCLHHI_OFFSET UNITYSDK_OFFSET(0x1914A820)
#define CNIBMPJMNGF_PLLAAIFHBLG_OFFSET UNITYSDK_OFFSET(0x1914A760)
#define CNIBMPJMNGF__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1914A500)
#define CNIBMPJMNGF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1914A670)

inline static constexpr unsigned int CNIBMPJMNGF_TypeDefinitionIndex = 74118;

	class CNIBMPJMNGF : public ::FMPCODLIOLG
	{
	public:
		::IEHGPFIGKOB* LBOKAKKCMBD; // 0x60
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x68
		::System::Action_1<::FMPCODLIOLG*>* BJENMMLEOEC; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIBMPJMNGF__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIBMPJMNGF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void PLLAAIFHBLG(::System::Action_1<::FMPCODLIOLG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FMPCODLIOLG*>*))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_PLLAAIFHBLG_OFFSET))(this, a1);
		}

		::System::Void HBEGAAOJOMK(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_HBEGAAOJOMK_OFFSET))(this, a1);
		}

		::System::Void NDGDDMIPGKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_NDGDDMIPGKM_OFFSET))(this);
		}

		::System::Void PLGEGHCLHHI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_PLGEGHCLHHI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
