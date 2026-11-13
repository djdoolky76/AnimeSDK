#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define FFKJOPOBDPD_CTOR_OFFSET UNITYSDK_OFFSET(0x130EE0A0)
#define FFKJOPOBDPD_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x130EDDD0)
#define FFKJOPOBDPD__ONBIND_OFFSET UNITYSDK_OFFSET(0x130EDC70)

inline static constexpr unsigned int FFKJOPOBDPD_TypeDefinitionIndex = 74359;

	class FFKJOPOBDPD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* CBKKKAHJANC; // 0x60
		::UnityEngine::UI::Text* FDFONIKBFMN; // 0x68
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* BMHGGFCLEPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKJOPOBDPD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKJOPOBDPD__ONBIND_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FFKJOPOBDPD_DMKJAJLNEBK_OFFSET))(this, a1, a2);
		}

	};
