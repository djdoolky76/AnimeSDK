#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define ADBCFNJOHCM_CTOR_OFFSET UNITYSDK_OFFSET(0x182A4F10)
#define ADBCFNJOHCM_MDIBFNDMBGE_OFFSET UNITYSDK_OFFSET(0x182A4DD0)
#define ADBCFNJOHCM__ONBIND_OFFSET UNITYSDK_OFFSET(0x182A4C60)

inline static constexpr unsigned int ADBCFNJOHCM_TypeDefinitionIndex = 73408;

	class ADBCFNJOHCM : public ::FMPCODLIOLG
	{
	public:
		::System::String* GJNLHFPAKAD; // 0x60
		::UnityEngine::UI::Image* OBKJKJMPJLC; // 0x68
		::UnityEngine::UI::Image* BNCKJHCAOEA; // 0x70
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCFNJOHCM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBCFNJOHCM__ONBIND_OFFSET))(this);
		}

		::System::Void MDIBFNDMBGE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ADBCFNJOHCM_MDIBFNDMBGE_OFFSET))(this, a1);
		}

	};
