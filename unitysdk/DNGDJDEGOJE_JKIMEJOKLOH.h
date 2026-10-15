#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNGDJDEGOJE_HKBFBKMNIGA.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
namespace System { class Object; }

#define DNGDJDEGOJE_JKIMEJOKLOH_BOHEGOONIFJ_OFFSET UNITYSDK_OFFSET(0x11949B70)
#define DNGDJDEGOJE_JKIMEJOKLOH_CTOR_OFFSET UNITYSDK_OFFSET(0x11949580)
#define DNGDJDEGOJE_JKIMEJOKLOH_HLHAKABEAFI_OFFSET UNITYSDK_OFFSET(0x11949AA0)
#define DNGDJDEGOJE_JKIMEJOKLOH_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x11949B30)
#define DNGDJDEGOJE_JKIMEJOKLOH_MOOJDEGGECP_OFFSET UNITYSDK_OFFSET(0x11949BC0)

inline static constexpr unsigned int DNGDJDEGOJE_JKIMEJOKLOH_TypeDefinitionIndex = 58872;

	class DNGDJDEGOJE_JKIMEJOKLOH : public ::DNGDJDEGOJE_HKBFBKMNIGA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_JKIMEJOKLOH_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::BattleOperationType>* HLHAKABEAFI()
		{
			return ((::Il2CppArray<::RPG::GameCore::BattleOperationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_JKIMEJOKLOH_HLHAKABEAFI_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_JKIMEJOKLOH_KKKIONIDKFA_OFFSET))(this);
		}

		::RPG::Client::NotifyType BOHEGOONIFJ()
		{
			return ((::RPG::Client::NotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_JKIMEJOKLOH_BOHEGOONIFJ_OFFSET))(this);
		}

		::System::Boolean MOOJDEGGECP(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_JKIMEJOKLOH_MOOJDEGGECP_OFFSET))(this, a1);
		}

	};
