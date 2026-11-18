#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define MIJBBECNEJG_AEDCBIPGFMO_OFFSET UNITYSDK_OFFSET(0x177C0320)
#define MIJBBECNEJG_AIOHMPGKLOD_OFFSET UNITYSDK_OFFSET(0x177C0310)
#define MIJBBECNEJG_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x177C0070)
#define MIJBBECNEJG_FFEDKHMPPFA_OFFSET UNITYSDK_OFFSET(0x177C0330)
#define MIJBBECNEJG_JHKIAJBMEJK_OFFSET UNITYSDK_OFFSET(0x177C0380)
#define MIJBBECNEJG_JJIHFFFNCEH_OFFSET UNITYSDK_OFFSET(0x177C0370)
#define MIJBBECNEJG_KFADLGAJDCB_OFFSET UNITYSDK_OFFSET(0x177C0350)
#define MIJBBECNEJG_NLJIBDPFKDG_OFFSET UNITYSDK_OFFSET(0x177C0340)
#define MIJBBECNEJG_NOPDLJMMNHE_OFFSET UNITYSDK_OFFSET(0x177C0360)
#define MIJBBECNEJG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177BFF80)
#define MIJBBECNEJG__CTOR_OFFSET UNITYSDK_OFFSET(0x177C0280)

inline static constexpr unsigned int MIJBBECNEJG_TypeDefinitionIndex = 84150;

class MIJBBECNEJG : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::Rendering::Volume* _AKGNDMIMHKE_k__BackingField; // 0x28
	::UnityEngine::Camera* _JNAPNIJILLN_k__BackingField; // 0x30
	::UnityEngine::Transform* _GJHKBENADMK_k__BackingField; // 0x38
	::UnityEngine::RectTransform* _MDMMCFDNBCF_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJBBECNEJG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIJBBECNEJG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void AIOHMPGKLOD(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MIJBBECNEJG_AIOHMPGKLOD_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* AEDCBIPGFMO()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJBBECNEJG_AEDCBIPGFMO_OFFSET))(this);
	}

	::UnityEngine::Rendering::Volume* FFEDKHMPPFA()
	{
		return ((::UnityEngine::Rendering::Volume*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJBBECNEJG_FFEDKHMPPFA_OFFSET))(this);
	}

	::System::Void NLJIBDPFKDG(::UnityEngine::Rendering::Volume* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + MIJBBECNEJG_NLJIBDPFKDG_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Camera* KFADLGAJDCB()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJBBECNEJG_KFADLGAJDCB_OFFSET))(this);
	}

	::UnityEngine::Transform* NOPDLJMMNHE()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJBBECNEJG_NOPDLJMMNHE_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIJBBECNEJG_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void JJIHFFFNCEH(::UnityEngine::Camera* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MIJBBECNEJG_JJIHFFFNCEH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JHKIAJBMEJK(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MIJBBECNEJG_JHKIAJBMEJK_OFFSET))(this, EGEGIMGMJHN);
	}
};
