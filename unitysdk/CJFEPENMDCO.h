#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
class CFNBLNHMHGO;
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define CJFEPENMDCO_CTOR_OFFSET UNITYSDK_OFFSET(0xD203A90)
#define CJFEPENMDCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD2030F0)
#define CJFEPENMDCO_EHHBCFDELPP_OFFSET UNITYSDK_OFFSET(0xD203970)
#define CJFEPENMDCO_ENTER_OFFSET UNITYSDK_OFFSET(0xD203130)
#define CJFEPENMDCO_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xD203920)
#define CJFEPENMDCO_JMANFCFJLGG_OFFSET UNITYSDK_OFFSET(0xD203640)
#define CJFEPENMDCO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD203560)
#define CJFEPENMDCO_LEAVE_OFFSET UNITYSDK_OFFSET(0xD2035C0)
#define CJFEPENMDCO_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0xD203460)
#define CJFEPENMDCO_TICK_OFFSET UNITYSDK_OFFSET(0xD203500)

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
