#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class RawImage; }

#define BCIEMOCBCCC_CTOR_OFFSET UNITYSDK_OFFSET(0x19D75F00)
#define BCIEMOCBCCC_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x19D75EC0)
#define BCIEMOCBCCC_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x19D75F60)

inline static constexpr unsigned int BCIEMOCBCCC_TypeDefinitionIndex = 74442;

	class BCIEMOCBCCC : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Animator* CKDKOONONCG; // 0x18
		::UnityEngine::UI::RawImage* NEECNLPLKJG; // 0x20
		::UnityEngine::Transform* NAGNPIOHKEF; // 0x28
		::System::String* GEJIJFFILEB; // 0x30
		::System::Void _ctor(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + BCIEMOCBCCC_CTOR_OFFSET))(this, a1);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIEMOCBCCC_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIEMOCBCCC_JCKGONAAIPB_OFFSET))(this);
		}

	};
