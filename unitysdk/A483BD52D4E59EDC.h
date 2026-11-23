#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoItemIcon; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoScrollRect; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define A483BD52D4E59EDC_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1EE82B0)
#define A483BD52D4E59EDC_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1EE88F0)
#define A483BD52D4E59EDC_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1EE8890)
#define A483BD52D4E59EDC__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A483BD52D4E59EDC_TypeDefinitionIndex = 7420;

class A483BD52D4E59EDC : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 F430150110093242; // 0x80
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoPrefabLoader* A3C9399CC9606515; // 0x88
	::ABC::UI::MonoUIAutoView* F09612D83CC7C2EE; // 0x90
	::ABC::UI::MonoPrefabLoader* B94B8E513ED6A4A2; // 0x98
	::ABC::UI::MonoScrollRect* EA9E8334953A3AEC; // 0xA0
	::ABC::UI::MonoLocalizedTmp* A0FB631C9CD77603; // 0xA8
	::ABC::UI::MonoLocalizedTmp* FF847BB7C28C65D1; // 0xB0
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xB8
	::ABC::UI::MonoLocalizedTmp* ED55DDA4ADCD3702; // 0xC0
	::ABC::UI::MonoLocalizedTmp* AB5A415B02A4D0E1; // 0xC8
	::ABC::UI::MonoLocalizedTmp* E2DD755B74A05F57; // 0xD0
	::E6350CA2988BAC74* B272BCB309F88A17; // 0xD8
	::ABC::UI::MonoLocalizedTmp* E3007966F1163686; // 0xE0
	::ABC::UI::MonoLocalizedTmp* ED787C254FF3A1D2; // 0xE8
	::UnityEngine::UI::Image* F6D17A3F42E58D72; // 0xF0
	::ABC::UI::MonoPrefabLoader* B5126C2F89B61FF9; // 0xF8
	::UnityEngine::UI::Image* ACAA20157584DD72; // 0x100
	::UnityEngine::GameObject* A8E54C6DEC161BEC; // 0x108
	::UnityEngine::GameObject* E26E969D1AC6B3D5; // 0x110
	::UnityEngine::UI::Image* A2BF3984F857BC5A; // 0x118
	::ABC::UI::MonoItemIcon* B0EC4F0CCF2E2B6A; // 0x120

	::System::Void EC3033C0485522FB(::System::UInt32 E4B82C2D78A49512, ::System::UInt32 AEC35CB3525CB5BC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + A483BD52D4E59EDC_EC3033C0485522FB_OFFSET))(this, E4B82C2D78A49512, AEC35CB3525CB5BC);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A483BD52D4E59EDC__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A483BD52D4E59EDC_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A483BD52D4E59EDC_F6A675B119E39F53_OFFSET))(this);
	}
};
