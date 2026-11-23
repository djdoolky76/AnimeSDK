#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4B32ACCE75256DD.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

namespace System { class String; }

#define A476B7C07EF8B3CA_B541E38C2848560E_OFFSET UNITYSDK_OFFSET(0x2230940)
#define A476B7C07EF8B3CA_EAE41585CEDA7352_OFFSET UNITYSDK_OFFSET(0x2230A30)
#define A476B7C07EF8B3CA__CTOR_OFFSET UNITYSDK_OFFSET(0x22309E0)

inline static constexpr unsigned int A476B7C07EF8B3CA_TypeDefinitionIndex = 9190;

class A476B7C07EF8B3CA : public ::B4B32ACCE75256DD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A476B7C07EF8B3CA__CTOR_OFFSET))(this);
	}

	::E865F6F8B8B44C1E B541E38C2848560E()
	{
		return ((::E865F6F8B8B44C1E(*)(::PVOID))((::PBYTE)hIl2Cpp + A476B7C07EF8B3CA_B541E38C2848560E_OFFSET))(this);
	}

	::System::String* EAE41585CEDA7352()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A476B7C07EF8B3CA_EAE41585CEDA7352_OFFSET))(this);
	}
};
