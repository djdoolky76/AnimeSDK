#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A90D8925F03D45C6_BF90FC3C41D9A4B0.h"

namespace ABC::UI { class MonoAvatarIcon; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class GameObject; }

#define FF3A02F642955A04_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1E1BC40)
#define FF3A02F642955A04_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1E1C050)
#define FF3A02F642955A04__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC3F0)

inline static constexpr unsigned int FF3A02F642955A04_TypeDefinitionIndex = 9445;

class FF3A02F642955A04 : public ::A90D8925F03D45C6_BF90FC3C41D9A4B0
{
public:
	::ABC::UI::MonoPrefabLoader* A2D7189CF88A4BF9; // 0xC8
	::ABC::UI::MonoPrefabLoader* FC9894F31EDD6ADE; // 0xD0
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0xD8
	::ABC::UI::MonoLocalizedTmp* F3724038430A7C4F; // 0xE0
	::ABC::UI::MonoLocalizedTmp* ED55DDA4ADCD3702; // 0xE8
	::ABC::UI::MonoLocalizedTmp* A2425390C87E21FC; // 0xF0
	::ABC::UI::MonoLocalizedTmp* E2B7E442C152CE2D; // 0xF8
	::ABC::UI::MonoLocalizedTmp* BAC1FB72B20B5879; // 0x100
	::ABC::UI::MonoLocalizedTmp* F080DDA490FC1C56; // 0x108
	::ABC::UI::MonoLocalizedTmp* EB4C834572276BC2; // 0x110
	::UnityEngine::GameObject* A5D498E8CF8EAC75; // 0x118
	::UnityEngine::GameObject* E2BC04D5AD5025FC; // 0x120
	::ABC::UI::MonoAvatarIcon* F6D17A3F42E58D72; // 0x128
	::ABC::UI::MonoLocalizedTmp* B1C25086A8B4E4E1; // 0x130

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF3A02F642955A04__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF3A02F642955A04_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + FF3A02F642955A04_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
