#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
namespace RPG::GameCore { class ChenLingBattleAirMotionConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define PFFEFMOFHIN_CTOR_OFFSET UNITYSDK_OFFSET(0xC20D010)
#define PFFEFMOFHIN_DKKLHBHDINK_1_OFFSET UNITYSDK_OFFSET(0xC20C980)
#define PFFEFMOFHIN_DKKLHBHDINK_OFFSET UNITYSDK_OFFSET(0xC20C4C0)
#define PFFEFMOFHIN_IHIFIHGIHGB_OFFSET UNITYSDK_OFFSET(0xC20C390)
#define PFFEFMOFHIN_NNFEFGGGECF_OFFSET UNITYSDK_OFFSET(0xC20CF20)

	class PFFEFMOFHIN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFEFMOFHIN_CTOR_OFFSET))(this);
		}

		::System::Single IHIFIHGIHGB(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + PFFEFMOFHIN_IHIFIHGIHGB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DKKLHBHDINK(::ALMFLCJCHKP* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::GameCore::ChenLingBattleAirMotionConfig* a4, ::System::Action* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::ChenLingBattleAirMotionConfig*, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + PFFEFMOFHIN_DKKLHBHDINK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DKKLHBHDINK_1(::ALMFLCJCHKP* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::AnimationCurve* a7, ::System::Action* a8)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + PFFEFMOFHIN_DKKLHBHDINK_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void NNFEFGGGECF(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + PFFEFMOFHIN_NNFEFGGGECF_OFFSET))(this, a1);
		}

	};
