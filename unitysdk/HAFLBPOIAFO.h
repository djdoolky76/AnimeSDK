#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class RPGFadeAnimation; }
namespace UnityEngine { class Animation; }

#define HAFLBPOIAFO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B73430)
#define HAFLBPOIAFO_EEHAFGBMFAA_OFFSET UNITYSDK_OFFSET(0x15B730A0)
#define HAFLBPOIAFO_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15B73050)
#define HAFLBPOIAFO_MPFLEGNNDCH_OFFSET UNITYSDK_OFFSET(0x15B733C0)
#define HAFLBPOIAFO_PEODBEAFGAD_OFFSET UNITYSDK_OFFSET(0x15B73230)
#define HAFLBPOIAFO__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B72FD0)

inline static constexpr unsigned int HAFLBPOIAFO_TypeDefinitionIndex = 72189;

	class HAFLBPOIAFO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x60
		::RPG::Client::RPGFadeAnimation* BFOLJLOAOCF; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFLBPOIAFO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFLBPOIAFO__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFLBPOIAFO_EKGCGIDIFJJ_OFFSET))(this);
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
