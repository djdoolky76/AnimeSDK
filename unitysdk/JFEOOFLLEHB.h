#pragma once
#include "unitysdk/unitysdk.h"

#define JFEOOFLLEHB_CTOR_OFFSET UNITYSDK_OFFSET(0x166358D0)
#define JFEOOFLLEHB_DNBBINLIDDH_OFFSET UNITYSDK_OFFSET(0x16635650)
#define JFEOOFLLEHB_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x166354F0)
#define JFEOOFLLEHB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x16635860)

inline static constexpr unsigned int JFEOOFLLEHB_TypeDefinitionIndex = 68693;

	class JFEOOFLLEHB
	{
	public:
		::System::Boolean PPCOLLOBFHH; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 HFHILHOCPNL; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEOOFLLEHB_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEOOFLLEHB_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFEOOFLLEHB_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Boolean DNBBINLIDDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEOOFLLEHB_DNBBINLIDDH_OFFSET))(this);
		}

	};
