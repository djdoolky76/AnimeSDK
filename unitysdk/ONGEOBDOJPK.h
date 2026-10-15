#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define ONGEOBDOJPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF51BE0)
#define ONGEOBDOJPK_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xBF51A90)
#define ONGEOBDOJPK_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xBF51B00)

inline static constexpr unsigned int ONGEOBDOJPK_TypeDefinitionIndex = 71414;

	class ONGEOBDOJPK : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Transform* AOAKLBFLHDP; // 0x18
		::UnityEngine::UI::Text* JBGAMFPGDLI; // 0x20
		::UnityEngine::Animation* NEPCECJCCDA; // 0x28
		::RPG::Client::PrefabLoadMeta* DLIACBDHHLH; // 0x30
		::UnityEngine::Transform* BIEGCFNPGAF; // 0x38
		::UnityEngine::Transform* OJLKGKMFDLG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGEOBDOJPK_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGEOBDOJPK_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGEOBDOJPK_JCKGONAAIPB_OFFSET))(this);
		}

	};
