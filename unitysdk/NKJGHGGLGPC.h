#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define NKJGHGGLGPC_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBC32DA0)
#define NKJGHGGLGPC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC32B30)
#define NKJGHGGLGPC_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0xBC32E50)
#define NKJGHGGLGPC_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBC32B40)
#define NKJGHGGLGPC_TICK_OFFSET UNITYSDK_OFFSET(0xBC32DE0)

inline static constexpr unsigned int NKJGHGGLGPC_TypeDefinitionIndex = 56255;

	class NKJGHGGLGPC : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + NKJGHGGLGPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJGHGGLGPC_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJGHGGLGPC_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKJGHGGLGPC_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJGHGGLGPC_INOMGFMHLDO_OFFSET))(this);
		}

	};
