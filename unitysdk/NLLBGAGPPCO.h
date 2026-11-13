#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define NLLBGAGPPCO_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1A42FA70)
#define NLLBGAGPPCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A42FC80)
#define NLLBGAGPPCO_FAFJMNNJCNM_OFFSET UNITYSDK_OFFSET(0x1A42F870)
#define NLLBGAGPPCO_HFIKOLCJEOE_OFFSET UNITYSDK_OFFSET(0x1A42FB20)
#define NLLBGAGPPCO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1A42F6E0)
#define NLLBGAGPPCO__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A42F4F0)

inline static constexpr unsigned int NLLBGAGPPCO_TypeDefinitionIndex = 74420;

	class NLLBGAGPPCO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::UnityEngine::UI::Text* KPICPMEANJJ; // 0x70
		::System::Int32 GEINOAHHBIP; // 0x78
		// static const ::System::String* GKJNMLAAGPF; // 0x0
		// static const ::System::String* EHPGJAFDAGI; // 0x0
		// static const ::System::String* NANMNMKDECK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLBGAGPPCO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLBGAGPPCO__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + NLLBGAGPPCO_NKPPGDENJAE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FAFJMNNJCNM(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NLLBGAGPPCO_FAFJMNNJCNM_OFFSET))(this, a1, a2);
		}

		::System::Void BIOBBNGDGDF(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NLLBGAGPPCO_BIOBBNGDGDF_OFFSET))(this, a1, a2);
		}

		::System::Void HFIKOLCJEOE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NLLBGAGPPCO_HFIKOLCJEOE_OFFSET))(this, a1);
		}

	};
