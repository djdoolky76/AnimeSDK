#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDNNEIEIDJP;
class IJFIHJJPHNA;

#define EDNNEIEIDJP_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1C5FB370)
#define EDNNEIEIDJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FB3D0)

	class EDNNEIEIDJP : public ::System::Object
	{
	public:
		::IJFIHJJPHNA* GGKGFABFGFE; // 0x10
		::System::Int32 NMKKAAGNCPC; // 0x18
		::System::Boolean EKFGAMLDMMN; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 COEPLOMIKJG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNNEIEIDJP_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::EDNNEIEIDJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDNNEIEIDJP*))((::PBYTE)hIl2Cpp + EDNNEIEIDJP_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
