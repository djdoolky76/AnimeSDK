#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define LINMBFKJIDC_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB6D4470)
#define LINMBFKJIDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D43F0)
#define LINMBFKJIDC_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB6D4400)
#define LINMBFKJIDC_TICK_OFFSET UNITYSDK_OFFSET(0xB6D44B0)

inline static constexpr unsigned int LINMBFKJIDC_TypeDefinitionIndex = 56270;

	class LINMBFKJIDC : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + LINMBFKJIDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINMBFKJIDC_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINMBFKJIDC_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LINMBFKJIDC_TICK_OFFSET))(this, a1);
		}

	};
