#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF_CONNCJCBMNE;

#define FBAMLABJMKF_PBGJCDOFBBG_EAEFHNGENEK_OFFSET UNITYSDK_OFFSET(0x17261630)
#define FBAMLABJMKF_PBGJCDOFBBG_LOHMKHOFBDI_OFFSET UNITYSDK_OFFSET(0x17261620)
#define FBAMLABJMKF_PBGJCDOFBBG_OAJEIJGCJBN_OFFSET UNITYSDK_OFFSET(0x17261640)
#define FBAMLABJMKF_PBGJCDOFBBG__CTOR_OFFSET UNITYSDK_OFFSET(0x17261610)

inline static constexpr unsigned int FBAMLABJMKF_PBGJCDOFBBG_TypeDefinitionIndex = 78133;

class FBAMLABJMKF_PBGJCDOFBBG : public ::System::Object
{
public:
	::FBAMLABJMKF_CONNCJCBMNE* FGBNBFHOKAA; // 0x10
	::System::Single HACJFKBLODH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_PBGJCDOFBBG__CTOR_OFFSET))(this);
	}

	::System::Void LOHMKHOFBDI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBAMLABJMKF_PBGJCDOFBBG_LOHMKHOFBDI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single EAEFHNGENEK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_PBGJCDOFBBG_EAEFHNGENEK_OFFSET))(this);
	}

	::System::Void OAJEIJGCJBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_PBGJCDOFBBG_OAJEIJGCJBN_OFFSET))(this);
	}
};
