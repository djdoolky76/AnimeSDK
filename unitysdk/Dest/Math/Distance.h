#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Dest/Math/AAB2.h"
#include "unitysdk/Dest/Math/AAB3.h"
#include "unitysdk/Dest/Math/Box2.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Circle2.h"
#include "unitysdk/Dest/Math/Circle3.h"
#include "unitysdk/Dest/Math/Line2.h"
#include "unitysdk/Dest/Math/Line3.h"
#include "unitysdk/Dest/Math/Line3Box3Dist.h"
#include "unitysdk/Dest/Math/Plane3.h"
#include "unitysdk/Dest/Math/Ray2.h"
#include "unitysdk/Dest/Math/Ray3.h"
#include "unitysdk/Dest/Math/Rectangle3.h"
#include "unitysdk/Dest/Math/Segment2.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/Dest/Math/Triangle2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DEST_MATH_DISTANCE_CASE000_OFFSET UNITYSDK_OFFSET(0x1F57FF60)
#define DEST_MATH_DISTANCE_CASE00_OFFSET UNITYSDK_OFFSET(0x1F57F950)
#define DEST_MATH_DISTANCE_CASE0_OFFSET UNITYSDK_OFFSET(0x1F57E9B0)
#define DEST_MATH_DISTANCE_CASENOZEROS_OFFSET UNITYSDK_OFFSET(0x1F57E850)
#define DEST_MATH_DISTANCE_FACE_OFFSET UNITYSDK_OFFSET(0x1F579E30)
#define DEST_MATH_DISTANCE_LINE2LINE2_1_OFFSET UNITYSDK_OFFSET(0x1F575460)
#define DEST_MATH_DISTANCE_LINE2LINE2_OFFSET UNITYSDK_OFFSET(0x1F575240)
#define DEST_MATH_DISTANCE_LINE2RAY2_1_OFFSET UNITYSDK_OFFSET(0x1F5758B0)
#define DEST_MATH_DISTANCE_LINE2RAY2_OFFSET UNITYSDK_OFFSET(0x1F5756D0)
#define DEST_MATH_DISTANCE_LINE2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1F575DC0)
#define DEST_MATH_DISTANCE_LINE2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1F575B60)
#define DEST_MATH_DISTANCE_LINE3BOX3_1_OFFSET UNITYSDK_OFFSET(0x1F580780)
#define DEST_MATH_DISTANCE_LINE3BOX3_OFFSET UNITYSDK_OFFSET(0x1F5800B0)
#define DEST_MATH_DISTANCE_LINE3LINE3_1_OFFSET UNITYSDK_OFFSET(0x1F580AC0)
#define DEST_MATH_DISTANCE_LINE3LINE3_OFFSET UNITYSDK_OFFSET(0x1F5807D0)
#define DEST_MATH_DISTANCE_LINE3RAY3_1_OFFSET UNITYSDK_OFFSET(0x1F580E60)
#define DEST_MATH_DISTANCE_LINE3RAY3_OFFSET UNITYSDK_OFFSET(0x1F580B10)
#define DEST_MATH_DISTANCE_LINE3SEGMENT3_1_OFFSET UNITYSDK_OFFSET(0x1F581270)
#define DEST_MATH_DISTANCE_LINE3SEGMENT3_OFFSET UNITYSDK_OFFSET(0x1F580EB0)
#define DEST_MATH_DISTANCE_POINT2AAB2_1_OFFSET UNITYSDK_OFFSET(0x1F576160)
#define DEST_MATH_DISTANCE_POINT2AAB2_OFFSET UNITYSDK_OFFSET(0x1F5760E0)
#define DEST_MATH_DISTANCE_POINT2BOX2_1_OFFSET UNITYSDK_OFFSET(0x1F576490)
#define DEST_MATH_DISTANCE_POINT2BOX2_OFFSET UNITYSDK_OFFSET(0x1F576320)
#define DEST_MATH_DISTANCE_POINT2CIRCLE2_1_OFFSET UNITYSDK_OFFSET(0x1F5766B0)
#define DEST_MATH_DISTANCE_POINT2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1F576680)
#define DEST_MATH_DISTANCE_POINT2LINE2_1_OFFSET UNITYSDK_OFFSET(0x1F576A50)
#define DEST_MATH_DISTANCE_POINT2LINE2_OFFSET UNITYSDK_OFFSET(0x1F576830)
#define DEST_MATH_DISTANCE_POINT2RAY2_1_OFFSET UNITYSDK_OFFSET(0x1F576E90)
#define DEST_MATH_DISTANCE_POINT2RAY2_OFFSET UNITYSDK_OFFSET(0x1F576C70)
#define DEST_MATH_DISTANCE_POINT2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1F577210)
#define DEST_MATH_DISTANCE_POINT2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1F5770D0)
#define DEST_MATH_DISTANCE_POINT2TRIANGLE2_1_OFFSET UNITYSDK_OFFSET(0x1F577920)
#define DEST_MATH_DISTANCE_POINT2TRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1F577360)
#define DEST_MATH_DISTANCE_POINT3AAB3_1_OFFSET UNITYSDK_OFFSET(0x1F581370)
#define DEST_MATH_DISTANCE_POINT3AAB3_OFFSET UNITYSDK_OFFSET(0x1F5812C0)
#define DEST_MATH_DISTANCE_POINT3BOX3_1_OFFSET UNITYSDK_OFFSET(0x1F581820)
#define DEST_MATH_DISTANCE_POINT3BOX3_OFFSET UNITYSDK_OFFSET(0x1F581620)
#define DEST_MATH_DISTANCE_POINT3CIRCLE3_1_OFFSET UNITYSDK_OFFSET(0x1F581E10)
#define DEST_MATH_DISTANCE_POINT3CIRCLE3_OFFSET UNITYSDK_OFFSET(0x1F581AE0)
#define DEST_MATH_DISTANCE_POINT3LINE3_1_OFFSET UNITYSDK_OFFSET(0x1F581FD0)
#define DEST_MATH_DISTANCE_POINT3LINE3_OFFSET UNITYSDK_OFFSET(0x1F581E60)
#define DEST_MATH_DISTANCE_POINT3PLANE3_1_OFFSET UNITYSDK_OFFSET(0x1F5821F0)
#define DEST_MATH_DISTANCE_POINT3PLANE3_OFFSET UNITYSDK_OFFSET(0x1F582140)
#define DEST_MATH_DISTANCE_POINT3RAY3_1_OFFSET UNITYSDK_OFFSET(0x1F5825B0)
#define DEST_MATH_DISTANCE_POINT3RAY3_OFFSET UNITYSDK_OFFSET(0x1F582480)
#define DEST_MATH_DISTANCE_POINT3RECTANGLE3_1_OFFSET UNITYSDK_OFFSET(0x1F5828A0)
#define DEST_MATH_DISTANCE_POINT3RECTANGLE3_OFFSET UNITYSDK_OFFSET(0x1F582700)
#define DEST_MATH_DISTANCE_POINT3SEGMENT3_1_OFFSET UNITYSDK_OFFSET(0x1F582C00)
#define DEST_MATH_DISTANCE_POINT3SEGMENT3_OFFSET UNITYSDK_OFFSET(0x1F582A90)
#define DEST_MATH_DISTANCE_POINT3SPHERE3_1_OFFSET UNITYSDK_OFFSET(0x1F582DD0)
#define DEST_MATH_DISTANCE_POINT3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1F582D80)
#define DEST_MATH_DISTANCE_RAY2RAY2_1_OFFSET UNITYSDK_OFFSET(0x1F578F10)
#define DEST_MATH_DISTANCE_RAY2RAY2_OFFSET UNITYSDK_OFFSET(0x1F578BB0)
#define DEST_MATH_DISTANCE_RAY2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1F5793B0)
#define DEST_MATH_DISTANCE_RAY2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1F578F60)
#define DEST_MATH_DISTANCE_RAY3RAY3_1_OFFSET UNITYSDK_OFFSET(0x1F583350)
#define DEST_MATH_DISTANCE_RAY3RAY3_OFFSET UNITYSDK_OFFSET(0x1F582F70)
#define DEST_MATH_DISTANCE_RAY3SEGMENT3_1_OFFSET UNITYSDK_OFFSET(0x1F5838C0)
#define DEST_MATH_DISTANCE_RAY3SEGMENT3_OFFSET UNITYSDK_OFFSET(0x1F5833A0)
#define DEST_MATH_DISTANCE_SEGMENT2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1F579DE0)
#define DEST_MATH_DISTANCE_SEGMENT2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1F579400)
#define DEST_MATH_DISTANCE_SEGMENT3BOX3_1_OFFSET UNITYSDK_OFFSET(0x1F583B10)
#define DEST_MATH_DISTANCE_SEGMENT3BOX3_OFFSET UNITYSDK_OFFSET(0x1F583910)
#define DEST_MATH_DISTANCE_SEGMENT3SEGMENT3_1_OFFSET UNITYSDK_OFFSET(0x1F5845F0)
#define DEST_MATH_DISTANCE_SEGMENT3SEGMENT3_OFFSET UNITYSDK_OFFSET(0x1F583C40)
#define DEST_MATH_DISTANCE_SQRLINE2LINE2_1_OFFSET UNITYSDK_OFFSET(0x1F575490)
#define DEST_MATH_DISTANCE_SQRLINE2LINE2_OFFSET UNITYSDK_OFFSET(0x1F575360)
#define DEST_MATH_DISTANCE_SQRLINE2RAY2_1_OFFSET UNITYSDK_OFFSET(0x1F5758E0)
#define DEST_MATH_DISTANCE_SQRLINE2RAY2_OFFSET UNITYSDK_OFFSET(0x1F575700)
#define DEST_MATH_DISTANCE_SQRLINE2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1F575DF0)
#define DEST_MATH_DISTANCE_SQRLINE2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1F575B90)
#define DEST_MATH_DISTANCE_SQRLINE3BOX3_1_OFFSET UNITYSDK_OFFSET(0x1F5807B0)
#define DEST_MATH_DISTANCE_SQRLINE3BOX3_OFFSET UNITYSDK_OFFSET(0x1F5800E0)
#define DEST_MATH_DISTANCE_SQRLINE3LINE3_1_OFFSET UNITYSDK_OFFSET(0x1F580800)
#define DEST_MATH_DISTANCE_SQRLINE3LINE3_OFFSET UNITYSDK_OFFSET(0x1F580AF0)
#define DEST_MATH_DISTANCE_SQRLINE3RAY3_1_OFFSET UNITYSDK_OFFSET(0x1F580B40)
#define DEST_MATH_DISTANCE_SQRLINE3RAY3_OFFSET UNITYSDK_OFFSET(0x1F580E90)
#define DEST_MATH_DISTANCE_SQRLINE3SEGMENT3_1_OFFSET UNITYSDK_OFFSET(0x1F580EE0)
#define DEST_MATH_DISTANCE_SQRLINE3SEGMENT3_OFFSET UNITYSDK_OFFSET(0x1F5812A0)
#define DEST_MATH_DISTANCE_SQRPOINT2AAB2_1_OFFSET UNITYSDK_OFFSET(0x1F576280)
#define DEST_MATH_DISTANCE_SQRPOINT2AAB2_OFFSET UNITYSDK_OFFSET(0x1F576210)
#define DEST_MATH_DISTANCE_SQRPOINT2BOX2_1_OFFSET UNITYSDK_OFFSET(0x1F5764C0)
#define DEST_MATH_DISTANCE_SQRPOINT2BOX2_OFFSET UNITYSDK_OFFSET(0x1F576350)
#define DEST_MATH_DISTANCE_SQRPOINT2CIRCLE2_1_OFFSET UNITYSDK_OFFSET(0x1F576790)
#define DEST_MATH_DISTANCE_SQRPOINT2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1F576750)
#define DEST_MATH_DISTANCE_SQRPOINT2LINE2_1_OFFSET UNITYSDK_OFFSET(0x1F576B60)
#define DEST_MATH_DISTANCE_SQRPOINT2LINE2_OFFSET UNITYSDK_OFFSET(0x1F576940)
#define DEST_MATH_DISTANCE_SQRPOINT2RAY2_1_OFFSET UNITYSDK_OFFSET(0x1F576FB0)
#define DEST_MATH_DISTANCE_SQRPOINT2RAY2_OFFSET UNITYSDK_OFFSET(0x1F576D80)
#define DEST_MATH_DISTANCE_SQRPOINT2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1F577240)
#define DEST_MATH_DISTANCE_SQRPOINT2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1F577100)
#define DEST_MATH_DISTANCE_SQRPOINT2TRIANGLE2_1_OFFSET UNITYSDK_OFFSET(0x1F578540)
#define DEST_MATH_DISTANCE_SQRPOINT2TRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1F577FA0)
#define DEST_MATH_DISTANCE_SQRPOINT3AAB3_1_OFFSET UNITYSDK_OFFSET(0x1F581520)
#define DEST_MATH_DISTANCE_SQRPOINT3AAB3_OFFSET UNITYSDK_OFFSET(0x1F581480)
#define DEST_MATH_DISTANCE_SQRPOINT3BOX3_1_OFFSET UNITYSDK_OFFSET(0x1F581850)
#define DEST_MATH_DISTANCE_SQRPOINT3BOX3_OFFSET UNITYSDK_OFFSET(0x1F581650)
#define DEST_MATH_DISTANCE_SQRPOINT3CIRCLE3_1_OFFSET UNITYSDK_OFFSET(0x1F581B10)
#define DEST_MATH_DISTANCE_SQRPOINT3CIRCLE3_OFFSET UNITYSDK_OFFSET(0x1F581E40)
#define DEST_MATH_DISTANCE_SQRPOINT3LINE3_1_OFFSET UNITYSDK_OFFSET(0x1F582000)
#define DEST_MATH_DISTANCE_SQRPOINT3LINE3_OFFSET UNITYSDK_OFFSET(0x1F581E90)
#define DEST_MATH_DISTANCE_SQRPOINT3PLANE3_1_OFFSET UNITYSDK_OFFSET(0x1F582390)
#define DEST_MATH_DISTANCE_SQRPOINT3PLANE3_OFFSET UNITYSDK_OFFSET(0x1F5822E0)
#define DEST_MATH_DISTANCE_SQRPOINT3RAY3_1_OFFSET UNITYSDK_OFFSET(0x1F5825E0)
#define DEST_MATH_DISTANCE_SQRPOINT3RAY3_OFFSET UNITYSDK_OFFSET(0x1F5824B0)
#define DEST_MATH_DISTANCE_SQRPOINT3RECTANGLE3_1_OFFSET UNITYSDK_OFFSET(0x1F5828D0)
#define DEST_MATH_DISTANCE_SQRPOINT3RECTANGLE3_OFFSET UNITYSDK_OFFSET(0x1F582730)
#define DEST_MATH_DISTANCE_SQRPOINT3SEGMENT3_1_OFFSET UNITYSDK_OFFSET(0x1F582C30)
#define DEST_MATH_DISTANCE_SQRPOINT3SEGMENT3_OFFSET UNITYSDK_OFFSET(0x1F582AC0)
#define DEST_MATH_DISTANCE_SQRPOINT3SPHERE3_1_OFFSET UNITYSDK_OFFSET(0x1F582ED0)
#define DEST_MATH_DISTANCE_SQRPOINT3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1F582E70)
#define DEST_MATH_DISTANCE_SQRRAY2RAY2_1_OFFSET UNITYSDK_OFFSET(0x1F578BE0)
#define DEST_MATH_DISTANCE_SQRRAY2RAY2_OFFSET UNITYSDK_OFFSET(0x1F578F40)
#define DEST_MATH_DISTANCE_SQRRAY2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1F578F90)
#define DEST_MATH_DISTANCE_SQRRAY2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1F5793E0)
#define DEST_MATH_DISTANCE_SQRRAY3RAY3_1_OFFSET UNITYSDK_OFFSET(0x1F582FA0)
#define DEST_MATH_DISTANCE_SQRRAY3RAY3_OFFSET UNITYSDK_OFFSET(0x1F583380)
#define DEST_MATH_DISTANCE_SQRRAY3SEGMENT3_1_OFFSET UNITYSDK_OFFSET(0x1F5833D0)
#define DEST_MATH_DISTANCE_SQRRAY3SEGMENT3_OFFSET UNITYSDK_OFFSET(0x1F5838F0)
#define DEST_MATH_DISTANCE_SQRSEGMENT2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1F579430)
#define DEST_MATH_DISTANCE_SQRSEGMENT2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1F579E10)
#define DEST_MATH_DISTANCE_SQRSEGMENT3BOX3_1_OFFSET UNITYSDK_OFFSET(0x1F583BB0)
#define DEST_MATH_DISTANCE_SQRSEGMENT3BOX3_OFFSET UNITYSDK_OFFSET(0x1F583A20)
#define DEST_MATH_DISTANCE_SQRSEGMENT3SEGMENT3_1_OFFSET UNITYSDK_OFFSET(0x1F583C70)
#define DEST_MATH_DISTANCE_SQRSEGMENT3SEGMENT3_OFFSET UNITYSDK_OFFSET(0x1F584620)

namespace Dest::Math
{
	inline static constexpr unsigned int Distance_TypeDefinitionIndex = 34908;

	class Distance : public ::System::Object
	{
	public:
		static ::System::Single Line2Line2(::Dest::Math::Line2& line0, ::Dest::Math::Line2& line1)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Line2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE2LINE2_OFFSET))(line0, line1);
		}

		static ::System::Single Line2Line2_1(::Dest::Math::Line2& line0, ::Dest::Math::Line2& line1, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Line2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE2LINE2_1_OFFSET))(line0, line1, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrLine2Line2(::Dest::Math::Line2& line0, ::Dest::Math::Line2& line1)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Line2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE2LINE2_OFFSET))(line0, line1);
		}

		static ::System::Single SqrLine2Line2_1(::Dest::Math::Line2& line0, ::Dest::Math::Line2& line1, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Line2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE2LINE2_1_OFFSET))(line0, line1, closestPoint0, closestPoint1);
		}

		static ::System::Single Line2Ray2(::Dest::Math::Line2& line, ::Dest::Math::Ray2& ray)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Ray2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE2RAY2_OFFSET))(line, ray);
		}

		static ::System::Single Line2Ray2_1(::Dest::Math::Line2& line, ::Dest::Math::Ray2& ray, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Ray2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE2RAY2_1_OFFSET))(line, ray, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrLine2Ray2(::Dest::Math::Line2& line, ::Dest::Math::Ray2& ray)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Ray2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE2RAY2_OFFSET))(line, ray);
		}

		static ::System::Single SqrLine2Ray2_1(::Dest::Math::Line2& line, ::Dest::Math::Ray2& ray, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Ray2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE2RAY2_1_OFFSET))(line, ray, closestPoint0, closestPoint1);
		}

		static ::System::Single Line2Segment2(::Dest::Math::Line2& line, ::Dest::Math::Segment2& segment)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE2SEGMENT2_OFFSET))(line, segment);
		}

		static ::System::Single Line2Segment2_1(::Dest::Math::Line2& line, ::Dest::Math::Segment2& segment, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Segment2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE2SEGMENT2_1_OFFSET))(line, segment, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrLine2Segment2(::Dest::Math::Line2& line, ::Dest::Math::Segment2& segment)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE2SEGMENT2_OFFSET))(line, segment);
		}

		static ::System::Single SqrLine2Segment2_1(::Dest::Math::Line2& line, ::Dest::Math::Segment2& segment, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line2&, ::Dest::Math::Segment2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE2SEGMENT2_1_OFFSET))(line, segment, closestPoint0, closestPoint1);
		}

		static ::System::Single Point2AAB2(::UnityEngine::Vector2& point, ::Dest::Math::AAB2& box)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2AAB2_OFFSET))(point, box);
		}

		static ::System::Single Point2AAB2_1(::UnityEngine::Vector2& point, ::Dest::Math::AAB2& box, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::AAB2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2AAB2_1_OFFSET))(point, box, closestPoint);
		}

		static ::System::Single SqrPoint2AAB2(::UnityEngine::Vector2& point, ::Dest::Math::AAB2& box)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2AAB2_OFFSET))(point, box);
		}

		static ::System::Single SqrPoint2AAB2_1(::UnityEngine::Vector2& point, ::Dest::Math::AAB2& box, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::AAB2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2AAB2_1_OFFSET))(point, box, closestPoint);
		}

		static ::System::Single Point2Box2(::UnityEngine::Vector2& point, ::Dest::Math::Box2& box)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Box2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2BOX2_OFFSET))(point, box);
		}

		static ::System::Single Point2Box2_1(::UnityEngine::Vector2& point, ::Dest::Math::Box2& box, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Box2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2BOX2_1_OFFSET))(point, box, closestPoint);
		}

		static ::System::Single SqrPoint2Box2(::UnityEngine::Vector2& point, ::Dest::Math::Box2& box)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Box2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2BOX2_OFFSET))(point, box);
		}

		static ::System::Single SqrPoint2Box2_1(::UnityEngine::Vector2& point, ::Dest::Math::Box2& box, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Box2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2BOX2_1_OFFSET))(point, box, closestPoint);
		}

		static ::System::Single Point2Circle2(::UnityEngine::Vector2& point, ::Dest::Math::Circle2& circle)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2CIRCLE2_OFFSET))(point, circle);
		}

		static ::System::Single Point2Circle2_1(::UnityEngine::Vector2& point, ::Dest::Math::Circle2& circle, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Circle2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2CIRCLE2_1_OFFSET))(point, circle, closestPoint);
		}

		static ::System::Single SqrPoint2Circle2(::UnityEngine::Vector2& point, ::Dest::Math::Circle2& circle)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2CIRCLE2_OFFSET))(point, circle);
		}

		static ::System::Single SqrPoint2Circle2_1(::UnityEngine::Vector2& point, ::Dest::Math::Circle2& circle, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Circle2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2CIRCLE2_1_OFFSET))(point, circle, closestPoint);
		}

		static ::System::Single Point2Line2(::UnityEngine::Vector2& point, ::Dest::Math::Line2& line)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Line2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2LINE2_OFFSET))(point, line);
		}

		static ::System::Single Point2Line2_1(::UnityEngine::Vector2& point, ::Dest::Math::Line2& line, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Line2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2LINE2_1_OFFSET))(point, line, closestPoint);
		}

		static ::System::Single SqrPoint2Line2(::UnityEngine::Vector2& point, ::Dest::Math::Line2& line)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Line2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2LINE2_OFFSET))(point, line);
		}

		static ::System::Single SqrPoint2Line2_1(::UnityEngine::Vector2& point, ::Dest::Math::Line2& line, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Line2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2LINE2_1_OFFSET))(point, line, closestPoint);
		}

		static ::System::Single Point2Ray2(::UnityEngine::Vector2& point, ::Dest::Math::Ray2& ray)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Ray2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2RAY2_OFFSET))(point, ray);
		}

		static ::System::Single Point2Ray2_1(::UnityEngine::Vector2& point, ::Dest::Math::Ray2& ray, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Ray2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2RAY2_1_OFFSET))(point, ray, closestPoint);
		}

		static ::System::Single SqrPoint2Ray2(::UnityEngine::Vector2& point, ::Dest::Math::Ray2& ray)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Ray2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2RAY2_OFFSET))(point, ray);
		}

		static ::System::Single SqrPoint2Ray2_1(::UnityEngine::Vector2& point, ::Dest::Math::Ray2& ray, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Ray2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2RAY2_1_OFFSET))(point, ray, closestPoint);
		}

		static ::System::Single Point2Segment2(::UnityEngine::Vector2& point, ::Dest::Math::Segment2& segment)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2SEGMENT2_OFFSET))(point, segment);
		}

		static ::System::Single Point2Segment2_1(::UnityEngine::Vector2& point, ::Dest::Math::Segment2& segment, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Segment2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2SEGMENT2_1_OFFSET))(point, segment, closestPoint);
		}

		static ::System::Single SqrPoint2Segment2(::UnityEngine::Vector2& point, ::Dest::Math::Segment2& segment)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2SEGMENT2_OFFSET))(point, segment);
		}

		static ::System::Single SqrPoint2Segment2_1(::UnityEngine::Vector2& point, ::Dest::Math::Segment2& segment, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Segment2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2SEGMENT2_1_OFFSET))(point, segment, closestPoint);
		}

		static ::System::Single Point2Triangle2(::UnityEngine::Vector2& point, ::Dest::Math::Triangle2& triangle)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Triangle2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2TRIANGLE2_OFFSET))(point, triangle);
		}

		static ::System::Single Point2Triangle2_1(::UnityEngine::Vector2& point, ::Dest::Math::Triangle2& triangle, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Triangle2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT2TRIANGLE2_1_OFFSET))(point, triangle, closestPoint);
		}

		static ::System::Single SqrPoint2Triangle2(::UnityEngine::Vector2& point, ::Dest::Math::Triangle2& triangle)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Triangle2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2TRIANGLE2_OFFSET))(point, triangle);
		}

		static ::System::Single SqrPoint2Triangle2_1(::UnityEngine::Vector2& point, ::Dest::Math::Triangle2& triangle, ::UnityEngine::Vector2& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::Dest::Math::Triangle2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT2TRIANGLE2_1_OFFSET))(point, triangle, closestPoint);
		}

		static ::System::Single Ray2Ray2(::Dest::Math::Ray2& ray0, ::Dest::Math::Ray2& ray1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray2&, ::Dest::Math::Ray2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_RAY2RAY2_OFFSET))(ray0, ray1);
		}

		static ::System::Single Ray2Ray2_1(::Dest::Math::Ray2& ray0, ::Dest::Math::Ray2& ray1, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray2&, ::Dest::Math::Ray2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_RAY2RAY2_1_OFFSET))(ray0, ray1, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrRay2Ray2(::Dest::Math::Ray2& ray0, ::Dest::Math::Ray2& ray1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray2&, ::Dest::Math::Ray2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRRAY2RAY2_OFFSET))(ray0, ray1);
		}

		static ::System::Single SqrRay2Ray2_1(::Dest::Math::Ray2& ray0, ::Dest::Math::Ray2& ray1, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray2&, ::Dest::Math::Ray2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRRAY2RAY2_1_OFFSET))(ray0, ray1, closestPoint0, closestPoint1);
		}

		static ::System::Single Ray2Segment2(::Dest::Math::Ray2& ray, ::Dest::Math::Segment2& segment)
		{
			return ((::System::Single(*)(::Dest::Math::Ray2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_RAY2SEGMENT2_OFFSET))(ray, segment);
		}

		static ::System::Single Ray2Segment2_1(::Dest::Math::Ray2& ray, ::Dest::Math::Segment2& segment, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray2&, ::Dest::Math::Segment2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_RAY2SEGMENT2_1_OFFSET))(ray, segment, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrRay2Segment2(::Dest::Math::Ray2& ray, ::Dest::Math::Segment2& segment)
		{
			return ((::System::Single(*)(::Dest::Math::Ray2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRRAY2SEGMENT2_OFFSET))(ray, segment);
		}

		static ::System::Single SqrRay2Segment2_1(::Dest::Math::Ray2& ray, ::Dest::Math::Segment2& segment, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray2&, ::Dest::Math::Segment2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRRAY2SEGMENT2_1_OFFSET))(ray, segment, closestPoint0, closestPoint1);
		}

		static ::System::Single Segment2Segment2(::Dest::Math::Segment2& segment0, ::Dest::Math::Segment2& segment1)
		{
			return ((::System::Single(*)(::Dest::Math::Segment2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SEGMENT2SEGMENT2_OFFSET))(segment0, segment1);
		}

		static ::System::Single Segment2Segment2_1(::Dest::Math::Segment2& segment0, ::Dest::Math::Segment2& segment1, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Segment2&, ::Dest::Math::Segment2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SEGMENT2SEGMENT2_1_OFFSET))(segment0, segment1, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrSegment2Segment2(::Dest::Math::Segment2& segment0, ::Dest::Math::Segment2& segment1)
		{
			return ((::System::Single(*)(::Dest::Math::Segment2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRSEGMENT2SEGMENT2_OFFSET))(segment0, segment1);
		}

		static ::System::Single SqrSegment2Segment2_1(::Dest::Math::Segment2& segment0, ::Dest::Math::Segment2& segment1, ::UnityEngine::Vector2& closestPoint0, ::UnityEngine::Vector2& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Segment2&, ::Dest::Math::Segment2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRSEGMENT2SEGMENT2_1_OFFSET))(segment0, segment1, closestPoint0, closestPoint1);
		}

		static ::System::Void Face(::Dest::Math::Box3& mBox, ::System::Single& mLineParameter, ::System::Int32 i0, ::System::Int32 i1, ::System::Int32 i2, ::UnityEngine::Vector3& pnt, ::UnityEngine::Vector3& dir, ::UnityEngine::Vector3& PmE, ::System::Single& sqrDistance)
		{
			return ((::System::Void(*)(::Dest::Math::Box3&, ::System::Single&, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_FACE_OFFSET))(mBox, mLineParameter, i0, i1, i2, pnt, dir, PmE, sqrDistance);
		}

		static ::System::Void CaseNoZeros(::Dest::Math::Box3& mBox, ::System::Single& mLineParameter, ::UnityEngine::Vector3& pnt, ::UnityEngine::Vector3& dir, ::System::Single& sqrDistance)
		{
			return ((::System::Void(*)(::Dest::Math::Box3&, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_CASENOZEROS_OFFSET))(mBox, mLineParameter, pnt, dir, sqrDistance);
		}

		static ::System::Void Case0(::Dest::Math::Box3& mBox, ::System::Single& mLineParameter, ::System::Int32 i0, ::System::Int32 i1, ::System::Int32 i2, ::UnityEngine::Vector3& pnt, ::UnityEngine::Vector3& dir, ::System::Single& sqrDistance)
		{
			return ((::System::Void(*)(::Dest::Math::Box3&, ::System::Single&, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_CASE0_OFFSET))(mBox, mLineParameter, i0, i1, i2, pnt, dir, sqrDistance);
		}

		static ::System::Void Case00(::Dest::Math::Box3& mBox, ::System::Single& mLineParameter, ::System::Int32 i0, ::System::Int32 i1, ::System::Int32 i2, ::UnityEngine::Vector3& pnt, ::UnityEngine::Vector3& dir, ::System::Single& sqrDistance)
		{
			return ((::System::Void(*)(::Dest::Math::Box3&, ::System::Single&, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_CASE00_OFFSET))(mBox, mLineParameter, i0, i1, i2, pnt, dir, sqrDistance);
		}

		static ::System::Void Case000(::Dest::Math::Box3& mBox, ::System::Single& mLineParameter, ::UnityEngine::Vector3& pnt, ::System::Single& sqrDistance)
		{
			return ((::System::Void(*)(::Dest::Math::Box3&, ::System::Single&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_CASE000_OFFSET))(mBox, mLineParameter, pnt, sqrDistance);
		}

		static ::System::Single Line3Box3(::Dest::Math::Line3& line, ::Dest::Math::Box3& box, ::Dest::Math::Line3Box3Dist& info)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Box3&, ::Dest::Math::Line3Box3Dist&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE3BOX3_OFFSET))(line, box, info);
		}

		static ::System::Single Line3Box3_1(::Dest::Math::Line3& line, ::Dest::Math::Box3& box)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE3BOX3_1_OFFSET))(line, box);
		}

		static ::System::Single SqrLine3Box3(::Dest::Math::Line3& line, ::Dest::Math::Box3& box, ::Dest::Math::Line3Box3Dist& info)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Box3&, ::Dest::Math::Line3Box3Dist&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE3BOX3_OFFSET))(line, box, info);
		}

		static ::System::Single SqrLine3Box3_1(::Dest::Math::Line3& line, ::Dest::Math::Box3& box)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE3BOX3_1_OFFSET))(line, box);
		}

		static ::System::Single Line3Line3(::Dest::Math::Line3& line0, ::Dest::Math::Line3& line1)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Line3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE3LINE3_OFFSET))(line0, line1);
		}

		static ::System::Single Line3Line3_1(::Dest::Math::Line3& line0, ::Dest::Math::Line3& line1, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Line3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE3LINE3_1_OFFSET))(line0, line1, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrLine3Line3(::Dest::Math::Line3& line0, ::Dest::Math::Line3& line1)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Line3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE3LINE3_OFFSET))(line0, line1);
		}

		static ::System::Single SqrLine3Line3_1(::Dest::Math::Line3& line0, ::Dest::Math::Line3& line1, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Line3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE3LINE3_1_OFFSET))(line0, line1, closestPoint0, closestPoint1);
		}

		static ::System::Single Line3Ray3(::Dest::Math::Line3& line, ::Dest::Math::Ray3& ray)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Ray3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE3RAY3_OFFSET))(line, ray);
		}

		static ::System::Single Line3Ray3_1(::Dest::Math::Line3& line, ::Dest::Math::Ray3& ray, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Ray3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE3RAY3_1_OFFSET))(line, ray, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrLine3Ray3(::Dest::Math::Line3& line, ::Dest::Math::Ray3& ray)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Ray3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE3RAY3_OFFSET))(line, ray);
		}

		static ::System::Single SqrLine3Ray3_1(::Dest::Math::Line3& line, ::Dest::Math::Ray3& ray, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Ray3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE3RAY3_1_OFFSET))(line, ray, closestPoint0, closestPoint1);
		}

		static ::System::Single Line3Segment3(::Dest::Math::Line3& line, ::Dest::Math::Segment3& segment)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Segment3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE3SEGMENT3_OFFSET))(line, segment);
		}

		static ::System::Single Line3Segment3_1(::Dest::Math::Line3& line, ::Dest::Math::Segment3& segment, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Segment3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_LINE3SEGMENT3_1_OFFSET))(line, segment, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrLine3Segment3(::Dest::Math::Line3& line, ::Dest::Math::Segment3& segment)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Segment3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE3SEGMENT3_OFFSET))(line, segment);
		}

		static ::System::Single SqrLine3Segment3_1(::Dest::Math::Line3& line, ::Dest::Math::Segment3& segment, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Line3&, ::Dest::Math::Segment3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRLINE3SEGMENT3_1_OFFSET))(line, segment, closestPoint0, closestPoint1);
		}

		static ::System::Single Point3AAB3(::UnityEngine::Vector3& point, ::Dest::Math::AAB3& box)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3AAB3_OFFSET))(point, box);
		}

		static ::System::Single Point3AAB3_1(::UnityEngine::Vector3& point, ::Dest::Math::AAB3& box, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::AAB3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3AAB3_1_OFFSET))(point, box, closestPoint);
		}

		static ::System::Single SqrPoint3AAB3(::UnityEngine::Vector3& point, ::Dest::Math::AAB3& box)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3AAB3_OFFSET))(point, box);
		}

		static ::System::Single SqrPoint3AAB3_1(::UnityEngine::Vector3& point, ::Dest::Math::AAB3& box, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::AAB3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3AAB3_1_OFFSET))(point, box, closestPoint);
		}

		static ::System::Single Point3Box3(::UnityEngine::Vector3& point, ::Dest::Math::Box3& box)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3BOX3_OFFSET))(point, box);
		}

		static ::System::Single Point3Box3_1(::UnityEngine::Vector3& point, ::Dest::Math::Box3& box, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Box3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3BOX3_1_OFFSET))(point, box, closestPoint);
		}

		static ::System::Single SqrPoint3Box3(::UnityEngine::Vector3& point, ::Dest::Math::Box3& box)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3BOX3_OFFSET))(point, box);
		}

		static ::System::Single SqrPoint3Box3_1(::UnityEngine::Vector3& point, ::Dest::Math::Box3& box, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Box3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3BOX3_1_OFFSET))(point, box, closestPoint);
		}

		static ::System::Single Point3Circle3(::UnityEngine::Vector3& point, ::Dest::Math::Circle3& circle, ::System::Boolean solid)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Circle3&, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3CIRCLE3_OFFSET))(point, circle, solid);
		}

		static ::System::Single Point3Circle3_1(::UnityEngine::Vector3& point, ::Dest::Math::Circle3& circle, ::UnityEngine::Vector3& closestPoint, ::System::Boolean solid)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Circle3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3CIRCLE3_1_OFFSET))(point, circle, closestPoint, solid);
		}

		static ::System::Single SqrPoint3Circle3(::UnityEngine::Vector3& point, ::Dest::Math::Circle3& circle, ::System::Boolean solid)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Circle3&, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3CIRCLE3_OFFSET))(point, circle, solid);
		}

		static ::System::Single SqrPoint3Circle3_1(::UnityEngine::Vector3& point, ::Dest::Math::Circle3& circle, ::UnityEngine::Vector3& closestPoint, ::System::Boolean solid)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Circle3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3CIRCLE3_1_OFFSET))(point, circle, closestPoint, solid);
		}

		static ::System::Single Point3Line3(::UnityEngine::Vector3& point, ::Dest::Math::Line3& line)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Line3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3LINE3_OFFSET))(point, line);
		}

		static ::System::Single Point3Line3_1(::UnityEngine::Vector3& point, ::Dest::Math::Line3& line, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Line3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3LINE3_1_OFFSET))(point, line, closestPoint);
		}

		static ::System::Single SqrPoint3Line3(::UnityEngine::Vector3& point, ::Dest::Math::Line3& line)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Line3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3LINE3_OFFSET))(point, line);
		}

		static ::System::Single SqrPoint3Line3_1(::UnityEngine::Vector3& point, ::Dest::Math::Line3& line, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Line3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3LINE3_1_OFFSET))(point, line, closestPoint);
		}

		static ::System::Single Point3Plane3(::UnityEngine::Vector3& point, ::Dest::Math::Plane3& plane)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Plane3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3PLANE3_OFFSET))(point, plane);
		}

		static ::System::Single Point3Plane3_1(::UnityEngine::Vector3& point, ::Dest::Math::Plane3& plane, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Plane3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3PLANE3_1_OFFSET))(point, plane, closestPoint);
		}

		static ::System::Single SqrPoint3Plane3(::UnityEngine::Vector3& point, ::Dest::Math::Plane3& plane)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Plane3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3PLANE3_OFFSET))(point, plane);
		}

		static ::System::Single SqrPoint3Plane3_1(::UnityEngine::Vector3& point, ::Dest::Math::Plane3& plane, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Plane3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3PLANE3_1_OFFSET))(point, plane, closestPoint);
		}

		static ::System::Single Point3Ray3(::UnityEngine::Vector3& point, ::Dest::Math::Ray3& ray)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Ray3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3RAY3_OFFSET))(point, ray);
		}

		static ::System::Single Point3Ray3_1(::UnityEngine::Vector3& point, ::Dest::Math::Ray3& ray, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Ray3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3RAY3_1_OFFSET))(point, ray, closestPoint);
		}

		static ::System::Single SqrPoint3Ray3(::UnityEngine::Vector3& point, ::Dest::Math::Ray3& ray)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Ray3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3RAY3_OFFSET))(point, ray);
		}

		static ::System::Single SqrPoint3Ray3_1(::UnityEngine::Vector3& point, ::Dest::Math::Ray3& ray, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Ray3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3RAY3_1_OFFSET))(point, ray, closestPoint);
		}

		static ::System::Single Point3Rectangle3(::UnityEngine::Vector3& point, ::Dest::Math::Rectangle3& rectangle)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Rectangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3RECTANGLE3_OFFSET))(point, rectangle);
		}

		static ::System::Single Point3Rectangle3_1(::UnityEngine::Vector3& point, ::Dest::Math::Rectangle3& rectangle, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Rectangle3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3RECTANGLE3_1_OFFSET))(point, rectangle, closestPoint);
		}

		static ::System::Single SqrPoint3Rectangle3(::UnityEngine::Vector3& point, ::Dest::Math::Rectangle3& rectangle)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Rectangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3RECTANGLE3_OFFSET))(point, rectangle);
		}

		static ::System::Single SqrPoint3Rectangle3_1(::UnityEngine::Vector3& point, ::Dest::Math::Rectangle3& rectangle, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Rectangle3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3RECTANGLE3_1_OFFSET))(point, rectangle, closestPoint);
		}

		static ::System::Single Point3Segment3(::UnityEngine::Vector3& point, ::Dest::Math::Segment3& segment)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Segment3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3SEGMENT3_OFFSET))(point, segment);
		}

		static ::System::Single Point3Segment3_1(::UnityEngine::Vector3& point, ::Dest::Math::Segment3& segment, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Segment3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3SEGMENT3_1_OFFSET))(point, segment, closestPoint);
		}

		static ::System::Single SqrPoint3Segment3(::UnityEngine::Vector3& point, ::Dest::Math::Segment3& segment)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Segment3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3SEGMENT3_OFFSET))(point, segment);
		}

		static ::System::Single SqrPoint3Segment3_1(::UnityEngine::Vector3& point, ::Dest::Math::Segment3& segment, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Segment3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3SEGMENT3_1_OFFSET))(point, segment, closestPoint);
		}

		static ::System::Single Point3Sphere3(::UnityEngine::Vector3& point, ::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3SPHERE3_OFFSET))(point, sphere);
		}

		static ::System::Single Point3Sphere3_1(::UnityEngine::Vector3& point, ::Dest::Math::Sphere3& sphere, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Sphere3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_POINT3SPHERE3_1_OFFSET))(point, sphere, closestPoint);
		}

		static ::System::Single SqrPoint3Sphere3(::UnityEngine::Vector3& point, ::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3SPHERE3_OFFSET))(point, sphere);
		}

		static ::System::Single SqrPoint3Sphere3_1(::UnityEngine::Vector3& point, ::Dest::Math::Sphere3& sphere, ::UnityEngine::Vector3& closestPoint)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::Dest::Math::Sphere3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRPOINT3SPHERE3_1_OFFSET))(point, sphere, closestPoint);
		}

		static ::System::Single Ray3Ray3(::Dest::Math::Ray3& ray0, ::Dest::Math::Ray3& ray1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray3&, ::Dest::Math::Ray3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_RAY3RAY3_OFFSET))(ray0, ray1);
		}

		static ::System::Single Ray3Ray3_1(::Dest::Math::Ray3& ray0, ::Dest::Math::Ray3& ray1, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray3&, ::Dest::Math::Ray3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_RAY3RAY3_1_OFFSET))(ray0, ray1, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrRay3Ray3(::Dest::Math::Ray3& ray0, ::Dest::Math::Ray3& ray1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray3&, ::Dest::Math::Ray3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRRAY3RAY3_OFFSET))(ray0, ray1);
		}

		static ::System::Single SqrRay3Ray3_1(::Dest::Math::Ray3& ray0, ::Dest::Math::Ray3& ray1, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray3&, ::Dest::Math::Ray3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRRAY3RAY3_1_OFFSET))(ray0, ray1, closestPoint0, closestPoint1);
		}

		static ::System::Single Ray3Segment3(::Dest::Math::Ray3& ray, ::Dest::Math::Segment3& segment)
		{
			return ((::System::Single(*)(::Dest::Math::Ray3&, ::Dest::Math::Segment3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_RAY3SEGMENT3_OFFSET))(ray, segment);
		}

		static ::System::Single Ray3Segment3_1(::Dest::Math::Ray3& ray, ::Dest::Math::Segment3& segment, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray3&, ::Dest::Math::Segment3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_RAY3SEGMENT3_1_OFFSET))(ray, segment, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrRay3Segment3(::Dest::Math::Ray3& ray, ::Dest::Math::Segment3& segment)
		{
			return ((::System::Single(*)(::Dest::Math::Ray3&, ::Dest::Math::Segment3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRRAY3SEGMENT3_OFFSET))(ray, segment);
		}

		static ::System::Single SqrRay3Segment3_1(::Dest::Math::Ray3& ray, ::Dest::Math::Segment3& segment, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Ray3&, ::Dest::Math::Segment3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRRAY3SEGMENT3_1_OFFSET))(ray, segment, closestPoint0, closestPoint1);
		}

		static ::System::Single Segment3Box3(::Dest::Math::Segment3& segment, ::Dest::Math::Box3& box, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Segment3&, ::Dest::Math::Box3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SEGMENT3BOX3_OFFSET))(segment, box, closestPoint0, closestPoint1);
		}

		static ::System::Single Segment3Box3_1(::Dest::Math::Segment3& segment, ::Dest::Math::Box3& box)
		{
			return ((::System::Single(*)(::Dest::Math::Segment3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SEGMENT3BOX3_1_OFFSET))(segment, box);
		}

		static ::System::Single SqrSegment3Box3(::Dest::Math::Segment3& segment, ::Dest::Math::Box3& box, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Segment3&, ::Dest::Math::Box3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRSEGMENT3BOX3_OFFSET))(segment, box, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrSegment3Box3_1(::Dest::Math::Segment3& segment, ::Dest::Math::Box3& box)
		{
			return ((::System::Single(*)(::Dest::Math::Segment3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRSEGMENT3BOX3_1_OFFSET))(segment, box);
		}

		static ::System::Single Segment3Segment3(::Dest::Math::Segment3& segment0, ::Dest::Math::Segment3& segment1)
		{
			return ((::System::Single(*)(::Dest::Math::Segment3&, ::Dest::Math::Segment3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SEGMENT3SEGMENT3_OFFSET))(segment0, segment1);
		}

		static ::System::Single Segment3Segment3_1(::Dest::Math::Segment3& segment0, ::Dest::Math::Segment3& segment1, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Segment3&, ::Dest::Math::Segment3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SEGMENT3SEGMENT3_1_OFFSET))(segment0, segment1, closestPoint0, closestPoint1);
		}

		static ::System::Single SqrSegment3Segment3(::Dest::Math::Segment3& segment0, ::Dest::Math::Segment3& segment1)
		{
			return ((::System::Single(*)(::Dest::Math::Segment3&, ::Dest::Math::Segment3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRSEGMENT3SEGMENT3_OFFSET))(segment0, segment1);
		}

		static ::System::Single SqrSegment3Segment3_1(::Dest::Math::Segment3& segment0, ::Dest::Math::Segment3& segment1, ::UnityEngine::Vector3& closestPoint0, ::UnityEngine::Vector3& closestPoint1)
		{
			return ((::System::Single(*)(::Dest::Math::Segment3&, ::Dest::Math::Segment3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_DISTANCE_SQRSEGMENT3SEGMENT3_1_OFFSET))(segment0, segment1, closestPoint0, closestPoint1);
		}
	};
}
