#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B1417BB04C63EF58.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A4599B4790B673D8_A2CC6B0ABDBFA19B_OFFSET UNITYSDK_OFFSET(0x3AE0CE0)
#define A4599B4790B673D8_BE125FC5EC197469_OFFSET UNITYSDK_OFFSET(0x3AE15C0)
#define A4599B4790B673D8_E46AA5A15068966B_OFFSET UNITYSDK_OFFSET(0x3AE1690)
#define A4599B4790B673D8_E7A64DBA003ED505_OFFSET UNITYSDK_OFFSET(0x3AE1440)
#define A4599B4790B673D8_F1972C4DC348BCAB_OFFSET UNITYSDK_OFFSET(0x3AE0EC0)
#define A4599B4790B673D8__CTOR_OFFSET UNITYSDK_OFFSET(0x3AE18B0)

inline static constexpr unsigned int A4599B4790B673D8_TypeDefinitionIndex = 12225;

class A4599B4790B673D8 : public ::B1417BB04C63EF58
{
public:
	::System::Void E7A64DBA003ED505(::System::String* E1FB55B2CC45D87C)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A4599B4790B673D8_E7A64DBA003ED505_OFFSET))(this, E1FB55B2CC45D87C);
	}

	::System::Void A2CC6B0ABDBFA19B(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Boolean A1671803299F2F51)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + A4599B4790B673D8_A2CC6B0ABDBFA19B_OFFSET))(this, E04D2BE64FCE9814, A1671803299F2F51);
	}

	::System::Void E46AA5A15068966B(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A4599B4790B673D8_E46AA5A15068966B_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void BE125FC5EC197469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4599B4790B673D8_BE125FC5EC197469_OFFSET))(this);
	}

	::System::String* F1972C4DC348BCAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A4599B4790B673D8_F1972C4DC348BCAB_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4599B4790B673D8__CTOR_OFFSET))(this);
	}
};
