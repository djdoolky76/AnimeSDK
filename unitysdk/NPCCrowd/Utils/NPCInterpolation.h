#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_UTILS_NPCINTERPOLATION_CALCULATECATMULLROMCENTRIPETALTANGENT_OFFSET UNITYSDK_OFFSET(0xFD42DF0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_CALCULATECENTRIPETALPARAMETERS_OFFSET UNITYSDK_OFFSET(0xFD42C70)
#define NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROMCENTRIPETAL_OFFSET UNITYSDK_OFFSET(0xFD42840)
#define NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROMTANGENT_OFFSET UNITYSDK_OFFSET(0xFD425E0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROM_OFFSET UNITYSDK_OFFSET(0xFD423D0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_CUBIC_OFFSET UNITYSDK_OFFSET(0xFD42220)
#define NPCCROWD_UTILS_NPCINTERPOLATION_EASEINOUTCUBIC_OFFSET UNITYSDK_OFFSET(0xFD43180)
#define NPCCROWD_UTILS_NPCINTERPOLATION_INTERPOLATETOWARDS_OFFSET UNITYSDK_OFFSET(0xFD43270)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPEXPN_OFFSET UNITYSDK_OFFSET(0xFD43AF0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_1_OFFSET UNITYSDK_OFFSET(0xFD436E0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_2_OFFSET UNITYSDK_OFFSET(0xFD437D0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_OFFSET UNITYSDK_OFFSET(0xFD43630)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_1_OFFSET UNITYSDK_OFFSET(0xFD43940)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_2_OFFSET UNITYSDK_OFFSET(0xFD43A00)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_OFFSET UNITYSDK_OFFSET(0xFD43890)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_1_OFFSET UNITYSDK_OFFSET(0xFD43460)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_2_OFFSET UNITYSDK_OFFSET(0xFD43530)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_OFFSET UNITYSDK_OFFSET(0xFD433B0)
#define NPCCROWD_UTILS_NPCINTERPOLATION_LERP_OFFSET UNITYSDK_OFFSET(0xFD43320)

namespace NPCCrowd::Utils
{
	inline static constexpr unsigned int NPCInterpolation_TypeDefinitionIndex = 78606;

	class NPCInterpolation : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Cubic(::UnityEngine::Vector3 y0, ::UnityEngine::Vector3 y1, ::UnityEngine::Vector3 y2, ::UnityEngine::Vector3 y3, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CUBIC_OFFSET))(y0, y1, y2, y3, t);
		}

		static ::UnityEngine::Vector3 CatmullRom(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROM_OFFSET))(p0, p1, p2, p3, t);
		}

		static ::UnityEngine::Vector3 CatmullRomTangent(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROMTANGENT_OFFSET))(p0, p1, p2, p3, t);
		}

		static ::UnityEngine::Vector3 CatmullRomCentripetal(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, ::System::Single t, ::System::Single t0, ::System::Single t1, ::System::Single t2, ::System::Single t3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CATMULLROMCENTRIPETAL_OFFSET))(p0, p1, p2, p3, t, t0, t1, t2, t3);
		}

		static ::System::Collections::Generic::List_1<::System::Single>* CalculateCentripetalParameters(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* controlPoints)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CALCULATECENTRIPETALPARAMETERS_OFFSET))(controlPoints);
		}

		static ::UnityEngine::Vector3 CalculateCatmullRomCentripetalTangent(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, ::System::Single t, ::System::Single t0, ::System::Single t1, ::System::Single t2, ::System::Single t3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_CALCULATECATMULLROMCENTRIPETALTANGENT_OFFSET))(p0, p1, p2, p3, t, t0, t1, t2, t3);
		}

		static ::System::Single EaseInOutCubic(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_EASEINOUTCUBIC_OFFSET))(t, b, c, d);
		}

		static ::System::Single InterpolateTowards(::System::Single pPrev, ::System::Single pNext, ::System::Single pSpeed, ::System::Single pDt)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_INTERPOLATETOWARDS_OFFSET))(pPrev, pNext, pSpeed, pDt);
		}

		static ::System::Single Lerp(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERP_OFFSET))(a, b, t);
		}

		static ::System::Single LerpS(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector2 LerpS_1(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_1_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 LerpS_2(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS_2_OFFSET))(a, b, t);
		}

		static ::System::Single LerpS2(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 LerpS2_1(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_1_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector2 LerpS2_2(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS2_2_OFFSET))(a, b, t);
		}

		static ::System::Single LerpS3(::System::Single a, ::System::Single b, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector2 LerpS3_1(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_1_OFFSET))(a, b, t);
		}

		static ::UnityEngine::Vector3 LerpS3_2(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPS3_2_OFFSET))(a, b, t);
		}

		static ::System::Single LerpExpN(::System::Single a, ::System::Single b, ::System::Single t, ::System::Single n)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_UTILS_NPCINTERPOLATION_LERPEXPN_OFFSET))(a, b, t, n);
		}
	};
}
