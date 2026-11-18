#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OHAILKANOOK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBHNICOJIIF_BHNGLLFCIHG_OFFSET UNITYSDK_OFFSET(0x15A7EDC0)
#define GBHNICOJIIF_CHHAEKNBHOF_OFFSET UNITYSDK_OFFSET(0x15A7EDE0)
#define GBHNICOJIIF_JHHPFGMDEPA_OFFSET UNITYSDK_OFFSET(0x15A7EDB0)
#define GBHNICOJIIF_OFGHLEPLFDE_OFFSET UNITYSDK_OFFSET(0x15A7EDA0)
#define GBHNICOJIIF_PBLFMDLIPOI_OFFSET UNITYSDK_OFFSET(0x15A7EDD0)
#define GBHNICOJIIF__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7ED00)

inline static constexpr unsigned int GBHNICOJIIF_TypeDefinitionIndex = 12012;

class GBHNICOJIIF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Byte, ::OHAILKANOOK*>* _CEODCADIHFE_k__BackingField; // 0x10
	::System::Byte _MEDAKDACDBD_k__BackingField; // 0x18
	::System::Byte _CAGJLGJHPCA_k__BackingField; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHNICOJIIF__CTOR_OFFSET))(this);
	}

	::System::Byte OFGHLEPLFDE()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHNICOJIIF_OFGHLEPLFDE_OFFSET))(this);
	}

	::System::Byte JHHPFGMDEPA()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHNICOJIIF_JHHPFGMDEPA_OFFSET))(this);
	}

	::System::Void BHNGLLFCIHG(::System::Byte EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + GBHNICOJIIF_BHNGLLFCIHG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::Byte, ::OHAILKANOOK*>* PBLFMDLIPOI()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Byte, ::OHAILKANOOK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHNICOJIIF_PBLFMDLIPOI_OFFSET))(this);
	}

	::System::Void CHHAEKNBHOF(::System::Byte EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + GBHNICOJIIF_CHHAEKNBHOF_OFFSET))(this, EGEGIMGMJHN);
	}
};
