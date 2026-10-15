#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHARAEYEBLINKSTATESTOP_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xC9BC020)
#define RPG_CLIENT_CHARAEYEBLINKSTATESTOP_CTOR_OFFSET UNITYSDK_OFFSET(0xC9BC0C0)
#define RPG_CLIENT_CHARAEYEBLINKSTATESTOP_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC9BBFE0)
#define RPG_CLIENT_CHARAEYEBLINKSTATESTOP_OLHINJGDHIP_OFFSET UNITYSDK_OFFSET(0xC9BBF90)
#define RPG_CLIENT_CHARAEYEBLINKSTATESTOP_TICK_OFFSET UNITYSDK_OFFSET(0xC9BC060)

namespace RPG::Client
{
	inline static constexpr unsigned int CharaEyeBlinkStateStop_TypeDefinitionIndex = 68375;

	class CharaEyeBlinkStateStop : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATESTOP_CTOR_OFFSET))(this);
		}

		::System::Single OLHINJGDHIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATESTOP_OLHINJGDHIP_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATESTOP_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATESTOP_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATESTOP_TICK_OFFSET))(this, a1);
		}

	};
}
