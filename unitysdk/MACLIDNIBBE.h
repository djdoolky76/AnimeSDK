#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MACLIDNIBBE_DEFFAKFPMDL_OFFSET UNITYSDK_OFFSET(0x18AE5A90)
#define MACLIDNIBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE5A10)

inline static constexpr unsigned int MACLIDNIBBE_TypeDefinitionIndex = 8480;

class MACLIDNIBBE : public ::System::Object
{
public:
	::System::String* _JJLFAFCEJKE_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* PPKJBDEOJGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MACLIDNIBBE__CTOR_OFFSET))(this, PPKJBDEOJGB);
	}

	::System::String* DEFFAKFPMDL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLIDNIBBE_DEFFAKFPMDL_OFFSET))(this);
	}
};
