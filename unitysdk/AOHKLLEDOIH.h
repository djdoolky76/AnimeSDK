#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Object; }

#define AOHKLLEDOIH_EEELPONCNAD_1_OFFSET UNITYSDK_OFFSET(0x17DE7C40)
#define AOHKLLEDOIH_EEELPONCNAD_2_OFFSET UNITYSDK_OFFSET(0x17DE7C50)
#define AOHKLLEDOIH_EEELPONCNAD_3_OFFSET UNITYSDK_OFFSET(0x17DE7C60)
#define AOHKLLEDOIH_EEELPONCNAD_4_OFFSET UNITYSDK_OFFSET(0x17DE7C70)
#define AOHKLLEDOIH_EEELPONCNAD_5_OFFSET UNITYSDK_OFFSET(0x17DE7D20)
#define AOHKLLEDOIH_EEELPONCNAD_6_OFFSET UNITYSDK_OFFSET(0x17DE7D30)
#define AOHKLLEDOIH_EEELPONCNAD_OFFSET UNITYSDK_OFFSET(0x17DE7C30)

inline static constexpr unsigned int AOHKLLEDOIH_TypeDefinitionIndex = 82986;

class AOHKLLEDOIH : public ::System::Object
{
public:
	static ::System::Void EEELPONCNAD(::UnityEngine::Vector2 OLKHDAAGGAA, ::UnityEngine::Vector2& OAFLGAMBFGO)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + AOHKLLEDOIH_EEELPONCNAD_OFFSET))(OLKHDAAGGAA, OAFLGAMBFGO);
	}

	static ::System::Void EEELPONCNAD_1(::UnityEngine::Color OLKHDAAGGAA, ::UnityEngine::Color& OAFLGAMBFGO)
	{
		return ((::System::Void(*)(::UnityEngine::Color, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + AOHKLLEDOIH_EEELPONCNAD_1_OFFSET))(OLKHDAAGGAA, OAFLGAMBFGO);
	}

	static ::System::Void EEELPONCNAD_2(::UnityEngine::Object* OLKHDAAGGAA, ::UnityEngine::Object*& OAFLGAMBFGO)
	{
		return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + AOHKLLEDOIH_EEELPONCNAD_2_OFFSET))(OLKHDAAGGAA, OAFLGAMBFGO);
	}

	static ::System::Void EEELPONCNAD_3(::UnityEngine::Color32 OLKHDAAGGAA, ::UnityEngine::Color32& OAFLGAMBFGO)
	{
		return ((::System::Void(*)(::UnityEngine::Color32, ::UnityEngine::Color32&))((::PBYTE)hIl2Cpp + AOHKLLEDOIH_EEELPONCNAD_3_OFFSET))(OLKHDAAGGAA, OAFLGAMBFGO);
	}

	static ::System::Void EEELPONCNAD_4(::UnityEngine::AnimationCurve* OLKHDAAGGAA, ::UnityEngine::AnimationCurve*& OAFLGAMBFGO)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*&))((::PBYTE)hIl2Cpp + AOHKLLEDOIH_EEELPONCNAD_4_OFFSET))(OLKHDAAGGAA, OAFLGAMBFGO);
	}

	static ::System::Void EEELPONCNAD_5(::UnityEngine::Vector3 OLKHDAAGGAA, ::UnityEngine::Vector3& OAFLGAMBFGO)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AOHKLLEDOIH_EEELPONCNAD_5_OFFSET))(OLKHDAAGGAA, OAFLGAMBFGO);
	}

	static ::System::Void EEELPONCNAD_6(::UnityEngine::Vector4 OLKHDAAGGAA, ::UnityEngine::Vector4& OAFLGAMBFGO)
	{
		return ((::System::Void(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + AOHKLLEDOIH_EEELPONCNAD_6_OFFSET))(OLKHDAAGGAA, OAFLGAMBFGO);
	}
};
