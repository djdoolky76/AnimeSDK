#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCD517129383D7A4_B353EBFEC38A3733;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define BCD517129383D7A4_F5C5B8C0B1C2DB12_F5A95C81A3B2F483_OFFSET UNITYSDK_OFFSET(0x3909020)
#define BCD517129383D7A4_F5C5B8C0B1C2DB12__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BCD517129383D7A4_F5C5B8C0B1C2DB12_TypeDefinitionIndex = 12284;

class BCD517129383D7A4_F5C5B8C0B1C2DB12 : public ::System::Object
{
public:
	::System::String* FACF1F0CFA8BEFCA; // 0x10
	::BCD517129383D7A4_B353EBFEC38A3733* A8791C2B0F6F977B; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCD517129383D7A4_F5C5B8C0B1C2DB12__CTOR_OFFSET))(this);
	}

	::System::Void F5A95C81A3B2F483(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + BCD517129383D7A4_F5C5B8C0B1C2DB12_F5A95C81A3B2F483_OFFSET))(this, A6CAE7339066B0FB);
	}
};
