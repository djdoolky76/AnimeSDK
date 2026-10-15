#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPHJFBGENAO;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define NPHJFBGENAO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBCFDEF0)
#define NPHJFBGENAO_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFDFE0)
#define NPHJFBGENAO_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xBCFDFF0)
#define NPHJFBGENAO_GET_TEXTPERCENT_OFFSET UNITYSDK_OFFSET(0xBCFE050)
#define NPHJFBGENAO_GET_TEXTTITLE_OFFSET UNITYSDK_OFFSET(0xBCFE010)
#define NPHJFBGENAO_GET_TEXTVALUE_OFFSET UNITYSDK_OFFSET(0xBCFE030)
#define NPHJFBGENAO_SET_ROOT_OFFSET UNITYSDK_OFFSET(0xBCFE000)
#define NPHJFBGENAO_SET_TEXTPERCENT_OFFSET UNITYSDK_OFFSET(0xBCFE060)
#define NPHJFBGENAO_SET_TEXTTITLE_OFFSET UNITYSDK_OFFSET(0xBCFE020)
#define NPHJFBGENAO_SET_TEXTVALUE_OFFSET UNITYSDK_OFFSET(0xBCFE040)

	class NPHJFBGENAO : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* _TextPercent_k__BackingField; // 0x10
		::UnityEngine::UI::Text* _TextValue_k__BackingField; // 0x18
		::UnityEngine::Transform* _Root_k__BackingField; // 0x20
		::UnityEngine::UI::Text* _TextTitle_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHJFBGENAO_CTOR_OFFSET))(this);
		}

		static ::NPHJFBGENAO* BPLPBPMEODA(::UnityEngine::Transform* a1)
		{
			return ((::NPHJFBGENAO*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPHJFBGENAO_BPLPBPMEODA_OFFSET))(a1);
		}

		::UnityEngine::Transform* get_Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHJFBGENAO_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_Root(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPHJFBGENAO_SET_ROOT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Text* get_TextTitle()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHJFBGENAO_GET_TEXTTITLE_OFFSET))(this);
		}

		::System::Void set_TextTitle(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + NPHJFBGENAO_SET_TEXTTITLE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Text* get_TextValue()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHJFBGENAO_GET_TEXTVALUE_OFFSET))(this);
		}

		::System::Void set_TextValue(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + NPHJFBGENAO_SET_TEXTVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Text* get_TextPercent()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHJFBGENAO_GET_TEXTPERCENT_OFFSET))(this);
		}

		::System::Void set_TextPercent(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + NPHJFBGENAO_SET_TEXTPERCENT_OFFSET))(this, a1);
		}

	};
