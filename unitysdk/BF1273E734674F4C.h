#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }

#define BF1273E734674F4C_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1AFB690)
#define BF1273E734674F4C_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1AFB640)
#define BF1273E734674F4C_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1AFB8B0)
#define BF1273E734674F4C_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1AFB900)
#define BF1273E734674F4C__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int BF1273E734674F4C_TypeDefinitionIndex = 224;

class BF1273E734674F4C : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoPrefabLoader* B89D48E474D8AD4E; // 0x80
	::ABC::UI::MonoLocalizedTmp* A0FB631C9CD77603; // 0x88
	::UnityEngine::RectTransform* E917C818ABC29236; // 0x90
	::ABC::UI::MonoButton* AD3804919DBFC4AD; // 0x98

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF1273E734674F4C_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF1273E734674F4C_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF1273E734674F4C__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF1273E734674F4C_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BF1273E734674F4C_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
