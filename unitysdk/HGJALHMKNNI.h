#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HGJALHMKNNI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15DA8540)
#define HGJALHMKNNI__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA8530)

inline static constexpr unsigned int HGJALHMKNNI_TypeDefinitionIndex = 45252;

class HGJALHMKNNI : public ::System::Object
{
public:
	::System::String* KIHGNGKBADE; // 0x10
	::System::Single BMODHKPIHJM; // 0x18
	::System::Single AIKKKLEGGIB; // 0x1C
	::System::Single ABDMIEPEHFL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJALHMKNNI__CTOR_OFFSET))(this);
	}

	::HGJALHMKNNI* DGNAAPGKIPL()
	{
		return ((::HGJALHMKNNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJALHMKNNI_DGNAAPGKIPL_OFFSET))(this);
	}
};
