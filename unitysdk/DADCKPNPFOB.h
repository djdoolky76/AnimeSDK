#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define DADCKPNPFOB_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xDFB6E80)
#define DADCKPNPFOB_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB5DD0)
#define DADCKPNPFOB_GLJFAIICDMN_OFFSET UNITYSDK_OFFSET(0xDFB6B90)
#define DADCKPNPFOB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xDFB5DE0)
#define DADCKPNPFOB_TICK_OFFSET UNITYSDK_OFFSET(0xDFB6EC0)

inline static constexpr unsigned int DADCKPNPFOB_TypeDefinitionIndex = 56248;

	class DADCKPNPFOB : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + DADCKPNPFOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCKPNPFOB_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCKPNPFOB_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DADCKPNPFOB_TICK_OFFSET))(this, a1);
		}

		::System::Boolean GLJFAIICDMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCKPNPFOB_GLJFAIICDMN_OFFSET))(this);
		}

	};
