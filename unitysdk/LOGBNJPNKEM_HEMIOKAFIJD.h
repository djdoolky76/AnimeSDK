#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMPMGGKKIBH_CDDBOGAOEHP.h"
#include "unitysdk/System/Object.h"

#define LOGBNJPNKEM_HEMIOKAFIJD_CTOR_OFFSET UNITYSDK_OFFSET(0xC0600F0)
#define LOGBNJPNKEM_HEMIOKAFIJD_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xC060C50)
#define LOGBNJPNKEM_HEMIOKAFIJD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC060AB0)
#define LOGBNJPNKEM_HEMIOKAFIJD_MPLPCDODCKA_OFFSET UNITYSDK_OFFSET(0xC061650)

inline static constexpr unsigned int LOGBNJPNKEM_HEMIOKAFIJD_TypeDefinitionIndex = 76319;

	class LOGBNJPNKEM_HEMIOKAFIJD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* JNDIPLIIGGP; // 0x10
		::System::Int32 GAMEJHNACEO; // 0x18
		::System::Single MNAKIEOGPDK; // 0x1C
		::System::Boolean NLDLLPECLCH; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single LALKFADHJJL; // 0x24
		::DMPMGGKKIBH_CDDBOGAOEHP GIGBFNIOCPF; // 0x28
		::System::Single EGKNHHFDJHM; // 0x34
		::DMPMGGKKIBH_CDDBOGAOEHP IGDPLGAGAHF; // 0x38
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
