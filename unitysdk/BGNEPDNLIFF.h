#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define BGNEPDNLIFF_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB1906D0)
#define BGNEPDNLIFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB190570)
#define BGNEPDNLIFF_EBENFAJPCNL_OFFSET UNITYSDK_OFFSET(0xB190620)
#define BGNEPDNLIFF_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB190580)
#define BGNEPDNLIFF_TICK_OFFSET UNITYSDK_OFFSET(0xB190740)

inline static constexpr unsigned int BGNEPDNLIFF_TypeDefinitionIndex = 56266;

	class BGNEPDNLIFF : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + BGNEPDNLIFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNEPDNLIFF_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNEPDNLIFF_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGNEPDNLIFF_TICK_OFFSET))(this, a1);
		}

		::System::Void EBENFAJPCNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNEPDNLIFF_EBENFAJPCNL_OFFSET))(this);
		}

	};
