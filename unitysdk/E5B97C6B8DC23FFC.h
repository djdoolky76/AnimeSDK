#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class EBBF88E07D9EE9CB;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define E5B97C6B8DC23FFC_A52BBD19E40768FB_OFFSET UNITYSDK_OFFSET(0x1B1EA50)
#define E5B97C6B8DC23FFC_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1B1E3E0)
#define E5B97C6B8DC23FFC_AB604BCA660456AD_OFFSET UNITYSDK_OFFSET(0x1B1EAD0)
#define E5B97C6B8DC23FFC_AD24BCF6091E6192_OFFSET UNITYSDK_OFFSET(0x1B1E7E0)
#define E5B97C6B8DC23FFC_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1B1EB50)
#define E5B97C6B8DC23FFC_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1B1E720)
#define E5B97C6B8DC23FFC_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1B1E770)
#define E5B97C6B8DC23FFC_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1B1E990)
#define E5B97C6B8DC23FFC__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E5B97C6B8DC23FFC_TypeDefinitionIndex = 2102;

class E5B97C6B8DC23FFC : public ::EFC4AEA2121EC272
{
public:
	::EBBF88E07D9EE9CB* F94D8F4F95DB21FE; // 0x80
	::System::Action_1<::System::UInt32>* FCCD2716B1B4CDF5; // 0x88
	::UnityEngine::UI::Image* E12728AF64A21FE4; // 0x90
	::UnityEngine::UI::Image* BF57BE0F7E4AE8AD; // 0x98
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xA0
	::UnityEngine::UI::Image* A080A6DB9EEA68D1; // 0xA8
	::UnityEngine::UI::Image* FD232F0E689E7430; // 0xB0
	::UnityEngine::RectTransform* AF078699C78251E9; // 0xB8
	::ABC::UI::MonoLocalizedTmp* F5383DC1060E3788; // 0xC0
	::ABC::UI::MonoLocalizedTmp* FD8F82464B7408EB; // 0xC8
	::ABC::UI::MonoButton* E504C1A4882D75F4; // 0xD0
	::UnityEngine::RectTransform* E917C818ABC29236; // 0xD8

	::System::Void AB604BCA660456AD(::System::Boolean F5A2E46EF958F6C8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E5B97C6B8DC23FFC_AB604BCA660456AD_OFFSET))(this, F5A2E46EF958F6C8);
	}

	::System::Void EC3033C0485522FB(::EBBF88E07D9EE9CB* E4D7148C011B705E, ::System::Action_1<::System::UInt32>* FABBF4F55603A392)
	{
		return ((::System::Void(*)(::PVOID, ::EBBF88E07D9EE9CB*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + E5B97C6B8DC23FFC_EC3033C0485522FB_OFFSET))(this, E4D7148C011B705E, FABBF4F55603A392);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5B97C6B8DC23FFC_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A52BBD19E40768FB(::System::Boolean FD96BCA2122A7513)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E5B97C6B8DC23FFC_A52BBD19E40768FB_OFFSET))(this, FD96BCA2122A7513);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E5B97C6B8DC23FFC_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void AD24BCF6091E6192()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5B97C6B8DC23FFC_AD24BCF6091E6192_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5B97C6B8DC23FFC_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5B97C6B8DC23FFC__CTOR_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5B97C6B8DC23FFC_FCC7443573DD0222_OFFSET))(this);
	}
};
