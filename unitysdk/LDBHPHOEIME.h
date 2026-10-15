#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define LDBHPHOEIME_AIAAJNDJLAA_OFFSET UNITYSDK_OFFSET(0xB616030)
#define LDBHPHOEIME_CTOR_OFFSET UNITYSDK_OFFSET(0xB616420)
#define LDBHPHOEIME_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB615FF0)
#define LDBHPHOEIME_HCIBIBHMHJH_OFFSET UNITYSDK_OFFSET(0xB616150)
#define LDBHPHOEIME_HFMEIIDNJOL_OFFSET UNITYSDK_OFFSET(0xB616380)
#define LDBHPHOEIME_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xB616270)
#define LDBHPHOEIME__ONBIND_OFFSET UNITYSDK_OFFSET(0xB615F60)

inline static constexpr unsigned int LDBHPHOEIME_TypeDefinitionIndex = 71386;

	class LDBHPHOEIME : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* IMBIAJFLJNB; // 0x60
		::UnityEngine::UI::Image* NNPNDDIAGKJ; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		// static const ::System::String* DALEEBHJNKD; // 0x0
		// static const ::System::String* GEJMBLLCMFN; // 0x0
		// static const ::System::String* AHGEGMMHOCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBHPHOEIME_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBHPHOEIME__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBHPHOEIME_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void AIAAJNDJLAA(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + LDBHPHOEIME_AIAAJNDJLAA_OFFSET))(this, a1);
		}

		::System::Void HCIBIBHMHJH(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + LDBHPHOEIME_HCIBIBHMHJH_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LDBHPHOEIME_NJBDJBHEBAN_OFFSET))(this, a1, a2);
		}

		::System::Void HFMEIIDNJOL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDBHPHOEIME_HFMEIIDNJOL_OFFSET))(this, a1);
		}

	};
