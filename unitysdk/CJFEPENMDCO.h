#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
class CFNBLNHMHGO;
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define CJFEPENMDCO_CTOR_OFFSET UNITYSDK_OFFSET(0xDB79690)
#define CJFEPENMDCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB78CE0)
#define CJFEPENMDCO_EHHBCFDELPP_OFFSET UNITYSDK_OFFSET(0xDB79570)
#define CJFEPENMDCO_ENTER_OFFSET UNITYSDK_OFFSET(0xDB78D20)
#define CJFEPENMDCO_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xDB79520)
#define CJFEPENMDCO_JMANFCFJLGG_OFFSET UNITYSDK_OFFSET(0xDB79220)
#define CJFEPENMDCO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDB79140)
#define CJFEPENMDCO_LEAVE_OFFSET UNITYSDK_OFFSET(0xDB791A0)
#define CJFEPENMDCO_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0xDB79040)
#define CJFEPENMDCO_TICK_OFFSET UNITYSDK_OFFSET(0xDB790E0)

inline static constexpr unsigned int CJFEPENMDCO_TypeDefinitionIndex = 62501;

	class CJFEPENMDCO : public ::System::Object
	{
	public:
		::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFEPENMDCO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFEPENMDCO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFEPENMDCO_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJFEPENMDCO_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJFEPENMDCO_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + CJFEPENMDCO_LEAVE_OFFSET))(this, a1);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFEPENMDCO_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Void JMANFCFJLGG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJFEPENMDCO_JMANFCFJLGG_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFEPENMDCO_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void EHHBCFDELPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFEPENMDCO_EHHBCFDELPP_OFFSET))(this);
		}

	};
