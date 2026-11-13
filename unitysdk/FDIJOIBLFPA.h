#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Animation; }

#define FDIJOIBLFPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0365C0)
#define FDIJOIBLFPA_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0x1C036520)
#define FDIJOIBLFPA__ONBIND_OFFSET UNITYSDK_OFFSET(0x1C036470)

inline static constexpr unsigned int FDIJOIBLFPA_TypeDefinitionIndex = 73929;

	class FDIJOIBLFPA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		// static const ::System::String* PJGPDOBIALF; // 0x0
		// static const ::System::String* FBMLNNHEALE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJOIBLFPA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJOIBLFPA__ONBIND_OFFSET))(this);
		}

		::System::Void DKKJNPPHDPM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FDIJOIBLFPA_DKKJNPPHDPM_OFFSET))(this, a1, a2);
		}

	};
