#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LOKPLJPJGLE_JOMAICAGIJG;
namespace System { class String; }

#define LOKPLJPJGLE_LALIJBGALNJ_OPABBLANJCN_OFFSET UNITYSDK_OFFSET(0x17CF68D0)
#define LOKPLJPJGLE_LALIJBGALNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF68C0)

inline static constexpr unsigned int LOKPLJPJGLE_LALIJBGALNJ_TypeDefinitionIndex = 51820;

class LOKPLJPJGLE_LALIJBGALNJ : public ::System::Object
{
public:
	::LOKPLJPJGLE_JOMAICAGIJG* FGBNBFHOKAA; // 0x10
	::System::Single MFMMNDAHFAD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKPLJPJGLE_LALIJBGALNJ__CTOR_OFFSET))(this);
	}

	::System::String* OPABBLANJCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKPLJPJGLE_LALIJBGALNJ_OPABBLANJCN_OFFSET))(this);
	}
};
