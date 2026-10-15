#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/NumBarSubType.h"
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CALAHOKFPMP_BHLEBNHICDH_OFFSET UNITYSDK_OFFSET(0xC480FA0)
#define CALAHOKFPMP_CTOR_OFFSET UNITYSDK_OFFSET(0xC481110)
#define CALAHOKFPMP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC480C00)
#define CALAHOKFPMP_OPLEELEACCC_OFFSET UNITYSDK_OFFSET(0xC480CF0)
#define CALAHOKFPMP_PDHNKIPOCKB_OFFSET UNITYSDK_OFFSET(0xC481040)
#define CALAHOKFPMP__ONBIND_OFFSET UNITYSDK_OFFSET(0xC480A10)

inline static constexpr unsigned int CALAHOKFPMP_TypeDefinitionIndex = 72340;

	class CALAHOKFPMP : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* BKPHCNFKJKG; // 0x60
		::System::String* DLJDAMGNOIM; // 0x68
		::UnityEngine::Transform* LNNNNHOEMEO; // 0x70
		::UnityEngine::UI::Text* MPMFMIKLPDJ; // 0x78
		::UnityEngine::Transform* OOELJOMOOJF; // 0x80
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x88
		::UnityEngine::Transform* AKLMHAHKCJG; // 0x90
		::UnityEngine::UI::Text* MFPKJEIPPCF; // 0x98
		::RPG::GameCore::NumBarSubType EBBLKKDNGII; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALAHOKFPMP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALAHOKFPMP__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CALAHOKFPMP_NKPPGDENJAE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OPLEELEACCC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::NumBarSubType a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::NumBarSubType))((::PBYTE)hIl2Cpp + CALAHOKFPMP_OPLEELEACCC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BHLEBNHICDH(::RPG::GameCore::BoolEx a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CALAHOKFPMP_BHLEBNHICDH_OFFSET))(this, a1);
		}

		::System::Void PDHNKIPOCKB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CALAHOKFPMP_PDHNKIPOCKB_OFFSET))(this, a1);
		}

	};
