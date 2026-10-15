#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class HPBar; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define KJAADOJLNMD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB43AD80)
#define KJAADOJLNMD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB43AE70)
#define KJAADOJLNMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB43AF40)
#define KJAADOJLNMD_DMNNDMDMNMJ_OFFSET UNITYSDK_OFFSET(0xB43ACC0)
#define KJAADOJLNMD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB43A0A0)
#define KJAADOJLNMD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB439ED0)
#define KJAADOJLNMD_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB439EF0)
#define KJAADOJLNMD_IHLCEDNPMKP_OFFSET UNITYSDK_OFFSET(0xB43A310)
#define KJAADOJLNMD_JHCKBFBFEJP_OFFSET UNITYSDK_OFFSET(0xB43AC70)
#define KJAADOJLNMD_JKLBMKDDIPK_OFFSET UNITYSDK_OFFSET(0xB43A8F0)
#define KJAADOJLNMD_KBLLHBPNBFF_OFFSET UNITYSDK_OFFSET(0xB43A210)
#define KJAADOJLNMD_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB439F30)
#define KJAADOJLNMD_OLAHBNCOJII_OFFSET UNITYSDK_OFFSET(0xB43A1A0)
#define KJAADOJLNMD_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB439EE0)
#define KJAADOJLNMD__ONBIND_OFFSET UNITYSDK_OFFSET(0xB439A90)

inline static constexpr unsigned int KJAADOJLNMD_TypeDefinitionIndex = 72101;

	class KJAADOJLNMD : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::HPBar* MGNLDKHHICM; // 0x60
		::UnityEngine::UI::Text* GNPDGONNHMO; // 0x68
		::UnityEngine::UI::Image* CPBBHPIGNIE; // 0x70
		::UnityEngine::Transform* JBDEEKEMEOI; // 0x78
		::UnityEngine::UI::Text* IGKMHDHJEON; // 0x80
		::UnityEngine::Transform* DKGDENMBJJJ; // 0x88
		::UnityEngine::UI::Text* LFDEFIEEDJN; // 0x90
		::UnityEngine::UI::Text* BEEBIEFKKCO; // 0x98
		::UnityEngine::Transform* CMLBLNOJOJJ; // 0xA0
		::UnityEngine::Transform* FOIEDEAGHAD; // 0xA8
		::UnityEngine::UI::Text* FENPCMDKDHB; // 0xB0
		::UnityEngine::UI::Text* IBFMKJIDCOE; // 0xB8
		::UnityEngine::Transform* JLIHBJFLOIF; // 0xC0
		::UnityEngine::UI::Image* PKCFLHOBPKD; // 0xC8
		::UnityEngine::Transform* MPBIFMLFHEG; // 0xD0
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xD8
		::UnityEngine::Transform* MLIHPCANBLO; // 0xE0
		::UnityEngine::UI::Text* LCGAGLNKJDJ; // 0xE8
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
