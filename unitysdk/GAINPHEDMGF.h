#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define GAINPHEDMGF_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x1593CC20)
#define GAINPHEDMGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1593CB90)
#define GAINPHEDMGF_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1593CBA0)
#define GAINPHEDMGF_TICK_OFFSET UNITYSDK_OFFSET(0x1593CC90)

inline static constexpr unsigned int GAINPHEDMGF_TypeDefinitionIndex = 56279;

	class GAINPHEDMGF : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + GAINPHEDMGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINPHEDMGF_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAINPHEDMGF_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAINPHEDMGF_TICK_OFFSET))(this, a1);
		}

	};
