#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class BBDFGMBNDGD;
class FMPCODLIOLG;
class IEHGPFIGKOB;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CNIBMPJMNGF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDA4CF30)
#define CNIBMPJMNGF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xDA4D000)
#define CNIBMPJMNGF_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4D0A0)
#define CNIBMPJMNGF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xDA4CC80)
#define CNIBMPJMNGF_HBEGAAOJOMK_OFFSET UNITYSDK_OFFSET(0xDA4CDE0)
#define CNIBMPJMNGF_NDGDDMIPGKM_OFFSET UNITYSDK_OFFSET(0xDA4CCD0)
#define CNIBMPJMNGF_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xDA4CB10)
#define CNIBMPJMNGF_PLGEGHCLHHI_OFFSET UNITYSDK_OFFSET(0xDA4CE30)
#define CNIBMPJMNGF_PLLAAIFHBLG_OFFSET UNITYSDK_OFFSET(0xDA4CD70)

inline static constexpr unsigned int CNIBMPJMNGF_TypeDefinitionIndex = 72083;

	class CNIBMPJMNGF : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x60
		::System::Action_1<::FMPCODLIOLG*>* BJENMMLEOEC; // 0x68
		::IEHGPFIGKOB* LBOKAKKCMBD; // 0x70
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
