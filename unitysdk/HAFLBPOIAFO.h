#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class RPGFadeAnimation; }
namespace UnityEngine { class Animation; }

#define HAFLBPOIAFO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B679B0)
#define HAFLBPOIAFO_EEHAFGBMFAA_OFFSET UNITYSDK_OFFSET(0x15B67620)
#define HAFLBPOIAFO_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15B675D0)
#define HAFLBPOIAFO_MPFLEGNNDCH_OFFSET UNITYSDK_OFFSET(0x15B67940)
#define HAFLBPOIAFO_PEODBEAFGAD_OFFSET UNITYSDK_OFFSET(0x15B677B0)
#define HAFLBPOIAFO__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B67550)

inline static constexpr unsigned int HAFLBPOIAFO_TypeDefinitionIndex = 72188;

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
