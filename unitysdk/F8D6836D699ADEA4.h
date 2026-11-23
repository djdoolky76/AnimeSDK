#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A916C3A9658A83A2.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define F8D6836D699ADEA4_B09E35DE5AFC798A_OFFSET UNITYSDK_OFFSET(0x1E42D40)
#define F8D6836D699ADEA4_EA1EE503010D3F18_OFFSET UNITYSDK_OFFSET(0x1E42F50)
#define F8D6836D699ADEA4_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1E43120)
#define F8D6836D699ADEA4_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1E42EC0)
#define F8D6836D699ADEA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1E431F0)

inline static constexpr unsigned int F8D6836D699ADEA4_TypeDefinitionIndex = 9508;

class F8D6836D699ADEA4 : public ::A916C3A9658A83A2
{
public:
	::ABC::UI::MonoLocalizedTmp* FE1916527DE8F777; // 0x48
	::ABC::UI::MonoLocalizedTmp* AA34D3B0FCAD1A27; // 0x50
	::UnityEngine::UI::Image* BC51D2AB34892C8F; // 0x58
	::UnityEngine::UI::Image* F86F5FB330D2A239; // 0x60

	::System::Void EA1EE503010D3F18(::System::UInt32 F238C40ED9FEB33C, ::System::UInt32 BC840A019469B020)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + F8D6836D699ADEA4_EA1EE503010D3F18_OFFSET))(this, F238C40ED9FEB33C, BC840A019469B020);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 F238C40ED9FEB33C, ::System::UInt32 BC840A019469B020, ::UnityEngine::Transform* EFE497ABF6BF98D8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + F8D6836D699ADEA4_EC3033C0485522FB_OFFSET))(this, F238C40ED9FEB33C, BC840A019469B020, EFE497ABF6BF98D8);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8D6836D699ADEA4_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + F8D6836D699ADEA4__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}

	::System::Void B09E35DE5AFC798A(::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + F8D6836D699ADEA4_B09E35DE5AFC798A_OFFSET))(this, F9E6A5ABE3F78299);
	}
};
