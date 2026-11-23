#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F57ADAF85E174AF3.h"
#include "unitysdk/FAD7E526D2841BDA.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
class F62500AB19DCB4BF;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define ECCB2407ACD5C656_A68574D035753F80_OFFSET UNITYSDK_OFFSET(0x1CDD9D0)
#define ECCB2407ACD5C656_BF4EEFA752089CA2_OFFSET UNITYSDK_OFFSET(0x1CDD560)
#define ECCB2407ACD5C656_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1CDDC90)
#define ECCB2407ACD5C656__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDDE80)
#define ECCB2407ACD5C656__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDEC0)

inline static constexpr unsigned int ECCB2407ACD5C656_TypeDefinitionIndex = 9821;

class ECCB2407ACD5C656 : public ::F57ADAF85E174AF3
{
public:
	static ::System::Single* StaticGet_B52720D03E146FA3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ECCB2407ACD5C656_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::ABC::UI::MonoPrefabLoader* A497240DC8355001; // 0x168
	::ABC::UI::MonoPrefabLoader* AA52B09A2D28DB8A; // 0x170
	::ABC::UI::MonoPrefabLoader* BE6052511B7E1A18; // 0x178
	::ABC::UI::MonoPrefabLoader* BE04963D646E8D74; // 0x180
	::ABC::UI::MonoPrefabLoader* E984C2945F79CA84; // 0x188
	::ABC::UI::MonoPrefabLoader* AAFAF219CFB40DC0; // 0x190
	::UnityEngine::GameObject* FE5251A2982B1425; // 0x198
	::UnityEngine::GameObject* AFE907B7A665C0F4; // 0x1A0
	::UnityEngine::GameObject* B95B288E9F7319AC; // 0x1A8
	::UnityEngine::GameObject* AE83AA0ADAB2EB6E; // 0x1B0
	::ABC::UI::MonoLocalizedTmp* E0D25BCC247F3EC1; // 0x1B8
	::System::Collections::Generic::List_1<::F62500AB19DCB4BF*>* BC017EC6D7A5AEA8; // 0x1C0
	::System::Collections::Generic::List_1<::F62500AB19DCB4BF*>* F55514F3B5D68D3B; // 0x1C8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECCB2407ACD5C656__CCTOR_OFFSET))();
	}

	::System::Void A68574D035753F80(::AB642D1382756991* E3E3158AF5700E52, ::AB642D1382756991* FC8D599BECC74862)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + ECCB2407ACD5C656_A68574D035753F80_OFFSET))(this, E3E3158AF5700E52, FC8D599BECC74862);
	}

	::System::Void EC3033C0485522FB(::FAD7E526D2841BDA ACDE58E97E37D13C, ::AB642D1382756991* E3E3158AF5700E52, ::UnityEngine::Vector2 A7D010719A57D5B4, ::AB642D1382756991* FC8D599BECC74862)
	{
		return ((::System::Void(*)(::PVOID, ::FAD7E526D2841BDA, ::AB642D1382756991*, ::UnityEngine::Vector2, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + ECCB2407ACD5C656_EC3033C0485522FB_OFFSET))(this, ACDE58E97E37D13C, E3E3158AF5700E52, A7D010719A57D5B4, FC8D599BECC74862);
	}

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + ECCB2407ACD5C656__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}

	::System::Void BF4EEFA752089CA2(::UnityEngine::Vector3 A7D010719A57D5B4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECCB2407ACD5C656_BF4EEFA752089CA2_OFFSET))(this, A7D010719A57D5B4);
	}
};
