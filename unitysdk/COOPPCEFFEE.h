#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define COOPPCEFFEE_BFJCJPNEMND_OFFSET UNITYSDK_OFFSET(0xDCBFC10)
#define COOPPCEFFEE_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xDCBFCA0)
#define COOPPCEFFEE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBF970)
#define COOPPCEFFEE_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xDCBF980)
#define COOPPCEFFEE_TICK_OFFSET UNITYSDK_OFFSET(0xDCBFCE0)

inline static constexpr unsigned int COOPPCEFFEE_TypeDefinitionIndex = 56261;

	class COOPPCEFFEE : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + COOPPCEFFEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COOPPCEFFEE_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COOPPCEFFEE_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COOPPCEFFEE_TICK_OFFSET))(this, a1);
		}

		::System::Boolean BFJCJPNEMND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COOPPCEFFEE_BFJCJPNEMND_OFFSET))(this);
		}

	};
