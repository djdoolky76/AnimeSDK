#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class EAKHJNIMJIL;

#define AHECMEHKNKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x6F1F90)
#define AHECMEHKNKE_HCFDJBIOIKN_OFFSET UNITYSDK_OFFSET(0x6F2030)
#define AHECMEHKNKE_HIEOJFANFNN_OFFSET UNITYSDK_OFFSET(0x6F1FC0)
#define AHECMEHKNKE_KFFNIJKGKPN_OFFSET UNITYSDK_OFFSET(0x6F2020)

inline static constexpr unsigned int AHECMEHKNKE_TypeDefinitionIndex = 93140;

struct alignas(8) AHECMEHKNKE
{
	::System::Boolean DBJLMCBLOHC; // 0x10
	::System::Boolean HBIPAGLKIJD; // 0x11
	::System::Boolean AOMAEFICFFD; // 0x12
	::System::Boolean DEMOKNJOEIH; // 0x13
	::System::Boolean EHLGBLOIHHE; // 0x14
	::System::Boolean LHAAAIFFAHI; // 0x15
	::System::Boolean CLKJDHCIHGG; // 0x16
	::System::Boolean LGHNNHCIHNA; // 0x17
	::System::Boolean MBOIKGFLLIO; // 0x18
	::System::Boolean CGFJGPLKGHG; // 0x19
	::System::Boolean GAAGMIHGNJC; // 0x1A
	::System::Byte _padding0[0x1];
	::System::Nullable_1<::System::Int32> ELGHBJOJPNE; // 0x1C
	::System::Nullable_1<::System::Int32> NOJFEDHPBHL; // 0x24

	/*
	::System::Boolean Equals(::AHECMEHKNKE LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AHECMEHKNKE))((::PBYTE)hIl2Cpp + AHECMEHKNKE_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Void HIEOJFANFNN(::System::Int32 OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHECMEHKNKE_HIEOJFANFNN_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void KFFNIJKGKPN(::EAKHJNIMJIL* HJBKPIBHMIO)
	{
		return ((::System::Void(*)(::PVOID, ::EAKHJNIMJIL*))((::PBYTE)hIl2Cpp + AHECMEHKNKE_KFFNIJKGKPN_OFFSET))(this, HJBKPIBHMIO);
	}

	::System::Void HCFDJBIOIKN(::System::Int32 OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHECMEHKNKE_HCFDJBIOIKN_OFFSET))(this, OBNIAHNMHPF);
	}
};
