#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/HableCurve_DirectParams.h"

namespace UnityEngine::NAPRenderPipeline0 { class HableCurve_Uniforms; }

#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_ASSLOPEINTERCEPT_OFFSET UNITYSDK_OFFSET(0x1E5448A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_EVALDERIVATIVELINEARGAMMA_OFFSET UNITYSDK_OFFSET(0x1E5448F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_INVERSEWHITEPOINT_OFFSET UNITYSDK_OFFSET(0x1E543F70)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_X0_OFFSET UNITYSDK_OFFSET(0x1E543F90)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_X1_OFFSET UNITYSDK_OFFSET(0x1E543FB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_INITSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1E544390)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_INIT_OFFSET UNITYSDK_OFFSET(0x1E544190)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_INVERSEWHITEPOINT_OFFSET UNITYSDK_OFFSET(0x1E543F80)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_WHITEPOINT_OFFSET UNITYSDK_OFFSET(0x1E543F60)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_X0_OFFSET UNITYSDK_OFFSET(0x1E543FA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_X1_OFFSET UNITYSDK_OFFSET(0x1E543FC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SOLVEAB_OFFSET UNITYSDK_OFFSET(0x1E544940)
#define UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E543FD0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int HableCurve_TypeDefinitionIndex = 5969;

	class HableCurve : public ::System::Object
	{
	public:
		::System::Single _whitePoint_k__BackingField; // 0x10
		::System::Single _inverseWhitePoint_k__BackingField; // 0x14
		::System::Single _x0_k__BackingField; // 0x18
		::System::Single _x1_k__BackingField; // 0x1C
		::Il2CppArray<::System::Object*>* m_Segments; // 0x20
		::UnityEngine::NAPRenderPipeline0::HableCurve_Uniforms* uniforms; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE__CTOR_OFFSET))(this);
		}

		::System::Void set_whitePoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_WHITEPOINT_OFFSET))(this, value);
		}

		::System::Single get_inverseWhitePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_INVERSEWHITEPOINT_OFFSET))(this);
		}

		::System::Void set_inverseWhitePoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_INVERSEWHITEPOINT_OFFSET))(this, value);
		}

		::System::Single get_x0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_X0_OFFSET))(this);
		}

		::System::Void set_x0(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_X0_OFFSET))(this, value);
		}

		::System::Single get_x1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_GET_X1_OFFSET))(this);
		}

		::System::Void set_x1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SET_X1_OFFSET))(this, value);
		}

		::System::Void Init(::System::Single toeStrength, ::System::Single toeLength, ::System::Single shoulderStrength, ::System::Single shoulderLength, ::System::Single shoulderAngle, ::System::Single gamma)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_INIT_OFFSET))(this, toeStrength, toeLength, shoulderStrength, shoulderLength, shoulderAngle, gamma);
		}

		::System::Void InitSegments(::UnityEngine::NAPRenderPipeline0::HableCurve_DirectParams srcParams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::HableCurve_DirectParams))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_INITSEGMENTS_OFFSET))(this, srcParams);
		}

		::System::Void SolveAB(::System::Single& lnA, ::System::Single& B, ::System::Single x0, ::System::Single y0, ::System::Single m)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_SOLVEAB_OFFSET))(this, lnA, B, x0, y0, m);
		}

		::System::Void AsSlopeIntercept(::System::Single& m, ::System::Single& b, ::System::Single x0, ::System::Single x1, ::System::Single y0, ::System::Single y1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_ASSLOPEINTERCEPT_OFFSET))(this, m, b, x0, x1, y0, y1);
		}

		::System::Single EvalDerivativeLinearGamma(::System::Single m, ::System::Single b, ::System::Single g, ::System::Single x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_HABLECURVE_EVALDERIVATIVELINEARGAMMA_OFFSET))(this, m, b, g, x);
		}
	};
}
