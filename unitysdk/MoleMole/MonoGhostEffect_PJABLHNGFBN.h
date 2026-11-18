#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class KPNIFGIKELE;
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class String; }

#define MOLEMOLE_MONOGHOSTEFFECT_PJABLHNGFBN__CTOR_OFFSET UNITYSDK_OFFSET(0x801B20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGhostEffect_PJABLHNGFBN_TypeDefinitionIndex = 85702;

	struct alignas(8) MonoGhostEffect_PJABLHNGFBN
	{
		::System::String* DMOEIDOFDGP; // 0x10
		::System::Int32 DNJAJHFBACD; // 0x18
		::System::Single EGDFCMPNMBF; // 0x1C
		::System::Single MLKLCEKJGPE; // 0x20
		::System::Boolean OKMDJCBNHDE; // 0x24
		::System::Boolean IAKCJHNNJDK; // 0x25
		::System::Boolean EINKGPGBHNI; // 0x26
		::System::Boolean DBKCAHCMJBC; // 0x27
		::MoleMole::Config::ConfigGhostMove* NGJAGBJIBHN; // 0x28
		::KPNIFGIKELE* IKHJEGECGJA; // 0x30

		::System::Void _ctor(::System::String* DMOEIDOFDGP, ::System::Int32 DNJAJHFBACD, ::System::Single EGDFCMPNMBF, ::System::Single MLKLCEKJGPE, ::System::Boolean OKMDJCBNHDE, ::System::Boolean IAKCJHNNJDK, ::System::Boolean EINKGPGBHNI, ::System::Boolean DBKCAHCMJBC, ::MoleMole::Config::ConfigGhostMove* NGJAGBJIBHN, ::KPNIFGIKELE* IKHJEGECGJA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::Config::ConfigGhostMove*, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGHOSTEFFECT_PJABLHNGFBN__CTOR_OFFSET))(this, DMOEIDOFDGP, DNJAJHFBACD, EGDFCMPNMBF, MLKLCEKJGPE, OKMDJCBNHDE, IAKCJHNNJDK, EINKGPGBHNI, DBKCAHCMJBC, NGJAGBJIBHN, IKHJEGECGJA);
		}
	};
}
