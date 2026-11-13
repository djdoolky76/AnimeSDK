#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonopolyJackpotData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOPOLYJACKPOTINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D802D50)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D802D90)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO___C__GETJACKPOTDATAS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D802DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyJackpotInfo___c_TypeDefinitionIndex = 68200;

	class MonopolyJackpotInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonopolyJackpotData*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonopolyJackpotData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x716A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x716A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetJackpotDatas_b__8_0(::RPG::Client::MonopolyJackpotData* a1, ::RPG::Client::MonopolyJackpotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonopolyJackpotData*, ::RPG::Client::MonopolyJackpotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO___C__GETJACKPOTDATAS_B__8_0_OFFSET))(this, a1, a2);
		}

	};
}
