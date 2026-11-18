#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KFMDJFHBBAD_IGGNMANJPHA_OFFSET UNITYSDK_OFFSET(0x15B87ED0)
#define KFMDJFHBBAD_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x15B87EE0)
#define KFMDJFHBBAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15B87EC0)

inline static constexpr unsigned int KFMDJFHBBAD_TypeDefinitionIndex = 49796;

class KFMDJFHBBAD : public ::System::Object
{
public:
	::System::UInt32 _MPMFPODFDNK_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDJFHBBAD__CTOR_OFFSET))(this);
	}

	::System::Void IGGNMANJPHA(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFMDJFHBBAD_IGGNMANJPHA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 MEKEHBEEBPO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMDJFHBBAD_MEKEHBEEBPO_OFFSET))(this);
	}
};
