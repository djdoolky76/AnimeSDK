#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CHLNCCJDIDI_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xCF581E0)
#define CHLNCCJDIDI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF58430)
#define CHLNCCJDIDI_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xCF58170)
#define CHLNCCJDIDI_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xCF582A0)
#define CHLNCCJDIDI_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xCF58390)
#define CHLNCCJDIDI__ONBIND_OFFSET UNITYSDK_OFFSET(0xCF58110)

inline static constexpr unsigned int CHLNCCJDIDI_TypeDefinitionIndex = 71993;

	class CHLNCCJDIDI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x60
		::UnityEngine::GameObject* ADBCGAPLGOL; // 0x68
		::System::Boolean FMNEEONAMNO; // 0x70
		// static const ::System::String* AILCOOFIDPG; // 0x0
		// static const ::System::String* IIPEBGKKNLC; // 0x0
		// static const ::System::String* BIAMKKCKMLG; // 0x0
		// static const ::System::String* FHDKPLKOEAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLNCCJDIDI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLNCCJDIDI__ONBIND_OFFSET))(this);
		}

		::System::Void DKKJNPPHDPM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CHLNCCJDIDI_DKKJNPPHDPM_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLNCCJDIDI_KKHOMFOPFJA_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CHLNCCJDIDI_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CHLNCCJDIDI_BIOBBNGDGDF_OFFSET))(this, a1);
		}

	};
