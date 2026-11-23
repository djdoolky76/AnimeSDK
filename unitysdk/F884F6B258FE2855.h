#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float2.h"
#include "unitysdk/Unity/Mathematics/float3.h"

namespace UnityEngine::Splines { class Spline; }

#define F884F6B258FE2855_A2B060061E454B9E_OFFSET UNITYSDK_OFFSET(0x3D7B8B0)
#define F884F6B258FE2855_A2FAD9BE13B2E793_1_OFFSET UNITYSDK_OFFSET(0x3D7BA80)
#define F884F6B258FE2855_A2FAD9BE13B2E793_OFFSET UNITYSDK_OFFSET(0x3D7BDF0)
#define F884F6B258FE2855_A7D640AC946C9811_OFFSET UNITYSDK_OFFSET(0x3D7C960)
#define F884F6B258FE2855_E70CE57AA57E72D8_OFFSET UNITYSDK_OFFSET(0x3D7C8D0)

inline static constexpr unsigned int F884F6B258FE2855_TypeDefinitionIndex = 18795;

class F884F6B258FE2855 : public ::System::Object
{
public:
	static ::System::Void A2FAD9BE13B2E793(::System::Boolean EEC4CC071C58D3A7, ::System::Single B1CF404A5B8160C9, ::System::Boolean FEE3703AF6209BC0, ::Unity::Mathematics::float3 FFC480D0B8D4857B, ::Unity::Mathematics::float3 A1D378BAE4E26337, ::Unity::Mathematics::float3 E27F98B8D7DDA5FA, ::Unity::Mathematics::float3 A74B2C3E223E92F7, ::Unity::Mathematics::float3& E80D87C5AC152A48, ::Unity::Mathematics::float3& A02403B09D4E8B45)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single, ::System::Boolean, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3&, ::Unity::Mathematics::float3&))((::PBYTE)hIl2Cpp + F884F6B258FE2855_A2FAD9BE13B2E793_OFFSET))(EEC4CC071C58D3A7, B1CF404A5B8160C9, FEE3703AF6209BC0, FFC480D0B8D4857B, A1D378BAE4E26337, E27F98B8D7DDA5FA, A74B2C3E223E92F7, E80D87C5AC152A48, A02403B09D4E8B45);
	}

	static ::System::Void A2FAD9BE13B2E793_1(::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Boolean EEC4CC071C58D3A7, ::System::Single B1CF404A5B8160C9)
	{
		return ((::System::Void(*)(::UnityEngine::Splines::Spline*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + F884F6B258FE2855_A2FAD9BE13B2E793_1_OFFSET))(F03E0BDCBABB08A2, EEC4CC071C58D3A7, B1CF404A5B8160C9);
	}

	static ::Unity::Mathematics::float2 A7D640AC946C9811(::Unity::Mathematics::float2 FFC480D0B8D4857B, ::Unity::Mathematics::float2 A1D378BAE4E26337, ::Unity::Mathematics::float2 E27F98B8D7DDA5FA)
	{
		return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + F884F6B258FE2855_A7D640AC946C9811_OFFSET))(FFC480D0B8D4857B, A1D378BAE4E26337, E27F98B8D7DDA5FA);
	}

	static ::System::Void A2B060061E454B9E(::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Boolean EEC4CC071C58D3A7, ::System::Single B1CF404A5B8160C9)
	{
		return ((::System::Void(*)(::UnityEngine::Splines::Spline*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + F884F6B258FE2855_A2B060061E454B9E_OFFSET))(F03E0BDCBABB08A2, EEC4CC071C58D3A7, B1CF404A5B8160C9);
	}

	static ::System::Single E70CE57AA57E72D8(::Unity::Mathematics::float3 A358DCC25576808D, ::Unity::Mathematics::float3 F53F5E160F9CC6BE)
	{
		return ((::System::Single(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + F884F6B258FE2855_E70CE57AA57E72D8_OFFSET))(A358DCC25576808D, F53F5E160F9CC6BE);
	}
};
