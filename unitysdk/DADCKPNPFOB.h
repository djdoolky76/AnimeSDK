#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define DADCKPNPFOB_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xDFC0BA0)
#define DADCKPNPFOB_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBFAE0)
#define DADCKPNPFOB_GLJFAIICDMN_OFFSET UNITYSDK_OFFSET(0xDFC08B0)
#define DADCKPNPFOB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xDFBFAF0)
#define DADCKPNPFOB_TICK_OFFSET UNITYSDK_OFFSET(0xDFC0BE0)

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
