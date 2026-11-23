#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class B916BB7AD5B79707;
class F59B688F7CEDC9BA;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }

#define BE0558FD40A994B0_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1A751F0)
#define BE0558FD40A994B0_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1A755C0)
#define BE0558FD40A994B0_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1A753C0)
#define BE0558FD40A994B0_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1A75410)
#define BE0558FD40A994B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75A10)

inline static constexpr unsigned int BE0558FD40A994B0_TypeDefinitionIndex = 1817;

class BE0558FD40A994B0 : public ::EFC4AEA2121EC272
{
public:
	::System::Collections::Generic::List_1<::B916BB7AD5B79707*>* FAFB7481D1B5DF21; // 0x80
	::ABC::UI::MonoPrefabLoader* FE91145832D1C8C9; // 0x88
	::UnityEngine::Animator* B8AF959817F0F0F7; // 0x90
	::UnityEngine::RectTransform* B0F3A9BE5DD9A7C8; // 0x98
	::ABC::UI::MonoLocalizedTmp* F2787C31B1D3683F; // 0xA0

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BE0558FD40A994B0_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE0558FD40A994B0__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE0558FD40A994B0_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::F59B688F7CEDC9BA* B29880F033C1F232)
	{
		return ((::System::Void(*)(::PVOID, ::F59B688F7CEDC9BA*))((::PBYTE)hIl2Cpp + BE0558FD40A994B0_EC3033C0485522FB_OFFSET))(this, B29880F033C1F232);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE0558FD40A994B0_FCC7443573DD0222_OFFSET))(this);
	}
};
