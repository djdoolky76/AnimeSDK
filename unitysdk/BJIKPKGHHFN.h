#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/GarbageBinState.h"
class HIOEAKHGILF;
class PEEDLCHFAFL;

#define BJIKPKGHHFN_CLEAR_OFFSET UNITYSDK_OFFSET(0xB7A1940)
#define BJIKPKGHHFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A1A90)
#define BJIKPKGHHFN_PMBCMBBAJEE_OFFSET UNITYSDK_OFFSET(0xB7A16C0)
#define BJIKPKGHHFN_SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0xB7A19C0)

inline static constexpr unsigned int BJIKPKGHHFN_TypeDefinitionIndex = 77108;

	class BJIKPKGHHFN
	{
	public:
		::PEEDLCHFAFL* FKGGBEAELPE; // 0x28
		::HIOEAKHGILF* GGKGFABFGFE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIKPKGHHFN_CTOR_OFFSET))(this);
		}

		::System::Void PMBCMBBAJEE(::HIOEAKHGILF* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BJIKPKGHHFN_PMBCMBBAJEE_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIKPKGHHFN_CLEAR_OFFSET))(this);
		}

		::System::Boolean SwitchState(::RPG::Client::LittleGame::FiveDim::GarbageBinState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::GarbageBinState))((::PBYTE)hIl2Cpp + BJIKPKGHHFN_SWITCHSTATE_OFFSET))(this, a1);
		}

	};
