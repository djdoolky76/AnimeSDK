#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class DDJKNPCIALI;
namespace RPG::GameCore { class GameEntity; }

#define HEMNKMPMIAB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C5BAB0)
#define HEMNKMPMIAB_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x15C5B9A0)
#define HEMNKMPMIAB_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15C5B910)
#define HEMNKMPMIAB_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x15C5B950)

inline static constexpr unsigned int HEMNKMPMIAB_TypeDefinitionIndex = 53752;

	class HEMNKMPMIAB : public ::GJPFGOGOLBI
	{
	public:
		::DDJKNPCIALI* KICICOHCPIP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNKMPMIAB_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNKMPMIAB_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNKMPMIAB_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + HEMNKMPMIAB_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

	};
