#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class RPGFadeAnimation; }
namespace UnityEngine { class Animation; }

#define HAFLBPOIAFO_CTOR_OFFSET UNITYSDK_OFFSET(0x16AF9F00)
#define HAFLBPOIAFO_EEHAFGBMFAA_OFFSET UNITYSDK_OFFSET(0x16AF9B70)
#define HAFLBPOIAFO_MPFLEGNNDCH_OFFSET UNITYSDK_OFFSET(0x16AF9E90)
#define HAFLBPOIAFO_PEODBEAFGAD_OFFSET UNITYSDK_OFFSET(0x16AF9D00)
#define HAFLBPOIAFO__ONBIND_OFFSET UNITYSDK_OFFSET(0x16AF99F0)
#define HAFLBPOIAFO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16AF9B20)

inline static constexpr unsigned int HAFLBPOIAFO_TypeDefinitionIndex = 74249;

	class HAFLBPOIAFO : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::RPGFadeAnimation* BFOLJLOAOCF; // 0x60
		::UnityEngine::Animation* KCOAILOHDND; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFLBPOIAFO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFLBPOIAFO__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFLBPOIAFO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void PEODBEAFGAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFLBPOIAFO_PEODBEAFGAD_OFFSET))(this);
		}

		::System::Void EEHAFGBMFAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFLBPOIAFO_EEHAFGBMFAA_OFFSET))(this);
		}

		::System::Single MPFLEGNNDCH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFLBPOIAFO_MPFLEGNNDCH_OFFSET))(this);
		}

	};
