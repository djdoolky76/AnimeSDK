#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

class HKNOIHBGPDC;
namespace System { class String; }

#define MCHMPIKAPDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F850C20)

inline static constexpr unsigned int MCHMPIKAPDG_TypeDefinitionIndex = 18292;

class MCHMPIKAPDG : public ::System::Exception
{
public:
	::System::String* DNCGFPGDDPH; // 0x88
	::System::String* HIAIKHDFCLN; // 0x90

	::System::Void _ctor(::HKNOIHBGPDC* KKHNDOGKGEN, ::System::String* DNCGFPGDDPH)
	{
		return ((::System::Void(*)(::PVOID, ::HKNOIHBGPDC*, ::System::String*))((::PBYTE)hIl2Cpp + MCHMPIKAPDG__CTOR_OFFSET))(this, KKHNDOGKGEN, DNCGFPGDDPH);
	}
};
