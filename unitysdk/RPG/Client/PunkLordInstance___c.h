#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PUNKLORDINSTANCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDFF6D0)
#define RPG_CLIENT_PUNKLORDINSTANCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDDFF710)
#define RPG_CLIENT_PUNKLORDINSTANCE___C__KILLEDBYOTHERS_B__6_0_OFFSET UNITYSDK_OFFSET(0xDDFF790)
#define RPG_CLIENT_PUNKLORDINSTANCE___C__TIMEOUT_B__5_0_OFFSET UNITYSDK_OFFSET(0xDDFF720)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordInstance___c_TypeDefinitionIndex = 66752;

	class PunkLordInstance___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x60CA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x60CA8);
		}

		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x60CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE___C_CTOR_OFFSET))(this);
		}

		::System::Void _TimeOut_b__5_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE___C__TIMEOUT_B__5_0_OFFSET))(this, a1);
		}

		::System::Void _KilledByOthers_b__6_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDINSTANCE___C__KILLEDBYOTHERS_B__6_0_OFFSET))(this, a1);
		}

	};
}
