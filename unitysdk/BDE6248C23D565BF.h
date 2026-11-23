#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Image; }

#define BDE6248C23D565BF_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x2025E60)
#define BDE6248C23D565BF_A7E603B0A180B598_OFFSET UNITYSDK_OFFSET(0x20261E0)
#define BDE6248C23D565BF_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x2025D90)
#define BDE6248C23D565BF_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x20262A0)
#define BDE6248C23D565BF_F050D72F0061314C_OFFSET UNITYSDK_OFFSET(0x2026140)
#define BDE6248C23D565BF_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x20260F0)
#define BDE6248C23D565BF__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int BDE6248C23D565BF_TypeDefinitionIndex = 8298;

class BDE6248C23D565BF : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 F430150110093242; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::UInt32>* A33F2F14BF4ACDB2; // 0x88
	::ABC::UI::MonoButton* BB5B7963D4514F4F; // 0x90
	::UnityEngine::UI::Image* FB9983277CD70A8C; // 0x98
	::UnityEngine::UI::Image* FB3357B578CBA81B; // 0xA0
	::UnityEngine::UI::Image* E03F0781822722CE; // 0xA8
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xB0
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xB8
	::ABC::UI::MonoLocalizedTmp* ED55DDA4ADCD3702; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE6248C23D565BF__CTOR_OFFSET))(this);
	}

	::System::UInt32 F050D72F0061314C()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE6248C23D565BF_F050D72F0061314C_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 E4B82C2D78A49512, ::System::Action_1<::System::UInt32>* A271628F61B6AA19)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDE6248C23D565BF_EC3033C0485522FB_OFFSET))(this, E4B82C2D78A49512, A271628F61B6AA19);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BDE6248C23D565BF_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void A7E603B0A180B598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE6248C23D565BF_A7E603B0A180B598_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE6248C23D565BF_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE6248C23D565BF_B950FF9810FC6646_OFFSET))(this);
	}
};
