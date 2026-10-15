#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define FCMLGABEIGL_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x156CEA10)
#define FCMLGABEIGL_CTOR_OFFSET UNITYSDK_OFFSET(0x156CE980)
#define FCMLGABEIGL_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x156CE990)
#define FCMLGABEIGL_TICK_OFFSET UNITYSDK_OFFSET(0x156CEA50)

inline static constexpr unsigned int FCMLGABEIGL_TypeDefinitionIndex = 56276;

	class FCMLGABEIGL : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + FCMLGABEIGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCMLGABEIGL_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCMLGABEIGL_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCMLGABEIGL_TICK_OFFSET))(this, a1);
		}

	};
