#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMHHHGKNHAK_JMEBGJGNICH_OFFSET UNITYSDK_OFFSET(0x14976C70)
#define CMHHHGKNHAK_JPIJOEMKNDN_OFFSET UNITYSDK_OFFSET(0x14976C80)
#define CMHHHGKNHAK_LPOAPJHPNIN_OFFSET UNITYSDK_OFFSET(0x149769C0)
#define CMHHHGKNHAK_MOJLJLIANBH_OFFSET UNITYSDK_OFFSET(0x14976A20)
#define CMHHHGKNHAK__CTOR_OFFSET UNITYSDK_OFFSET(0x14976940)

inline static constexpr unsigned int CMHHHGKNHAK_TypeDefinitionIndex = 77571;

class CMHHHGKNHAK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* _ELPDGLLKCIN_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* ODPKFGNJBEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CMHHHGKNHAK__CTOR_OFFSET))(this, ODPKFGNJBEK);
	}

	::System::Boolean LPOAPJHPNIN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHHHGKNHAK_LPOAPJHPNIN_OFFSET))(this);
	}

	::System::Boolean MOJLJLIANBH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHHHGKNHAK_MOJLJLIANBH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JMEBGJGNICH()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHHHGKNHAK_JMEBGJGNICH_OFFSET))(this);
	}

	::System::Void JPIJOEMKNDN(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CMHHHGKNHAK_JPIJOEMKNDN_OFFSET))(this, EGEGIMGMJHN);
	}
};
