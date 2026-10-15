#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_FATEMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCEAAE20)
#define RPG_CLIENT_FATEMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCEAAE50)
#define RPG_CLIENT_FATEMODULE___C___INITREQ_B__16_0_OFFSET UNITYSDK_OFFSET(0xCEAAE60)

namespace RPG::Client
{
	class FateModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x54DF0);
		}

		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x54DF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void __InitReq_b__16_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE___C___INITREQ_B__16_0_OFFSET))(this, a1);
		}

	};
}
