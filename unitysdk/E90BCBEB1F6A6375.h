#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/A18F2705D8E6B027.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class MonoFadeAnimation; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define E90BCBEB1F6A6375_AE6A28825D554FEA_OFFSET UNITYSDK_OFFSET(0x1F32CC0)
#define E90BCBEB1F6A6375_FAEFB619291D4574_OFFSET UNITYSDK_OFFSET(0x1F32E50)
#define E90BCBEB1F6A6375_FEB34DC61D1113D4_OFFSET UNITYSDK_OFFSET(0x1F33000)

inline static constexpr unsigned int E90BCBEB1F6A6375_TypeDefinitionIndex = 7587;

class E90BCBEB1F6A6375 : public ::System::Object
{
public:
	static ::UnityEngine::AnimationClip* FAEFB619291D4574(::ABC::UI::MonoFadeAnimation* FAFE5C20C9728DDB, ::System::String* F51A1A86C6E82E11)
	{
		return ((::UnityEngine::AnimationClip*(*)(::ABC::UI::MonoFadeAnimation*, ::System::String*))((::PBYTE)hIl2Cpp + E90BCBEB1F6A6375_FAEFB619291D4574_OFFSET))(FAFE5C20C9728DDB, F51A1A86C6E82E11);
	}

	static ::UnityEngine::AnimationClip* FEB34DC61D1113D4(::ABC::UI::MonoFadeAnimation* FAFE5C20C9728DDB, ::System::String* AE267F9E3418FBCE)
	{
		return ((::UnityEngine::AnimationClip*(*)(::ABC::UI::MonoFadeAnimation*, ::System::String*))((::PBYTE)hIl2Cpp + E90BCBEB1F6A6375_FEB34DC61D1113D4_OFFSET))(FAFE5C20C9728DDB, AE267F9E3418FBCE);
	}

	static ::B39AAAD1233537D7::A18F2705D8E6B027 AE6A28825D554FEA(::ABC::UI::MonoFadeAnimation* FAFE5C20C9728DDB, ::System::String* AE267F9E3418FBCE)
	{
		return ((::B39AAAD1233537D7::A18F2705D8E6B027(*)(::ABC::UI::MonoFadeAnimation*, ::System::String*))((::PBYTE)hIl2Cpp + E90BCBEB1F6A6375_AE6A28825D554FEA_OFFSET))(FAFE5C20C9728DDB, AE267F9E3418FBCE);
	}
};
