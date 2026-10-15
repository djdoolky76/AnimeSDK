#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingPauseReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"

#define APMCNIMPELC_AEHBPGLMDAH_OFFSET UNITYSDK_OFFSET(0x15BB4930)
#define APMCNIMPELC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BB4980)
#define APMCNIMPELC_CTOR_OFFSET UNITYSDK_OFFSET(0x15BB4970)
#define APMCNIMPELC_GET_STREAMINGNOTPAUSE_OFFSET UNITYSDK_OFFSET(0x15BB48A0)
#define APMCNIMPELC_IGLLMOMBFKI_OFFSET UNITYSDK_OFFSET(0x15BB48C0)
#define APMCNIMPELC_SET_STREAMINGNOTPAUSE_OFFSET UNITYSDK_OFFSET(0x15BB48B0)

	class APMCNIMPELC : public ::System::Object
	{
	public:
		static ::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason>* StaticGet__StreamingNotPause_k__BackingField()
		{
			return (::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason>*)UnitySDK::FromName("", "APMCNIMPELC")->GetStaticField(0x14D60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMCNIMPELC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APMCNIMPELC_CCTOR_OFFSET))();
		}

		static ::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason> get_StreamingNotPause()
		{
			return ((::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason>(*)())((::PBYTE)hIl2Cpp + APMCNIMPELC_GET_STREAMINGNOTPAUSE_OFFSET))();
		}

		static ::System::Void set_StreamingNotPause(::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason> a1)
		{
			return ((::System::Void(*)(::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason>))((::PBYTE)hIl2Cpp + APMCNIMPELC_SET_STREAMINGNOTPAUSE_OFFSET))(a1);
		}

		static ::System::Void IGLLMOMBFKI(::System::Boolean a1, ::RPG::Client::OpenWorld::StreamingPauseReason a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::Client::OpenWorld::StreamingPauseReason))((::PBYTE)hIl2Cpp + APMCNIMPELC_IGLLMOMBFKI_OFFSET))(a1, a2);
		}

		static ::System::Boolean AEHBPGLMDAH()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + APMCNIMPELC_AEHBPGLMDAH_OFFSET))();
		}

	};
