#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class BBDFGMBNDGD;
class FMPCODLIOLG;
class IEHGPFIGKOB;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Action; }
namespace System { class Object; }

#define CNIBMPJMNGF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDA54620)
#define CNIBMPJMNGF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xDA546F0)
#define CNIBMPJMNGF_CTOR_OFFSET UNITYSDK_OFFSET(0xDA54790)
#define CNIBMPJMNGF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xDA54370)
#define CNIBMPJMNGF_HBEGAAOJOMK_OFFSET UNITYSDK_OFFSET(0xDA544D0)
#define CNIBMPJMNGF_NDGDDMIPGKM_OFFSET UNITYSDK_OFFSET(0xDA543C0)
#define CNIBMPJMNGF_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xDA54200)
#define CNIBMPJMNGF_PLGEGHCLHHI_OFFSET UNITYSDK_OFFSET(0xDA54520)
#define CNIBMPJMNGF_PLLAAIFHBLG_OFFSET UNITYSDK_OFFSET(0xDA54460)

	class CNIBMPJMNGF : public ::FMPCODLIOLG
	{
	public:
		::IEHGPFIGKOB* LBOKAKKCMBD; // 0x60
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x68
		::System::Action* BJENMMLEOEC; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void PLLAAIFHBLG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CNIBMPJMNGF_PLLAAIFHBLG_OFFSET))(this, a1);
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
