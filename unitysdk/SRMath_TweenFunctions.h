#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SRMATH_TWEENFUNCTIONS_BACKEASEINOUT_OFFSET UNITYSDK_OFFSET(0x2044A080)
#define SRMATH_TWEENFUNCTIONS_BACKEASEIN_OFFSET UNITYSDK_OFFSET(0x2044A050)
#define SRMATH_TWEENFUNCTIONS_BACKEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x2044A100)
#define SRMATH_TWEENFUNCTIONS_BACKEASEOUT_OFFSET UNITYSDK_OFFSET(0x2044A010)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x20449C70)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEIN_OFFSET UNITYSDK_OFFSET(0x20449BA0)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x20449E40)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUT_OFFSET UNITYSDK_OFFSET(0x20449AC0)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEINOUT_OFFSET UNITYSDK_OFFSET(0x20449260)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEIN_OFFSET UNITYSDK_OFFSET(0x20449200)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x20449310)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEOUT_OFFSET UNITYSDK_OFFSET(0x204491A0)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x20448E30)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEIN_OFFSET UNITYSDK_OFFSET(0x20448E10)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x20448EA0)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEOUT_OFFSET UNITYSDK_OFFSET(0x20448DE0)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x204497A0)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEIN_OFFSET UNITYSDK_OFFSET(0x204496A0)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x20449910)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEOUT_OFFSET UNITYSDK_OFFSET(0x204495B0)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEINOUT_OFFSET UNITYSDK_OFFSET(0x20448C90)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEIN_OFFSET UNITYSDK_OFFSET(0x20448C30)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x20448D30)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEOUT_OFFSET UNITYSDK_OFFSET(0x20448BD0)
#define SRMATH_TWEENFUNCTIONS_LINEAR_OFFSET UNITYSDK_OFFSET(0x20448AA0)
#define SRMATH_TWEENFUNCTIONS_QUADEASEINOUT_OFFSET UNITYSDK_OFFSET(0x20448AF0)
#define SRMATH_TWEENFUNCTIONS_QUADEASEIN_OFFSET UNITYSDK_OFFSET(0x20448AD0)
#define SRMATH_TWEENFUNCTIONS_QUADEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x20448B60)
#define SRMATH_TWEENFUNCTIONS_QUADEASEOUT_OFFSET UNITYSDK_OFFSET(0x20448AB0)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x20448F60)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEIN_OFFSET UNITYSDK_OFFSET(0x20448F40)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x20448FD0)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEOUT_OFFSET UNITYSDK_OFFSET(0x20448F10)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x204490A0)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEIN_OFFSET UNITYSDK_OFFSET(0x20449080)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x20449120)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEOUT_OFFSET UNITYSDK_OFFSET(0x20449050)
#define SRMATH_TWEENFUNCTIONS_SINEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x20449470)
#define SRMATH_TWEENFUNCTIONS_SINEEASEIN_OFFSET UNITYSDK_OFFSET(0x20449420)
#define SRMATH_TWEENFUNCTIONS_SINEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x20449520)
#define SRMATH_TWEENFUNCTIONS_SINEEASEOUT_OFFSET UNITYSDK_OFFSET(0x204493E0)

inline static constexpr unsigned int SRMath_TweenFunctions_TypeDefinitionIndex = 36281;

	class SRMath_TweenFunctions : public ::System::Object
	{
	public:
		static ::System::Single Linear(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_LINEAR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ExpoEaseOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ExpoEaseIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ExpoEaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ExpoEaseOutIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEOUTIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single CircEaseOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single CircEaseIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single CircEaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single CircEaseOutIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEOUTIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuadEaseOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuadEaseIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuadEaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuadEaseOutIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEOUTIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single SineEaseOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single SineEaseIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single SineEaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single SineEaseOutIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEOUTIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single CubicEaseOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single CubicEaseIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single CubicEaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single CubicEaseOutIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEOUTIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuartEaseOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuartEaseIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuartEaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuartEaseOutIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEOUTIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuintEaseOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuintEaseIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuintEaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single QuintEaseOutIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEOUTIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ElasticEaseOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ElasticEaseIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ElasticEaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ElasticEaseOutIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEOUTIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single BounceEaseOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single BounceEaseIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single BounceEaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single BounceEaseOutIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUTIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single BackEaseOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single BackEaseIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEIN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single BackEaseInOut(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEINOUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single BackEaseOutIn(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEOUTIN_OFFSET))(a1, a2, a3, a4);
		}

	};
