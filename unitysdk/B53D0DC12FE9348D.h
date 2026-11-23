#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define B53D0DC12FE9348D_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x171F7F0)
#define B53D0DC12FE9348D_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x171F730)
#define B53D0DC12FE9348D_BFB1452B49A5E16C_OFFSET UNITYSDK_OFFSET(0x171FC00)
#define B53D0DC12FE9348D_E78AFC0A8C121570_OFFSET UNITYSDK_OFFSET(0x1720070)
#define B53D0DC12FE9348D_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x171FD60)
#define B53D0DC12FE9348D_ED0572B89A5EEDD9_OFFSET UNITYSDK_OFFSET(0x171FC60)
#define B53D0DC12FE9348D_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x171FBB0)
#define B53D0DC12FE9348D__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int B53D0DC12FE9348D_TypeDefinitionIndex = 682;

class B53D0DC12FE9348D : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 E5ED26F524A263E7; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_2<::B53D0DC12FE9348D*, ::System::UInt32>* A379DD2798C675AF; // 0x88
	::System::Boolean BF8EE4E447ED9E7D; // 0x90
	::System::Byte _padding1[0x7];
	::ABC::UI::MonoButton* B395ED06E2ED5AC4; // 0x98
	::UnityEngine::UI::Image* BE8B00C796036193; // 0xA0
	::UnityEngine::UI::Image* BF57BE0F7E4AE8AD; // 0xA8
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xB0
	::UnityEngine::RectTransform* EC01539571681255; // 0xB8
	::UnityEngine::RectTransform* ED25AB232599CE2F; // 0xC0
	::UnityEngine::RectTransform* E24A6B3DE46BEDF2; // 0xC8
	::UnityEngine::RectTransform* E917C818ABC29236; // 0xD0
	::ABC::UI::MonoPrefabLoader* E19EBD117C2E1644; // 0xD8
	::ABC::UI::MonoLocalizedTmp* BCF020564ECBF978; // 0xE0
	::ABC::UI::MonoLocalizedTmp* FD8F82464B7408EB; // 0xE8
	::ABC::UI::MonoLocalizedTmp* ED55DDA4ADCD3702; // 0xF0

	::System::Void E78AFC0A8C121570(::System::UInt32 B41D2EDA6E73CD0C, ::System::UInt32 B7405461A8BF59EE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + B53D0DC12FE9348D_E78AFC0A8C121570_OFFSET))(this, B41D2EDA6E73CD0C, B7405461A8BF59EE);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 AB5AD1717FCFA081, ::System::UInt32 B7405461A8BF59EE, ::System::Action_2<::B53D0DC12FE9348D*, ::System::UInt32>* B9BFD4D692E5A9AB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_2<::B53D0DC12FE9348D*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + B53D0DC12FE9348D_EC3033C0485522FB_OFFSET))(this, AB5AD1717FCFA081, B7405461A8BF59EE, B9BFD4D692E5A9AB);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B53D0DC12FE9348D_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B53D0DC12FE9348D__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B53D0DC12FE9348D_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void ED0572B89A5EEDD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B53D0DC12FE9348D_ED0572B89A5EEDD9_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B53D0DC12FE9348D_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void BFB1452B49A5E16C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B53D0DC12FE9348D_BFB1452B49A5E16C_OFFSET))(this);
	}
};
