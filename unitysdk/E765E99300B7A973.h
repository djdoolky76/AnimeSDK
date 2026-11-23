#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/FE2C716718BC4ED1.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define E765E99300B7A973_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1CAACD0)
#define E765E99300B7A973_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1CAAC10)
#define E765E99300B7A973_ED0572B89A5EEDD9_OFFSET UNITYSDK_OFFSET(0x1CAB000)
#define E765E99300B7A973_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1CAAFB0)
#define E765E99300B7A973__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E765E99300B7A973_TypeDefinitionIndex = 9695;

class E765E99300B7A973 : public ::EFC4AEA2121EC272
{
public:
	::System::Action_1<::E68AA4EB51923C98::FE2C716718BC4ED1>* FCCD2716B1B4CDF5; // 0x80
	::E68AA4EB51923C98::FE2C716718BC4ED1 E7290AFDD3FB505C; // 0x88
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoButton* A9931896D1154377; // 0x90
	::UnityEngine::UI::Image* BE8B00C796036193; // 0x98
	::UnityEngine::UI::Image* ABE5582FFD69144C; // 0xA0
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xA8
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xB0
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0xB8
	::ABC::UI::MonoLocalizedTmp* BCF020564ECBF978; // 0xC0
	::UnityEngine::RectTransform* AA2B401D20410579; // 0xC8

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E765E99300B7A973_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E765E99300B7A973__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E765E99300B7A973_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void ED0572B89A5EEDD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E765E99300B7A973_ED0572B89A5EEDD9_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E765E99300B7A973_F6A675B119E39F53_OFFSET))(this);
	}
};
