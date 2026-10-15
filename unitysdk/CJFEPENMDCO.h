#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
class CFNBLNHMHGO;
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define CJFEPENMDCO_CTOR_OFFSET UNITYSDK_OFFSET(0xD1FC890)
#define CJFEPENMDCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1FBF00)
#define CJFEPENMDCO_EHHBCFDELPP_OFFSET UNITYSDK_OFFSET(0xD1FC770)
#define CJFEPENMDCO_ENTER_OFFSET UNITYSDK_OFFSET(0xD1FBF40)
#define CJFEPENMDCO_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xD1FC720)
#define CJFEPENMDCO_JMANFCFJLGG_OFFSET UNITYSDK_OFFSET(0xD1FC440)
#define CJFEPENMDCO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD1FC360)
#define CJFEPENMDCO_LEAVE_OFFSET UNITYSDK_OFFSET(0xD1FC3C0)
#define CJFEPENMDCO_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0xD1FC260)
#define CJFEPENMDCO_TICK_OFFSET UNITYSDK_OFFSET(0xD1FC300)

inline static constexpr unsigned int CJFEPENMDCO_TypeDefinitionIndex = 61116;

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
