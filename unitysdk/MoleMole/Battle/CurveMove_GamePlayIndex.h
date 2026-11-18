#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_ANOCBOGBGIB_OFFSET UNITYSDK_OFFSET(0x174C04E0)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_CKCFGGBHNNF_OFFSET UNITYSDK_OFFSET(0x174C0490)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7A9410)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_HINIAKPGJAJ_OFFSET UNITYSDK_OFFSET(0x174C0320)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_HLLCKLIOIMN_OFFSET UNITYSDK_OFFSET(0x174C0440)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x174C0530)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x174C0370)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x174C0400)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x174C03B0)
#define MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7A9400)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMove_GamePlayIndex_TypeDefinitionIndex = 62199;

	struct alignas(4) CurveMove_GamePlayIndex
	{
		::System::Int32 _value; // 0x10

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Boolean HINIAKPGJAJ(::MoleMole::Battle::CurveMove_GamePlayIndex EJCBEJMGFAJ, ::MoleMole::Battle::CurveMove_GamePlayIndex EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_HINIAKPGJAJ_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::System::Int32 JCIODAGLLGB(::MoleMole::Battle::CurveMove_GamePlayIndex EGEGIMGMJHN)
		{
			return ((::System::Int32(*)(::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_JCIODAGLLGB_OFFSET))(EGEGIMGMJHN);
		}
		*/

		/*
		static ::System::Boolean NOGJIJMACNO(::MoleMole::Battle::CurveMove_GamePlayIndex EJCBEJMGFAJ, ::MoleMole::Battle::CurveMove_GamePlayIndex EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::MoleMole::Battle::CurveMove_GamePlayIndex JPPEEOLOGGP(::System::Int32 EGEGIMGMJHN)
		{
			return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_JPPEEOLOGGP_OFFSET))(EGEGIMGMJHN);
		}
		*/

		/*
		static ::System::Boolean HLLCKLIOIMN(::MoleMole::Battle::CurveMove_GamePlayIndex EJCBEJMGFAJ, ::MoleMole::Battle::CurveMove_GamePlayIndex EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_HLLCKLIOIMN_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::System::Boolean CKCFGGBHNNF(::MoleMole::Battle::CurveMove_GamePlayIndex EJCBEJMGFAJ, ::MoleMole::Battle::CurveMove_GamePlayIndex EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_CKCFGGBHNNF_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::System::Boolean ANOCBOGBGIB(::MoleMole::Battle::CurveMove_GamePlayIndex EJCBEJMGFAJ, ::MoleMole::Battle::CurveMove_GamePlayIndex EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_ANOCBOGBGIB_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::System::Boolean INCFIJKMIGG(::MoleMole::Battle::CurveMove_GamePlayIndex EJCBEJMGFAJ, ::MoleMole::Battle::CurveMove_GamePlayIndex EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::CurveMove_GamePlayIndex, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVE_GAMEPLAYINDEX_DPIHOJBBGLA_OFFSET))(this);
		}
	};
}
