#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Image; }

#define FB3EBF3904D7DB71_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1FB3860)
#define FB3EBF3904D7DB71_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1FB37A0)
#define FB3EBF3904D7DB71_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1FB3BB0)
#define FB3EBF3904D7DB71_F52E921108621A5A_OFFSET UNITYSDK_OFFSET(0x1FB3B40)
#define FB3EBF3904D7DB71_F5A43A740A85420B_OFFSET UNITYSDK_OFFSET(0x1800BA0)
#define FB3EBF3904D7DB71_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1FB3AF0)
#define FB3EBF3904D7DB71__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int FB3EBF3904D7DB71_TypeDefinitionIndex = 6816;

class FB3EBF3904D7DB71 : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 B424ECCB5F808A98; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_1<::FB3EBF3904D7DB71*>* EA4CFA50969821C5; // 0x88
	::UnityEngine::UI::Image* BE8B00C796036193; // 0x90
	::ABC::UI::MonoButton* F0889B8BA5C1E1DB; // 0x98
	::UnityEngine::Animator* FFE2492AA29E76AC; // 0xA0
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xA8
	::ABC::UI::MonoLocalizedTmp* A923A2EE455304CC; // 0xB0
	::ABC::UI::MonoButton* A1B72872965160CC; // 0xB8
	::UnityEngine::UI::Image* F6D17A3F42E58D72; // 0xC0

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB3EBF3904D7DB71_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB3EBF3904D7DB71_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + FB3EBF3904D7DB71_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 EA3C9D11E469EAA2, ::System::Action_1<::FB3EBF3904D7DB71*>* BB2BDE172CA6C68F)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::FB3EBF3904D7DB71*>*))((::PBYTE)hIl2Cpp + FB3EBF3904D7DB71_EC3033C0485522FB_OFFSET))(this, EA3C9D11E469EAA2, BB2BDE172CA6C68F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB3EBF3904D7DB71__CTOR_OFFSET))(this);
	}

	::System::UInt32 F5A43A740A85420B()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FB3EBF3904D7DB71_F5A43A740A85420B_OFFSET))(this);
	}

	::System::Void F52E921108621A5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB3EBF3904D7DB71_F52E921108621A5A_OFFSET))(this);
	}
};
