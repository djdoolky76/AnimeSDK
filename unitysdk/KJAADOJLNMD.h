#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class HPBar; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define KJAADOJLNMD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB434270)
#define KJAADOJLNMD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB434360)
#define KJAADOJLNMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB434430)
#define KJAADOJLNMD_DMNNDMDMNMJ_OFFSET UNITYSDK_OFFSET(0xB4341B0)
#define KJAADOJLNMD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB433590)
#define KJAADOJLNMD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB4333C0)
#define KJAADOJLNMD_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB4333E0)
#define KJAADOJLNMD_IHLCEDNPMKP_OFFSET UNITYSDK_OFFSET(0xB433800)
#define KJAADOJLNMD_JHCKBFBFEJP_OFFSET UNITYSDK_OFFSET(0xB434160)
#define KJAADOJLNMD_JKLBMKDDIPK_OFFSET UNITYSDK_OFFSET(0xB433DE0)
#define KJAADOJLNMD_KBLLHBPNBFF_OFFSET UNITYSDK_OFFSET(0xB433700)
#define KJAADOJLNMD_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB433420)
#define KJAADOJLNMD_OLAHBNCOJII_OFFSET UNITYSDK_OFFSET(0xB433690)
#define KJAADOJLNMD_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB4333D0)
#define KJAADOJLNMD__ONBIND_OFFSET UNITYSDK_OFFSET(0xB432F90)

inline static constexpr unsigned int KJAADOJLNMD_TypeDefinitionIndex = 72100;

	class KJAADOJLNMD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* CMLBLNOJOJJ; // 0x60
		::UnityEngine::UI::Image* PKCFLHOBPKD; // 0x68
		::UnityEngine::UI::Text* FENPCMDKDHB; // 0x70
		::UnityEngine::Transform* JLIHBJFLOIF; // 0x78
		::UnityEngine::Transform* FOIEDEAGHAD; // 0x80
		::UnityEngine::UI::Text* LFDEFIEEDJN; // 0x88
		::UnityEngine::UI::Text* IBFMKJIDCOE; // 0x90
		::UnityEngine::UI::Text* BEEBIEFKKCO; // 0x98
		::UnityEngine::Transform* MLIHPCANBLO; // 0xA0
		::UnityEngine::Transform* MPBIFMLFHEG; // 0xA8
		::UnityEngine::UI::Text* GNPDGONNHMO; // 0xB0
		::UnityEngine::Transform* DKGDENMBJJJ; // 0xB8
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xC0
		::UnityEngine::UI::Image* CPBBHPIGNIE; // 0xC8
		::UnityEngine::Transform* JBDEEKEMEOI; // 0xD0
		::RPG::Client::HPBar* MGNLDKHHICM; // 0xD8
		::UnityEngine::UI::Text* LCGAGLNKJDJ; // 0xE0
		::UnityEngine::UI::Text* IGKMHDHJEON; // 0xE8
		::System::Int32 _Index_k__BackingField; // 0xF0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJAADOJLNMD_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_GET_TRANS_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JHCKBFBFEJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_JHCKBFBFEJP_OFFSET))(this);
		}

		::System::Void OLAHBNCOJII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_OLAHBNCOJII_OFFSET))(this);
		}

		::System::Void KBLLHBPNBFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_KBLLHBPNBFF_OFFSET))(this);
		}

		::System::Void IHLCEDNPMKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_IHLCEDNPMKP_OFFSET))(this);
		}

		::System::Void JKLBMKDDIPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_JKLBMKDDIPK_OFFSET))(this);
		}

		::System::Void DMNNDMDMNMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJAADOJLNMD_DMNNDMDMNMJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAADOJLNMD_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
