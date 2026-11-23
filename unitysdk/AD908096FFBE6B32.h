#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine::UI { class Image; }

#define AD908096FFBE6B32_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1737BE0)
#define AD908096FFBE6B32_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1737EC0)
#define AD908096FFBE6B32__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int AD908096FFBE6B32_TypeDefinitionIndex = 728;

class AD908096FFBE6B32 : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::UI::Image* AC6E3C36BF36F451; // 0x80
	::UnityEngine::UI::Image* A65AFDC8BF813715; // 0x88
	::UnityEngine::UI::Image* FBA3CDFA46DB2E91; // 0x90
	::ABC::UI::MonoLocalizedTmp* F4552A4BB83E2E82; // 0x98
	::ABC::UI::MonoLocalizedTmp* AD9E3A2868335156; // 0xA0
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xA8
	::ABC::UI::MonoLocalizedTmp* E052EAE4D71FAE56; // 0xB0
	::ABC::UI::MonoLocalizedTmp* B96C00A34B00DF79; // 0xB8
	::UnityEngine::UI::Image* BCB26428FCE0CF91; // 0xC0

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD908096FFBE6B32_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD908096FFBE6B32__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + AD908096FFBE6B32_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
