#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B1417BB04C63EF58.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E83E61D0C2CE972F_A2CC6B0ABDBFA19B_OFFSET UNITYSDK_OFFSET(0x3A1A500)
#define E83E61D0C2CE972F_BE125FC5EC197469_OFFSET UNITYSDK_OFFSET(0x3A1AD40)
#define E83E61D0C2CE972F_E7A64DBA003ED505_OFFSET UNITYSDK_OFFSET(0x3A1ABC0)
#define E83E61D0C2CE972F_F1972C4DC348BCAB_OFFSET UNITYSDK_OFFSET(0x3A1A6E0)
#define E83E61D0C2CE972F__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1AE90)

inline static constexpr unsigned int E83E61D0C2CE972F_TypeDefinitionIndex = 12867;

class E83E61D0C2CE972F : public ::B1417BB04C63EF58
{
public:
	::System::Void BE125FC5EC197469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E83E61D0C2CE972F_BE125FC5EC197469_OFFSET))(this);
	}

	::System::Void A2CC6B0ABDBFA19B(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Boolean A1671803299F2F51)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + E83E61D0C2CE972F_A2CC6B0ABDBFA19B_OFFSET))(this, E04D2BE64FCE9814, A1671803299F2F51);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E83E61D0C2CE972F__CTOR_OFFSET))(this);
	}

	::System::String* F1972C4DC348BCAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + E83E61D0C2CE972F_F1972C4DC348BCAB_OFFSET))(this);
	}

	::System::Void E7A64DBA003ED505(::System::String* E1FB55B2CC45D87C)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E83E61D0C2CE972F_E7A64DBA003ED505_OFFSET))(this, E1FB55B2CC45D87C);
	}
};
