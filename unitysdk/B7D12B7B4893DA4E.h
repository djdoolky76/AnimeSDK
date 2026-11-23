#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/AD61077CFCBEFAEA.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define B7D12B7B4893DA4E_E79BBDBCEB78A49A_OFFSET UNITYSDK_OFFSET(0x20ECC30)
#define B7D12B7B4893DA4E_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x20ECF40)
#define B7D12B7B4893DA4E_F1C051A701EF3C28_OFFSET UNITYSDK_OFFSET(0x20ECCF0)
#define B7D12B7B4893DA4E_F52E921108621A5A_OFFSET UNITYSDK_OFFSET(0x20ECEB0)
#define B7D12B7B4893DA4E__CTOR_OFFSET UNITYSDK_OFFSET(0x20ECFC0)

inline static constexpr unsigned int B7D12B7B4893DA4E_TypeDefinitionIndex = 8721;

class B7D12B7B4893DA4E : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoLocalizedTmp* EB48AEAEA8578A30; // 0x80
	::ABC::UI::MonoLocalizedTmp* ADDA9F63196A3B7E; // 0x88
	::ABC::UI::MonoLocalizedTmp* A5003C47AA8FAC78; // 0x90
	::UnityEngine::UI::Image* F2168C418E4C8EBF; // 0x98
	::UnityEngine::UI::Image* A16C43E1A3030C80; // 0xA0
	::UnityEngine::UI::Image* FB3357B578CBA81B; // 0xA8
	::ABC::UI::MonoButton* A534F54BBE4358D8; // 0xB0
	::UnityEngine::Animator* A6E0C410734A354A; // 0xB8
	::UnityEngine::GameObject* F22806D3620BC8BB; // 0xC0
	::System::Single A035DE519A55BC6A; // 0xC8
	::System::Single BE03F1400FEF35BC; // 0xCC
	::System::Action* FCE433A2B55AAAB6; // 0xD0
	::System::Single AC95F3725BD0E7DC; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7D12B7B4893DA4E__CTOR_OFFSET))(this);
	}

	::System::String* E79BBDBCEB78A49A(::System::String* E502B9F02F0B35F2, ::System::String* A42850AFEBC3EBA3)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B7D12B7B4893DA4E_E79BBDBCEB78A49A_OFFSET))(this, E502B9F02F0B35F2, A42850AFEBC3EBA3);
	}

	::System::Void F52E921108621A5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7D12B7B4893DA4E_F52E921108621A5A_OFFSET))(this);
	}

	::System::Void F1C051A701EF3C28(::AD61077CFCBEFAEA E502B9F02F0B35F2, ::AD61077CFCBEFAEA B7C54018E9F09B99, ::System::String* A42850AFEBC3EBA3)
	{
		return ((::System::Void(*)(::PVOID, ::AD61077CFCBEFAEA, ::AD61077CFCBEFAEA, ::System::String*))((::PBYTE)hIl2Cpp + B7D12B7B4893DA4E_F1C051A701EF3C28_OFFSET))(this, E502B9F02F0B35F2, B7C54018E9F09B99, A42850AFEBC3EBA3);
	}

	::System::Void EC22F59F2C588175(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + B7D12B7B4893DA4E_EC22F59F2C588175_OFFSET))(this, EB5670302F34D4B7);
	}
};
