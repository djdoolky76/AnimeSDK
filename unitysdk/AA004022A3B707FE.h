#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/quaternion.h"
#include "unitysdk/UnityEngine/Splines/BezierKnot.h"

#define AA004022A3B707FE_A17572499E957F8D_1_OFFSET UNITYSDK_OFFSET(0x404BE10)
#define AA004022A3B707FE_A452BADDBDD62FC4_1_OFFSET UNITYSDK_OFFSET(0x404BDF0)
#define AA004022A3B707FE_AD92019ECFDB6CCA_OFFSET UNITYSDK_OFFSET(0x404B470)
#define AA004022A3B707FE_B07B9CA522DE68FF_1_OFFSET UNITYSDK_OFFSET(0x404B410)
#define AA004022A3B707FE_B07B9CA522DE68FF_OFFSET UNITYSDK_OFFSET(0x404B1F0)
#define AA004022A3B707FE_B120D0D6ED3CE76F_OFFSET UNITYSDK_OFFSET(0x404ADB0)
#define AA004022A3B707FE_B38FD36402996667_OFFSET UNITYSDK_OFFSET(0x404AAA0)
#define AA004022A3B707FE_F37ADA4B673AD82A_OFFSET UNITYSDK_OFFSET(0x404BD30)

inline static constexpr unsigned int AA004022A3B707FE_TypeDefinitionIndex = 20648;

class AA004022A3B707FE : public ::System::Object
{
public:
	static ::Unity::Mathematics::quaternion AD92019ECFDB6CCA(::Unity::Mathematics::float3 F142F71C449A09B4, ::Unity::Mathematics::float3 B41A0C11273E0D9E)
	{
		return ((::Unity::Mathematics::quaternion(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + AA004022A3B707FE_AD92019ECFDB6CCA_OFFSET))(F142F71C449A09B4, B41A0C11273E0D9E);
	}

	static ::Unity::Mathematics::float3 B120D0D6ED3CE76F(::Unity::Mathematics::float3 E4284B0EF5056E98, ::Unity::Mathematics::float3 A0973CE93A72DED1, ::Unity::Mathematics::float3 B318CC7627FE11D4, ::System::Single B914710478B461FE)
	{
		return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::System::Single))((::PBYTE)hIl2Cpp + AA004022A3B707FE_B120D0D6ED3CE76F_OFFSET))(E4284B0EF5056E98, A0973CE93A72DED1, B318CC7627FE11D4, B914710478B461FE);
	}

	static ::System::Int32 A452BADDBDD62FC4_1(::System::Int32 B48C66E5FB2449C6, ::System::Int32 A70E5C58B2C7A692, ::System::Boolean BD483182E761F753)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AA004022A3B707FE_A452BADDBDD62FC4_1_OFFSET))(B48C66E5FB2449C6, A70E5C58B2C7A692, BD483182E761F753);
	}

	static ::Unity::Mathematics::float3 B07B9CA522DE68FF(::UnityEngine::Splines::BezierKnot BC546FFFB0A5B7A6, ::UnityEngine::Splines::BezierKnot A41067CFE0E0FB08)
	{
		return ((::Unity::Mathematics::float3(*)(::UnityEngine::Splines::BezierKnot, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + AA004022A3B707FE_B07B9CA522DE68FF_OFFSET))(BC546FFFB0A5B7A6, A41067CFE0E0FB08);
	}

	static ::Unity::Mathematics::float3 B07B9CA522DE68FF_1(::Unity::Mathematics::float3 FF9A37DE513AC35B, ::Unity::Mathematics::float3 A41067CFE0E0FB08)
	{
		return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + AA004022A3B707FE_B07B9CA522DE68FF_1_OFFSET))(FF9A37DE513AC35B, A41067CFE0E0FB08);
	}

	static ::System::Int32 F37ADA4B673AD82A(::System::Single A96B867D8BBB8B00, ::System::Int32 F42689B146774BE7)
	{
		return ((::System::Int32(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + AA004022A3B707FE_F37ADA4B673AD82A_OFFSET))(A96B867D8BBB8B00, F42689B146774BE7);
	}

	static ::UnityEngine::Splines::BezierKnot B38FD36402996667(::Unity::Mathematics::float3 EB211B01816ACA79, ::Unity::Mathematics::float3 E4284B0EF5056E98, ::Unity::Mathematics::float3 B318CC7627FE11D4, ::Unity::Mathematics::float3 B41A0C11273E0D9E, ::System::Single B914710478B461FE)
	{
		return ((::UnityEngine::Splines::BezierKnot(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::System::Single))((::PBYTE)hIl2Cpp + AA004022A3B707FE_B38FD36402996667_OFFSET))(EB211B01816ACA79, E4284B0EF5056E98, B318CC7627FE11D4, B41A0C11273E0D9E, B914710478B461FE);
	}

	static ::System::Int32 A17572499E957F8D_1(::System::Int32 B48C66E5FB2449C6, ::System::Int32 A70E5C58B2C7A692, ::System::Boolean BD483182E761F753)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AA004022A3B707FE_A17572499E957F8D_1_OFFSET))(B48C66E5FB2449C6, A70E5C58B2C7A692, BD483182E761F753);
	}
};
