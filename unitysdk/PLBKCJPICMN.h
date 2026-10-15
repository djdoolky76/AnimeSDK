#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class AnimationCurve; }

#define PLBKCJPICMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C7E60)

inline static constexpr unsigned int PLBKCJPICMN_TypeDefinitionIndex = 43217;

	class PLBKCJPICMN : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* ICPLILLKDJJ; // 0x10
		::System::Single FLAAIBEJDOI; // 0x18
		::System::Single EIBGEGPABFK; // 0x1C
		::System::Boolean CKHKLEKIFFO; // 0x20
		::System::Boolean FNPGLAFFLHO; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single JIPONFOAAPH; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBKCJPICMN_CTOR_OFFSET))(this);
		}

	};
