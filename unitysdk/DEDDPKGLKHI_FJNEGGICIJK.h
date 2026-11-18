#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DEDDPKGLKHI_NMFCDOFAJIM;
namespace System { class String; }

#define DEDDPKGLKHI_FJNEGGICIJK_HKGFBDLBDHG_OFFSET UNITYSDK_OFFSET(0x193FA4B0)
#define DEDDPKGLKHI_FJNEGGICIJK__CTOR_OFFSET UNITYSDK_OFFSET(0x193FA4A0)

inline static constexpr unsigned int DEDDPKGLKHI_FJNEGGICIJK_TypeDefinitionIndex = 78345;

class DEDDPKGLKHI_FJNEGGICIJK : public ::System::Object
{
public:
	::DEDDPKGLKHI_NMFCDOFAJIM* FGBNBFHOKAA; // 0x10
	::System::Int32 KCNOHOOPNAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDDPKGLKHI_FJNEGGICIJK__CTOR_OFFSET))(this);
	}

	::System::String* HKGFBDLBDHG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDDPKGLKHI_FJNEGGICIJK_HKGFBDLBDHG_OFFSET))(this);
	}
};
