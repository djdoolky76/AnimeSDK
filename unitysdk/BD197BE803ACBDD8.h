#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/A33556D9C09EA52A.h"
#include "unitysdk/B223EC95048EAAE0/BB38535E93894DB3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float3.h"

class E19F70DCB9D21BB3;
namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class Road; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Splines { class Spline; }
namespace UnityEngine::Splines { class SplineContainer; }

#define BD197BE803ACBDD8_AFC824C1EAF59840_OFFSET UNITYSDK_OFFSET(0x3DA7620)
#define BD197BE803ACBDD8_BE5723A5C39DFBAD_OFFSET UNITYSDK_OFFSET(0x3DA7910)
#define BD197BE803ACBDD8_F25080478F657CFC_OFFSET UNITYSDK_OFFSET(0x3DA7820)
#define BD197BE803ACBDD8_F742D7ACE367F270_OFFSET UNITYSDK_OFFSET(0x3DA7850)
#define BD197BE803ACBDD8_FC6517895369B492_OFFSET UNITYSDK_OFFSET(0x3DA78E0)
#define BD197BE803ACBDD8_FD81E7E95813FBAA_OFFSET UNITYSDK_OFFSET(0x3DA7760)
#define BD197BE803ACBDD8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BD197BE803ACBDD8_TypeDefinitionIndex = 18914;

class BD197BE803ACBDD8 : public ::System::Object
{
public:
	::System::Boolean FF2874CEA7CA8AFE; // 0x10
	::System::Byte _padding0[0x3];
	::B223EC95048EAAE0::A33556D9C09EA52A E863D265409E7C72; // 0x14
	::B223EC95048EAAE0::BB38535E93894DB3 E7DB9E32F74835C8; // 0x18
	::Unity::Mathematics::float3 EB211B01816ACA79; // 0x1C
	::System::Int32 B48C66E5FB2449C6; // 0x28
	::System::Byte _padding1[0x4];
	::System::Collections::Generic::List_1<::E19F70DCB9D21BB3*>* A0FC1889C1D34384; // 0x30
	::PampelGames::RoadConstructor::IntersectionObject* B4A425C7CA54B2F3; // 0x38
	::PampelGames::RoadConstructor::RoadObject* B53D9FA4D4836DFD; // 0x40
	::UnityEngine::Splines::Spline* F03E0BDCBABB08A2; // 0x48
	::System::Single BBCFEC7DB309E927; // 0x50
	::Unity::Mathematics::float3 F142F71C449A09B4; // 0x54
	::Unity::Mathematics::float3 EB5B00BC81AB2256; // 0x60

	::System::Boolean FD81E7E95813FBAA(::PampelGames::RoadConstructor::Road* FCB2037F019D84DF)
	{
		return ((::System::Boolean(*)(::PVOID, ::PampelGames::RoadConstructor::Road*))((::PBYTE)hIl2Cpp + BD197BE803ACBDD8_FD81E7E95813FBAA_OFFSET))(this, FCB2037F019D84DF);
	}

	::UnityEngine::Splines::SplineContainer* FC6517895369B492()
	{
		return ((::UnityEngine::Splines::SplineContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BD197BE803ACBDD8_FC6517895369B492_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD197BE803ACBDD8__CTOR_OFFSET))(this);
	}

	::System::Boolean F25080478F657CFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BD197BE803ACBDD8_F25080478F657CFC_OFFSET))(this);
	}

	::System::Boolean AFC824C1EAF59840()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BD197BE803ACBDD8_AFC824C1EAF59840_OFFSET))(this);
	}

	::System::Single BE5723A5C39DFBAD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BD197BE803ACBDD8_BE5723A5C39DFBAD_OFFSET))(this);
	}

	::Unity::Mathematics::float3 F742D7ACE367F270()
	{
		return ((::Unity::Mathematics::float3(*)(::PVOID))((::PBYTE)hIl2Cpp + BD197BE803ACBDD8_F742D7ACE367F270_OFFSET))(this);
	}
};
