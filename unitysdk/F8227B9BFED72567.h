#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/F8227B9BFED72567_AA36914C7A1DDD95.h"
#include "unitysdk/F8227B9BFED72567_FCCEBA75B3BFF106.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/quaternion.h"

namespace UnityEngine::Splines { class Spline; }

#define F8227B9BFED72567_A9FF550CBAF522EB_OFFSET UNITYSDK_OFFSET(0x3D77920)
#define F8227B9BFED72567_AD807873527C8155_OFFSET UNITYSDK_OFFSET(0x3D79140)
#define F8227B9BFED72567_EEA909A6B832DD1F_OFFSET UNITYSDK_OFFSET(0x3D78940)
#define F8227B9BFED72567_F98EF8A7C17A8848_OFFSET UNITYSDK_OFFSET(0x3D79140)

inline static constexpr unsigned int F8227B9BFED72567_TypeDefinitionIndex = 18785;

class F8227B9BFED72567 : public ::System::Object
{
public:
	static ::UnityEngine::Splines::Spline* EEA909A6B832DD1F(::System::Single F0CEBBB186782829, ::Unity::Mathematics::float3 EB211B01816ACA79, ::Unity::Mathematics::quaternion A0556B8B541B6D55, ::System::Boolean F4CF14A8EE25E21A)
	{
		return ((::UnityEngine::Splines::Spline*(*)(::System::Single, ::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + F8227B9BFED72567_EEA909A6B832DD1F_OFFSET))(F0CEBBB186782829, EB211B01816ACA79, A0556B8B541B6D55, F4CF14A8EE25E21A);
	}

	static ::Unity::Mathematics::float3 F98EF8A7C17A8848(::Unity::Mathematics::float3 FF9A37DE513AC35B, ::Unity::Mathematics::float3 B224C0AF076834BC, ::F8227B9BFED72567_FCCEBA75B3BFF106& param_2)
	{
		return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::F8227B9BFED72567_FCCEBA75B3BFF106&))((::PBYTE)hIl2Cpp + F8227B9BFED72567_F98EF8A7C17A8848_OFFSET))(FF9A37DE513AC35B, B224C0AF076834BC, param_2);
	}

	static ::UnityEngine::Splines::Spline* A9FF550CBAF522EB(::System::Single F0CEBBB186782829, ::Unity::Mathematics::float3 EB211B01816ACA79, ::Unity::Mathematics::quaternion A0556B8B541B6D55, ::System::Boolean F4CF14A8EE25E21A)
	{
		return ((::UnityEngine::Splines::Spline*(*)(::System::Single, ::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + F8227B9BFED72567_A9FF550CBAF522EB_OFFSET))(F0CEBBB186782829, EB211B01816ACA79, A0556B8B541B6D55, F4CF14A8EE25E21A);
	}

	static ::Unity::Mathematics::float3 AD807873527C8155(::Unity::Mathematics::float3 FF9A37DE513AC35B, ::Unity::Mathematics::float3 B224C0AF076834BC, ::F8227B9BFED72567_AA36914C7A1DDD95& param_2)
	{
		return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::F8227B9BFED72567_AA36914C7A1DDD95&))((::PBYTE)hIl2Cpp + F8227B9BFED72567_AD807873527C8155_OFFSET))(FF9A37DE513AC35B, B224C0AF076834BC, param_2);
	}
};
