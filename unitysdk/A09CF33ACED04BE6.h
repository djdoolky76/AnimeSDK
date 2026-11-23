#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB07E24B584983C1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

class E35FC60863171F07;
namespace ABC::Splines::CatmullRom { class Spline; }

#define A09CF33ACED04BE6_A3C2F655C6B4F5E2_OFFSET UNITYSDK_OFFSET(0x18F9540)
#define A09CF33ACED04BE6_A73875EB89A0BA67_OFFSET UNITYSDK_OFFSET(0x18F9960)
#define A09CF33ACED04BE6_AFD5178090BD77F2_OFFSET UNITYSDK_OFFSET(0x18F8E90)
#define A09CF33ACED04BE6_E3EDC2A443314E9E_OFFSET UNITYSDK_OFFSET(0x18F8D10)
#define A09CF33ACED04BE6_E46F0F16C063D636_OFFSET UNITYSDK_OFFSET(0x18F9610)
#define A09CF33ACED04BE6_FBC98587AC913EDC_OFFSET UNITYSDK_OFFSET(0x18F8B60)
#define A09CF33ACED04BE6__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A09CF33ACED04BE6_TypeDefinitionIndex = 1474;

class A09CF33ACED04BE6 : public ::AB07E24B584983C1
{
public:
	::E35FC60863171F07* F3597127D1687748; // 0x50
	::ABC::Splines::CatmullRom::Spline* B9850AFF3DBCC0D9; // 0x58
	::System::Single E0223101135EFF19; // 0x60
	::UnityEngine::Vector3 A114A3CD7980EEDC; // 0x64
	::UnityEngine::Quaternion BD62374071A4644F; // 0x70
	::UnityEngine::Vector3 B18E0520EF27D9C8; // 0x80
	::UnityEngine::Quaternion E8DFD419CD7A8A30; // 0x8C

	::System::Void E46F0F16C063D636(::E12F55A5FCCCF1EC EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + A09CF33ACED04BE6_E46F0F16C063D636_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void AFD5178090BD77F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A09CF33ACED04BE6_AFD5178090BD77F2_OFFSET))(this);
	}

	::System::Void E3EDC2A443314E9E(::System::Single E6F17CEBE1C32B29, ::UnityEngine::Vector3& F643CAC84B2D63EA, ::UnityEngine::Quaternion& A242C4F634A9C509)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + A09CF33ACED04BE6_E3EDC2A443314E9E_OFFSET))(this, E6F17CEBE1C32B29, F643CAC84B2D63EA, A242C4F634A9C509);
	}

	::System::Void A3C2F655C6B4F5E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A09CF33ACED04BE6_A3C2F655C6B4F5E2_OFFSET))(this);
	}

	::System::Void FBC98587AC913EDC(::UnityEngine::Vector3& F643CAC84B2D63EA, ::UnityEngine::Quaternion& A242C4F634A9C509)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + A09CF33ACED04BE6_FBC98587AC913EDC_OFFSET))(this, F643CAC84B2D63EA, A242C4F634A9C509);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A09CF33ACED04BE6__CTOR_OFFSET))(this);
	}

	::System::Boolean A73875EB89A0BA67(::ABC::Splines::CatmullRom::Spline*& F03E0BDCBABB08A2)
	{
		return ((::System::Boolean(*)(::PVOID, ::ABC::Splines::CatmullRom::Spline*&))((::PBYTE)hIl2Cpp + A09CF33ACED04BE6_A73875EB89A0BA67_OFFSET))(this, F03E0BDCBABB08A2);
	}
};
