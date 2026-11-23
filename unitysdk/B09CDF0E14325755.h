#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class BF5427325DB1DC4E;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Image; }

#define B09CDF0E14325755_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1800260)
#define B09CDF0E14325755_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x18001A0)
#define B09CDF0E14325755_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1800580)
#define B09CDF0E14325755_EF751ABE3C449E3F_OFFSET UNITYSDK_OFFSET(0x1800510)
#define B09CDF0E14325755_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x18004C0)
#define B09CDF0E14325755__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int B09CDF0E14325755_TypeDefinitionIndex = 1042;

class B09CDF0E14325755 : public ::EFC4AEA2121EC272
{
public:
	::System::Action_1<::BF5427325DB1DC4E*>* FCCD2716B1B4CDF5; // 0x80
	::BF5427325DB1DC4E* B1A36B800A60F3A6; // 0x88
	::ABC::UI::MonoButton* F8FD9EA9AE51A1CB; // 0x90
	::UnityEngine::UI::Image* ECD6CA2761B66F36; // 0x98
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xA0
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xA8
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0xB0
	::UnityEngine::UI::Image* BE8B00C796036193; // 0xB8

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B09CDF0E14325755_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B09CDF0E14325755_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::BF5427325DB1DC4E* AA56373A845C8012, ::System::Action_1<::BF5427325DB1DC4E*>* FABBF4F55603A392)
	{
		return ((::System::Void(*)(::PVOID, ::BF5427325DB1DC4E*, ::System::Action_1<::BF5427325DB1DC4E*>*))((::PBYTE)hIl2Cpp + B09CDF0E14325755_EC3033C0485522FB_OFFSET))(this, AA56373A845C8012, FABBF4F55603A392);
	}

	::System::Void EF751ABE3C449E3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B09CDF0E14325755_EF751ABE3C449E3F_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B09CDF0E14325755__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B09CDF0E14325755_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
