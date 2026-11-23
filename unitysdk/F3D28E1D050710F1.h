#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/UnityEngine/Vector3.h"

class E399AD8E05B714CE;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }

#define F3D28E1D050710F1_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1AC6F60)
#define F3D28E1D050710F1_BD6FF93CB3A82756_OFFSET UNITYSDK_OFFSET(0x1AC7680)
#define F3D28E1D050710F1_E285A06F13C5F4C0_OFFSET UNITYSDK_OFFSET(0x1AC74D0)
#define F3D28E1D050710F1_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1AC7200)
#define F3D28E1D050710F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC7950)

inline static constexpr unsigned int F3D28E1D050710F1_TypeDefinitionIndex = 1935;

class F3D28E1D050710F1 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x80
	::UnityEngine::Canvas* FFBF0D1E4AF184F1; // 0x88
	::ABC::UI::MonoLocalizedTmp* FD61193A46430948; // 0x90
	::ABC::UI::MonoLocalizedTmp* BF7E955AA5631430; // 0x98
	::ABC::UI::MonoLocalizedTmp* F9F4F4E59F0E6AD7; // 0xA0
	::UnityEngine::GameObject* EB8F865E3A039267; // 0xA8
	::UnityEngine::GameObject* FAD30EC3A6972569; // 0xB0
	::System::Single A16D77F6B9ECC3DF; // 0xB8
	::System::Single A6322F5EAB24C603; // 0xBC
	::System::Single B2BB6EFE0E88DAB6; // 0xC0
	::System::Single FE59C9A65E7E885F; // 0xC4
	::System::Single A6766809A2D062C0; // 0xC8
	::System::Single B10A3EAB36A2B74F; // 0xCC

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3D28E1D050710F1_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3D28E1D050710F1__CTOR_OFFSET))(this);
	}

	::System::Void BD6FF93CB3A82756(::UnityEngine::Vector3 EB211B01816ACA79)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + F3D28E1D050710F1_BD6FF93CB3A82756_OFFSET))(this, EB211B01816ACA79);
	}

	::System::Void A1E97155B145443C(::E399AD8E05B714CE* E3B4E724A7B65E2A)
	{
		return ((::System::Void(*)(::PVOID, ::E399AD8E05B714CE*))((::PBYTE)hIl2Cpp + F3D28E1D050710F1_A1E97155B145443C_OFFSET))(this, E3B4E724A7B65E2A);
	}

	::System::Void E285A06F13C5F4C0(::System::Single BDDF0F6C01956F38, ::System::Single F847F2FF9263EC32)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + F3D28E1D050710F1_E285A06F13C5F4C0_OFFSET))(this, BDDF0F6C01956F38, F847F2FF9263EC32);
	}
};
