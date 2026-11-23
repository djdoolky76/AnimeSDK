#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AADD5B52CC71298E.h"
#include "unitysdk/B39AAAD1233537D7/F93EF03755B8B374.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::UI { class MonoUIAnimator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define F99778176BF060BE_A70F5A8E7CDA4876_OFFSET UNITYSDK_OFFSET(0x1BE7710)
#define F99778176BF060BE_B2009E2D348DF6BD_OFFSET UNITYSDK_OFFSET(0x1BE7B20)
#define F99778176BF060BE_BD6FF93CB3A82756_OFFSET UNITYSDK_OFFSET(0x1BE7C60)
#define F99778176BF060BE_E021045ADFC55D24_OFFSET UNITYSDK_OFFSET(0x1BE7110)
#define F99778176BF060BE_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1BE74C0)
#define F99778176BF060BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE7F70)

inline static constexpr unsigned int F99778176BF060BE_TypeDefinitionIndex = 314;

class F99778176BF060BE : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::GameObject* E5F33408FC69E632; // 0x80
	::UnityEngine::UI::Image* B5AE96FC2A425DE7; // 0x88
	::ABC::UI::MonoUIAnimator* A6E0C410734A354A; // 0x90
	::UnityEngine::GameObject* AA729C9F95E44901; // 0x98
	::UnityEngine::GameObject* A4D5C3D32498E95F; // 0xA0
	::UnityEngine::RectTransform* A73409F1FD56937A; // 0xA8
	::AADD5B52CC71298E B1906D0B78B4F6CE; // 0xB0
	::B39AAAD1233537D7::F93EF03755B8B374 B7137D832ACD232A; // 0x128
	::System::Single A16D77F6B9ECC3DF; // 0x12C
	::System::Single A6322F5EAB24C603; // 0x130
	::System::Single B2BB6EFE0E88DAB6; // 0x134
	::System::Single FE59C9A65E7E885F; // 0x138
	::System::Single A6766809A2D062C0; // 0x13C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F99778176BF060BE__CTOR_OFFSET))(this);
	}

	::System::Void BD6FF93CB3A82756()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F99778176BF060BE_BD6FF93CB3A82756_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F99778176BF060BE_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void A70F5A8E7CDA4876()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F99778176BF060BE_A70F5A8E7CDA4876_OFFSET))(this);
	}

	::System::Void E021045ADFC55D24(::UnityEngine::Vector3 E46F3C856E19A4B4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + F99778176BF060BE_E021045ADFC55D24_OFFSET))(this, E46F3C856E19A4B4);
	}

	::System::Void B2009E2D348DF6BD(::AADD5B52CC71298E A4D3F13450FDBF6D)
	{
		return ((::System::Void(*)(::PVOID, ::AADD5B52CC71298E))((::PBYTE)hIl2Cpp + F99778176BF060BE_B2009E2D348DF6BD_OFFSET))(this, A4D3F13450FDBF6D);
	}
};
