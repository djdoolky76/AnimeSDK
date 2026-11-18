#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/HJNGDKHLLEG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define LEPAFLGKACJ_JDIPDFNKOLF_1_OFFSET UNITYSDK_OFFSET(0x15BD61D0)
#define LEPAFLGKACJ_JDIPDFNKOLF_2_OFFSET UNITYSDK_OFFSET(0x15BD6290)
#define LEPAFLGKACJ_JDIPDFNKOLF_4_OFFSET UNITYSDK_OFFSET(0x15BD6350)
#define LEPAFLGKACJ_JDIPDFNKOLF_5_OFFSET UNITYSDK_OFFSET(0x15BD6460)
#define LEPAFLGKACJ_JDIPDFNKOLF_6_OFFSET UNITYSDK_OFFSET(0x15BD6500)
#define LEPAFLGKACJ_JDIPDFNKOLF_7_OFFSET UNITYSDK_OFFSET(0x15BD6790)
#define LEPAFLGKACJ_JDIPDFNKOLF_OFFSET UNITYSDK_OFFSET(0x15BD6000)

inline static constexpr unsigned int LEPAFLGKACJ_TypeDefinitionIndex = 47816;

class LEPAFLGKACJ : public ::System::Object
{
public:
	static ::System::Boolean JDIPDFNKOLF(::FlexBuffers::FlxValue HHIJHDFHPOI, ::UnityEngine::Vector2& PMKOELLKDDN)
	{
		return ((::System::Boolean(*)(::FlexBuffers::FlxValue, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LEPAFLGKACJ_JDIPDFNKOLF_OFFSET))(HHIJHDFHPOI, PMKOELLKDDN);
	}

	static ::System::Boolean JDIPDFNKOLF_1(::FlexBuffers::FlxValue HHIJHDFHPOI, ::Foundation::AssetPath& OIIHCACKLHD)
	{
		return ((::System::Boolean(*)(::FlexBuffers::FlxValue, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + LEPAFLGKACJ_JDIPDFNKOLF_1_OFFSET))(HHIJHDFHPOI, OIIHCACKLHD);
	}

	static ::System::Boolean JDIPDFNKOLF_2(::FlexBuffers::FlxValue HHIJHDFHPOI, ::UnityEngine::AnimationCurve*& FAJHPKBELMF)
	{
		return ((::System::Boolean(*)(::FlexBuffers::FlxValue, ::UnityEngine::AnimationCurve*&))((::PBYTE)hIl2Cpp + LEPAFLGKACJ_JDIPDFNKOLF_2_OFFSET))(HHIJHDFHPOI, FAJHPKBELMF);
	}

	static ::System::Boolean JDIPDFNKOLF_4(::FlexBuffers::FlxValue HHIJHDFHPOI, ::UnityEngine::Color& PMKOELLKDDN)
	{
		return ((::System::Boolean(*)(::FlexBuffers::FlxValue, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + LEPAFLGKACJ_JDIPDFNKOLF_4_OFFSET))(HHIJHDFHPOI, PMKOELLKDDN);
	}

	static ::System::Boolean JDIPDFNKOLF_5(::FlexBuffers::FlxValue HHIJHDFHPOI, ::HJNGDKHLLEG& KDGMEFEJMGJ)
	{
		return ((::System::Boolean(*)(::FlexBuffers::FlxValue, ::HJNGDKHLLEG&))((::PBYTE)hIl2Cpp + LEPAFLGKACJ_JDIPDFNKOLF_5_OFFSET))(HHIJHDFHPOI, KDGMEFEJMGJ);
	}

	static ::System::Boolean JDIPDFNKOLF_6(::FlexBuffers::FlxValue HHIJHDFHPOI, ::UnityEngine::Vector3& PMKOELLKDDN)
	{
		return ((::System::Boolean(*)(::FlexBuffers::FlxValue, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LEPAFLGKACJ_JDIPDFNKOLF_6_OFFSET))(HHIJHDFHPOI, PMKOELLKDDN);
	}

	static ::System::Boolean JDIPDFNKOLF_7(::FlexBuffers::FlxValue HHIJHDFHPOI, ::System::Object*& EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::FlexBuffers::FlxValue, ::System::Object*&))((::PBYTE)hIl2Cpp + LEPAFLGKACJ_JDIPDFNKOLF_7_OFFSET))(HHIJHDFHPOI, EIFONLCJOPG);
	}
};
