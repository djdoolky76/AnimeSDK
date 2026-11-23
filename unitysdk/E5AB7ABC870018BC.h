#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoAvatarIcon; }
namespace ABC::UI { class MonoBaseIcon; }
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoItemIcon; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define E5AB7ABC870018BC_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1FE9520)
#define E5AB7ABC870018BC_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1FE9410)
#define E5AB7ABC870018BC_E99D52DD5D673F19_OFFSET UNITYSDK_OFFSET(0x1FE9E30)
#define E5AB7ABC870018BC_EA5D99B752F69A12_OFFSET UNITYSDK_OFFSET(0x1FE9DC0)
#define E5AB7ABC870018BC_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1FE9C10)
#define E5AB7ABC870018BC_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1FE9C60)
#define E5AB7ABC870018BC__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E5AB7ABC870018BC_TypeDefinitionIndex = 8154;

class E5AB7ABC870018BC : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 FEA956F40471CA68; // 0x80
	::System::Byte _padding0[0x4];
	::UnityEngine::Material* EC1EA995A7FB0693; // 0x88
	::System::Action* A3BEB83A4C457383; // 0x90
	::System::Action_1<::System::UInt32>* FD54BB1F23F30B54; // 0x98
	::ABC::UI::MonoButton* A31112E5A9B38461; // 0xA0
	::ABC::UI::MonoUIAutoView* A3425CCA5A56B7C3; // 0xA8
	::UnityEngine::UI::Image* E80054E98C7F7AB8; // 0xB0
	::UnityEngine::UI::Image* BE8B00C796036193; // 0xB8
	::UnityEngine::UI::Image* FCB67C65A27AE402; // 0xC0
	::ABC::UI::MonoPrefabLoader* E4D6224EC26DE670; // 0xC8
	::UnityEngine::RectTransform* FEF28729CE103256; // 0xD0
	::ABC::UI::MonoPrefabLoader* F4ACC7E0A38CD59C; // 0xD8
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0xE0
	::ABC::UI::MonoLocalizedTmp* F3724038430A7C4F; // 0xE8
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xF0
	::ABC::UI::MonoItemIcon* BED60F4B9F013455; // 0xF8
	::ABC::UI::MonoItemIcon* BBD3648AB672CC04; // 0x100
	::ABC::UI::MonoItemIcon* F375E5774ED9D8D9; // 0x108
	::UnityEngine::RectTransform* BBC588864B45718D; // 0x110
	::UnityEngine::RectTransform* EC315308B949A3EF; // 0x118
	::ABC::UI::MonoBaseIcon* FFB86D441C13E516; // 0x120
	::ABC::UI::MonoBaseIcon* F52DE8B5F3FD253C; // 0x128
	::ABC::UI::MonoBaseIcon* A21E60BC332EE850; // 0x130
	::ABC::UI::MonoAvatarIcon* A540532D01ADA5F3; // 0x138
	::ABC::UI::MonoLocalizedTmp* ED678FBAFB4C83C7; // 0x140
	::UnityEngine::RectTransform* B4E6AE303DB18B24; // 0x148
	::ABC::UI::MonoButton* ADAA2CE94069719D; // 0x150
	::UnityEngine::UI::Image* E026843E67BEDF3D; // 0x158
	::ABC::UI::MonoButton* BBDA947C392BA729; // 0x160

	::System::Void E99D52DD5D673F19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5AB7ABC870018BC_E99D52DD5D673F19_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5AB7ABC870018BC__CTOR_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5AB7ABC870018BC_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E5AB7ABC870018BC_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void EA5D99B752F69A12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5AB7ABC870018BC_EA5D99B752F69A12_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5AB7ABC870018BC_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5AB7ABC870018BC_F6A675B119E39F53_OFFSET))(this);
	}
};
