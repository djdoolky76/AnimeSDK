#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigTextureColor;
namespace System { class Action; }

#define DDABKHLEBNH_DCLAKEKEILD_LJGHLBOAAAC_OFFSET UNITYSDK_OFFSET(0x168AC390)
#define DDABKHLEBNH_DCLAKEKEILD__CTOR_OFFSET UNITYSDK_OFFSET(0x168AC380)

inline static constexpr unsigned int DDABKHLEBNH_DCLAKEKEILD_TypeDefinitionIndex = 42032;

class DDABKHLEBNH_DCLAKEKEILD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABKHLEBNH_DCLAKEKEILD__CTOR_OFFSET))(this);
	}

	::System::Void LJGHLBOAAAC(::ConfigTextureColor* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigTextureColor*))((::PBYTE)hIl2Cpp + DDABKHLEBNH_DCLAKEKEILD_LJGHLBOAAAC_OFFSET))(this, DFMKILICPFB);
	}
};
