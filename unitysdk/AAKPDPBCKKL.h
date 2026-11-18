#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJCLNMMLIPE.h"
#include "unitysdk/JBCDHAFCAFF.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/NFMAIACOLBF.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class OAJDNCOEIKE;
class PLLAPAIAOGF;
namespace MoleMole { class UIAvatarGraphics; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define AAKPDPBCKKL_CDMGPLEBKBK_OFFSET UNITYSDK_OFFSET(0x154C29A0)
#define AAKPDPBCKKL_CEEKPMLKPAJ_OFFSET UNITYSDK_OFFSET(0x154C2BA0)
#define AAKPDPBCKKL_JPAIDCNNLLL_OFFSET UNITYSDK_OFFSET(0x154C2BF0)
#define AAKPDPBCKKL_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x154C20B0)
#define AAKPDPBCKKL__CTOR_OFFSET UNITYSDK_OFFSET(0x154C20A0)

inline static constexpr unsigned int AAKPDPBCKKL_TypeDefinitionIndex = 92154;

class AAKPDPBCKKL : public ::BJCLNMMLIPE
{
public:
	::JBCDHAFCAFF JDCLLLNDDLJ; // 0x40
	::NFMAIACOLBF JIIGFAJGCAC; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKPDPBCKKL__CTOR_OFFSET))(this);
	}

	::System::Void PLCJNBHECGC(::System::Single PMNLNNGEIFM, ::OAJDNCOEIKE* DGCGOJNDKPM, ::PLLAPAIAOGF* MIAEBLIDJCH, ::UnityEngine::Vector2& GJNNMFKIMOE, ::UnityEngine::Quaternion& CGONANJKEAH, ::UnityEngine::Quaternion& GEHLDGMDLDK, ::UnityEngine::Camera* ONKALLFLEHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::OAJDNCOEIKE*, ::PLLAPAIAOGF*, ::UnityEngine::Vector2&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + AAKPDPBCKKL_PLCJNBHECGC_OFFSET))(this, PMNLNNGEIFM, DGCGOJNDKPM, MIAEBLIDJCH, GJNNMFKIMOE, CGONANJKEAH, GEHLDGMDLDK, ONKALLFLEHK);
	}

	::System::Void CDMGPLEBKBK(::MoleMole::UIAvatarGraphics* EAOIBPOIGCD, ::MoleMole::EAvatarLightChangeType BPINANLEDPD, ::System::Single MDPPNMIPDMP, ::System::String* KGACICGODJD, ::UnityEngine::Vector2 KFJBOALBCPD, ::UnityEngine::Vector2& GJNNMFKIMOE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::EAvatarLightChangeType, ::System::Single, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + AAKPDPBCKKL_CDMGPLEBKBK_OFFSET))(this, EAOIBPOIGCD, BPINANLEDPD, MDPPNMIPDMP, KGACICGODJD, KFJBOALBCPD, GJNNMFKIMOE);
	}

	::System::Void CEEKPMLKPAJ(::MoleMole::UIAvatarGraphics* EAOIBPOIGCD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*))((::PBYTE)hIl2Cpp + AAKPDPBCKKL_CEEKPMLKPAJ_OFFSET))(this, EAOIBPOIGCD);
	}

	::System::Void JPAIDCNNLLL(::OAJDNCOEIKE* DGCGOJNDKPM, ::MoleMole::UIAvatarGraphics* EAOIBPOIGCD, ::PLLAPAIAOGF* MIAEBLIDJCH, ::MoleMole::EAvatarLightChangeType BPINANLEDPD, ::System::Single MDPPNMIPDMP, ::System::String* KGACICGODJD, ::UnityEngine::Vector4 KFJBOALBCPD, ::UnityEngine::Quaternion& IGFIPLKNPIP, ::UnityEngine::Quaternion& HCMBOOBNLDE)
	{
		return ((::System::Void(*)(::PVOID, ::OAJDNCOEIKE*, ::MoleMole::UIAvatarGraphics*, ::PLLAPAIAOGF*, ::MoleMole::EAvatarLightChangeType, ::System::Single, ::System::String*, ::UnityEngine::Vector4, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + AAKPDPBCKKL_JPAIDCNNLLL_OFFSET))(this, DGCGOJNDKPM, EAOIBPOIGCD, MIAEBLIDJCH, BPINANLEDPD, MDPPNMIPDMP, KGACICGODJD, KFJBOALBCPD, IGFIPLKNPIP, HCMBOOBNLDE);
	}
};
