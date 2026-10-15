#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class AnimatorButton; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define FFALKMLBFDC_CTOR_OFFSET UNITYSDK_OFFSET(0x15723670)
#define FFALKMLBFDC_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x15723560)
#define FFALKMLBFDC_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x157235D0)

inline static constexpr unsigned int FFALKMLBFDC_TypeDefinitionIndex = 72489;

	class FFALKMLBFDC : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Transform* CAPLIBNLJOM; // 0x18
		::RPG::Client::AnimatorButton* GFLMDJMIHAJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFALKMLBFDC_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFALKMLBFDC_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFALKMLBFDC_JCKGONAAIPB_OFFSET))(this);
		}

	};
