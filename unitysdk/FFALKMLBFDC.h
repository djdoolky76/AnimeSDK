#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class AnimatorButton; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define FFALKMLBFDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1572EEE0)
#define FFALKMLBFDC_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x1572EDD0)
#define FFALKMLBFDC_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x1572EE40)

inline static constexpr unsigned int FFALKMLBFDC_TypeDefinitionIndex = 72490;

	class FFALKMLBFDC : public ::LBAMBIMMJKB
	{
	public:
		::RPG::Client::AnimatorButton* GFLMDJMIHAJ; // 0x18
		::UnityEngine::Transform* CAPLIBNLJOM; // 0x20
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
