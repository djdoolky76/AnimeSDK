#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEAECEINKCC_GFALJDPBHGO_BFDJFGOIKGK_OFFSET UNITYSDK_OFFSET(0x17E3F140)
#define HEAECEINKCC_GFALJDPBHGO_CBPBEJBEDHB_OFFSET UNITYSDK_OFFSET(0x17E3F1F0)
#define HEAECEINKCC_GFALJDPBHGO_EOFCHJGIKCL_OFFSET UNITYSDK_OFFSET(0x17E3F1B0)
#define HEAECEINKCC_GFALJDPBHGO_OHOMMDMNPEA_OFFSET UNITYSDK_OFFSET(0x17E3F180)
#define HEAECEINKCC_GFALJDPBHGO__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3F130)

inline static constexpr unsigned int HEAECEINKCC_GFALJDPBHGO_TypeDefinitionIndex = 64552;

class HEAECEINKCC_GFALJDPBHGO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Double>* NFJECIGPFOL; // 0x10
	::System::Int32 MHPIOFJPCFE; // 0x18
	::System::Byte _padding0[0x4];
	::System::Double BOBHDMBLNFL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_GFALJDPBHGO__CTOR_OFFSET))(this);
	}

	::System::Void BFDJFGOIKGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_GFALJDPBHGO_BFDJFGOIKGK_OFFSET))(this);
	}

	::System::Void OHOMMDMNPEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_GFALJDPBHGO_OHOMMDMNPEA_OFFSET))(this);
	}

	::System::Void EOFCHJGIKCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_GFALJDPBHGO_EOFCHJGIKCL_OFFSET))(this);
	}

	::System::Void CBPBEJBEDHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_GFALJDPBHGO_CBPBEJBEDHB_OFFSET))(this);
	}
};
