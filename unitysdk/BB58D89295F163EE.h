#pragma once
#include "unitysdk/unitysdk.h"

class B692F76900AB572E;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define BB58D89295F163EE_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x170F300)
#define BB58D89295F163EE_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x170F230)
#define BB58D89295F163EE_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x170F790)
#define BB58D89295F163EE_EF7F6C1A68729166_OFFSET UNITYSDK_OFFSET(0x170F710)
#define BB58D89295F163EE_F14BEFCB596EE4D7_OFFSET UNITYSDK_OFFSET(0x170F6A0)
#define BB58D89295F163EE_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x170F650)
#define BB58D89295F163EE__CTOR_OFFSET UNITYSDK_OFFSET(0x170F8E0)

inline static constexpr unsigned int BB58D89295F163EE_TypeDefinitionIndex = 657;

class BB58D89295F163EE
{
public:
	::System::Action_1<::System::UInt32>* E22F5ADE7C6A547A; // 0x90
	::System::UInt32 BC91EA3DBDC99A4B; // 0x98
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoButton* A12288B046157B63; // 0xA0
	::UnityEngine::UI::Image* E61854241DEE2ACA; // 0xA8
	::ABC::UI::MonoUIAutoView* F7FDEFEB8F3A563E; // 0xB0
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xB8
	::ABC::UI::MonoLocalizedTmp* F2A7B976E82BD438; // 0xC0
	::ABC::UI::MonoLocalizedTmp* AB486C2C603DD338; // 0xC8
	::ABC::UI::MonoLocalizedTmp* B75BAEB30FDE56D9; // 0xD0
	::ABC::UI::MonoLocalizedTmp* BD7A2B80F1636F94; // 0xD8
	::UnityEngine::RectTransform* E207E1BD3FD85B6E; // 0xE0
	::UnityEngine::UI::Image* E63B75103AC028DE; // 0xE8

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB58D89295F163EE_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void EF7F6C1A68729166(::System::Action_1<::System::UInt32>* B73FA1C41E6A7981)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BB58D89295F163EE_EF7F6C1A68729166_OFFSET))(this, B73FA1C41E6A7981);
	}

	::System::Void BFCEE111278C4278(::B692F76900AB572E* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::B692F76900AB572E*))((::PBYTE)hIl2Cpp + BB58D89295F163EE_BFCEE111278C4278_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB58D89295F163EE__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BB58D89295F163EE_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB58D89295F163EE_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void F14BEFCB596EE4D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB58D89295F163EE_F14BEFCB596EE4D7_OFFSET))(this);
	}
};
