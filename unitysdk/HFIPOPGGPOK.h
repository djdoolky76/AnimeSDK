#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APPCFJKJKND.h"
#include "unitysdk/BJCLNMMLIPE.h"
#include "unitysdk/JBCDHAFCAFF.h"
#include "unitysdk/NFMAIACOLBF.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class OAJDNCOEIKE;
class PLLAPAIAOGF;
namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }

#define HFIPOPGGPOK_CDMGPLEBKBK_OFFSET UNITYSDK_OFFSET(0x11012630)
#define HFIPOPGGPOK_FLKFJODFNHM_OFFSET UNITYSDK_OFFSET(0x11013170)
#define HFIPOPGGPOK_JPAIDCNNLLL_OFFSET UNITYSDK_OFFSET(0x11011DA0)
#define HFIPOPGGPOK_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x11012810)
#define HFIPOPGGPOK__CTOR_OFFSET UNITYSDK_OFFSET(0x11011D90)

inline static constexpr unsigned int HFIPOPGGPOK_TypeDefinitionIndex = 90561;

class HFIPOPGGPOK : public ::BJCLNMMLIPE
{
public:
	::NFMAIACOLBF JIIGFAJGCAC; // 0x40
	::JBCDHAFCAFF JDCLLLNDDLJ; // 0xA8
	::UnityEngine::Transform* GIKOFFOPNIC; // 0xD0
	::APPCFJKJKND DNALPFOKMAL; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIPOPGGPOK__CTOR_OFFSET))(this);
	}

	::System::Void JPAIDCNNLLL(::OAJDNCOEIKE* DGCGOJNDKPM, ::MoleMole::UIAvatarGraphics* EAOIBPOIGCD, ::PLLAPAIAOGF* MIAEBLIDJCH, ::MoleMole::UIAvatarLightSetting* MDANKKPCLKO, ::UnityEngine::Quaternion& IGFIPLKNPIP, ::UnityEngine::Quaternion& HCMBOOBNLDE)
	{
		return ((::System::Void(*)(::PVOID, ::OAJDNCOEIKE*, ::MoleMole::UIAvatarGraphics*, ::PLLAPAIAOGF*, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + HFIPOPGGPOK_JPAIDCNNLLL_OFFSET))(this, DGCGOJNDKPM, EAOIBPOIGCD, MIAEBLIDJCH, MDANKKPCLKO, IGFIPLKNPIP, HCMBOOBNLDE);
	}

	::System::Void CDMGPLEBKBK(::MoleMole::UIAvatarGraphics* EAOIBPOIGCD, ::MoleMole::UIAvatarLightSetting* MDANKKPCLKO, ::UnityEngine::Vector2& GJNNMFKIMOE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + HFIPOPGGPOK_CDMGPLEBKBK_OFFSET))(this, EAOIBPOIGCD, MDANKKPCLKO, GJNNMFKIMOE);
	}

	::System::Void PLCJNBHECGC(::System::Single PMNLNNGEIFM, ::OAJDNCOEIKE* DGCGOJNDKPM, ::PLLAPAIAOGF* MIAEBLIDJCH, ::UnityEngine::Vector2& GJNNMFKIMOE, ::UnityEngine::Quaternion& CGONANJKEAH, ::UnityEngine::Quaternion& GEHLDGMDLDK, ::UnityEngine::Camera* ONKALLFLEHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::OAJDNCOEIKE*, ::PLLAPAIAOGF*, ::UnityEngine::Vector2&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + HFIPOPGGPOK_PLCJNBHECGC_OFFSET))(this, PMNLNNGEIFM, DGCGOJNDKPM, MIAEBLIDJCH, GJNNMFKIMOE, CGONANJKEAH, GEHLDGMDLDK, ONKALLFLEHK);
	}

	::System::Void FLKFJODFNHM(::MoleMole::UIAvatarGraphics* EAOIBPOIGCD, ::UnityEngine::Light* MPHDNMBAGNL, ::MoleMole::UIAvatarLightSetting* MDANKKPCLKO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::UnityEngine::Light*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + HFIPOPGGPOK_FLKFJODFNHM_OFFSET))(this, EAOIBPOIGCD, MPHDNMBAGNL, MDANKKPCLKO);
	}
};
