#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCLDNDNHPD;
namespace RPG::Client { class ChimeraDuelGameShopStallData; }
namespace System { class Action; }

#define JJMCGMPFLEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB208C20)
#define JJMCGMPFLEC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB208C30)
#define JJMCGMPFLEC_TICK_OFFSET UNITYSDK_OFFSET(0xB208CB0)

inline static constexpr unsigned int JJMCGMPFLEC_TypeDefinitionIndex = 78350;

	class JJMCGMPFLEC : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameShopStallData* JBMJPJEKNGN; // 0x10
		::System::Void _ctor(::RPG::Client::ChimeraDuelGameShopStallData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameShopStallData*))((::PBYTE)hIl2Cpp + JJMCGMPFLEC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + JJMCGMPFLEC_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JJMCGMPFLEC_TICK_OFFSET))(this, a1);
		}

	};
