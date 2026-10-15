#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEPJAMMBEFC;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CEPJAMMBEFC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC9F12D0)
#define CEPJAMMBEFC_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F1370)
#define CEPJAMMBEFC_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xC9F1380)
#define CEPJAMMBEFC_SET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xC9F1390)

inline static constexpr unsigned int CEPJAMMBEFC_TypeDefinitionIndex = 71181;

	class CEPJAMMBEFC : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* _TextDesc_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPJAMMBEFC_CTOR_OFFSET))(this);
		}

		static ::CEPJAMMBEFC* BPLPBPMEODA(::UnityEngine::Transform* a1)
		{
			return ((::CEPJAMMBEFC*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CEPJAMMBEFC_BPLPBPMEODA_OFFSET))(a1);
		}

		::UnityEngine::UI::Text* get_TextDesc()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPJAMMBEFC_GET_TEXTDESC_OFFSET))(this);
		}

		::System::Void set_TextDesc(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CEPJAMMBEFC_SET_TEXTDESC_OFFSET))(this, a1);
		}

	};
