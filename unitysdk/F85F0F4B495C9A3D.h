#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoItemIcon; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoScrollRect; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }

#define F85F0F4B495C9A3D_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1E38C80)
#define F85F0F4B495C9A3D_AFF6FCDB9A1621C3_OFFSET UNITYSDK_OFFSET(0x1E390C0)
#define F85F0F4B495C9A3D_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1E39060)
#define F85F0F4B495C9A3D__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F85F0F4B495C9A3D_TypeDefinitionIndex = 9510;

class F85F0F4B495C9A3D : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoPrefabLoader* A3C9399CC9606515; // 0x80
	::UnityEngine::RectTransform* FE41BE3D62172500; // 0x88
	::ABC::UI::MonoUIAutoView* F09612D83CC7C2EE; // 0x90
	::ABC::UI::MonoPrefabLoader* B72946148E6636F4; // 0x98
	::ABC::UI::MonoScrollRect* EA9E8334953A3AEC; // 0xA0
	::ABC::UI::MonoLocalizedTmp* A0FB631C9CD77603; // 0xA8
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xB0
	::ABC::UI::MonoLocalizedTmp* F11E3D19799184FE; // 0xB8
	::ABC::UI::MonoLocalizedTmp* E9341508F63BB9DD; // 0xC0
	::E6350CA2988BAC74* B80A445FCD936CAE; // 0xC8
	::ABC::UI::MonoItemIcon* BE8B00C796036193; // 0xD0

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F85F0F4B495C9A3D_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F85F0F4B495C9A3D__CTOR_OFFSET))(this);
	}

	::System::Void AFF6FCDB9A1621C3(::System::UInt32 E969570C9211ADFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F85F0F4B495C9A3D_AFF6FCDB9A1621C3_OFFSET))(this, E969570C9211ADFA);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F85F0F4B495C9A3D_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
