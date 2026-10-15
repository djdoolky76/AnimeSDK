#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define JBMLJKFMLBC_CTOR_OFFSET UNITYSDK_OFFSET(0x16566840)
#define JBMLJKFMLBC_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0x165665B0)
#define JBMLJKFMLBC_FJFLEJHLANM_OFFSET UNITYSDK_OFFSET(0x16566740)
#define JBMLJKFMLBC_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x16566620)
#define JBMLJKFMLBC__ONBIND_OFFSET UNITYSDK_OFFSET(0x16566550)

inline static constexpr unsigned int JBMLJKFMLBC_TypeDefinitionIndex = 71943;

	class JBMLJKFMLBC : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x60
		::UnityEngine::GameObject* ADBCGAPLGOL; // 0x68
		::RPG::GameCore::AttackDamageType OBEKPICAOGA; // 0x70
		// static const ::System::String* AILCOOFIDPG; // 0x0
		// static const ::System::String* IIPEBGKKNLC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMLJKFMLBC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMLJKFMLBC__ONBIND_OFFSET))(this);
		}

		::System::Void DKKJNPPHDPM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JBMLJKFMLBC_DKKJNPPHDPM_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + JBMLJKFMLBC_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::String* FJFLEJHLANM(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + JBMLJKFMLBC_FJFLEJHLANM_OFFSET))(this, a1);
		}

	};
