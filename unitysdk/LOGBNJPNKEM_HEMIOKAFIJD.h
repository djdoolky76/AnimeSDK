#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMPMGGKKIBH_CDDBOGAOEHP.h"
#include "unitysdk/System/Object.h"

#define LOGBNJPNKEM_HEMIOKAFIJD_CTOR_OFFSET UNITYSDK_OFFSET(0xB800110)
#define LOGBNJPNKEM_HEMIOKAFIJD_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB800C80)
#define LOGBNJPNKEM_HEMIOKAFIJD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB800AF0)
#define LOGBNJPNKEM_HEMIOKAFIJD_MPLPCDODCKA_OFFSET UNITYSDK_OFFSET(0xB801680)

	class LOGBNJPNKEM_HEMIOKAFIJD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* JNDIPLIIGGP; // 0x10
		::System::Single EGKNHHFDJHM; // 0x18
		::System::Boolean NLDLLPECLCH; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 GAMEJHNACEO; // 0x20
		::DMPMGGKKIBH_CDDBOGAOEHP GIGBFNIOCPF; // 0x24
		::DMPMGGKKIBH_CDDBOGAOEHP IGDPLGAGAHF; // 0x30
		::System::Single MNAKIEOGPDK; // 0x3C
		::System::Single LALKFADHJJL; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGBNJPNKEM_HEMIOKAFIJD_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGBNJPNKEM_HEMIOKAFIJD_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH(::System::Single a1, ::System::Single a2, ::DMPMGGKKIBH_CDDBOGAOEHP a3, ::DMPMGGKKIBH_CDDBOGAOEHP a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::DMPMGGKKIBH_CDDBOGAOEHP, ::DMPMGGKKIBH_CDDBOGAOEHP))((::PBYTE)hIl2Cpp + LOGBNJPNKEM_HEMIOKAFIJD_DADCFBHGLOH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MPLPCDODCKA(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + LOGBNJPNKEM_HEMIOKAFIJD_MPLPCDODCKA_OFFSET))(this, a1, a2, a3);
		}

	};
