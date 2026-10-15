#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_LCIDIGMHKNN_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB53E590)
#define KMCIALDOECA_LCIDIGMHKNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB53D340)
#define KMCIALDOECA_LCIDIGMHKNN_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB53E540)
#define KMCIALDOECA_LCIDIGMHKNN_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB53E4F0)

	class KMCIALDOECA_LCIDIGMHKNN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_LCIDIGMHKNN_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_LCIDIGMHKNN_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_LCIDIGMHKNN_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_LCIDIGMHKNN_ACMKLFOMPFC_OFFSET))(this);
		}

	};
