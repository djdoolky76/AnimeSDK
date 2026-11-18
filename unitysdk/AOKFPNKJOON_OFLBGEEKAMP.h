#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDCLGFPAMDH;
class KJPPANPJBOJ;
namespace System { class Action; }

#define AOKFPNKJOON_OFLBGEEKAMP_DJFCPDMDPBE_OFFSET UNITYSDK_OFFSET(0x18543230)
#define AOKFPNKJOON_OFLBGEEKAMP_KCHKJHMLHPE_OFFSET UNITYSDK_OFFSET(0x18543680)
#define AOKFPNKJOON_OFLBGEEKAMP_NOJFPOPODOL_OFFSET UNITYSDK_OFFSET(0x185431D0)
#define AOKFPNKJOON_OFLBGEEKAMP_OBPBEJGEHBK_OFFSET UNITYSDK_OFFSET(0x185435E0)
#define AOKFPNKJOON_OFLBGEEKAMP_PGBDJAJHPNI_OFFSET UNITYSDK_OFFSET(0x18543720)
#define AOKFPNKJOON_OFLBGEEKAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x185431C0)

inline static constexpr unsigned int AOKFPNKJOON_OFLBGEEKAMP_TypeDefinitionIndex = 51470;

class AOKFPNKJOON_OFLBGEEKAMP : public ::System::Object
{
public:
	::System::Action* KAKAEMACNPB; // 0x10
	::GDCLGFPAMDH* NEMKJPLPOKD; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20
	::System::Action* FFMGICPLKFB; // 0x28
	::KJPPANPJBOJ* GLAOEHCGCFO; // 0x30
	::System::Action* OLDCEOGKOAE; // 0x38
	::System::Single HHMMKIAFHOC; // 0x40
	::System::Boolean PLCJLHLIMGG; // 0x44
	::System::Byte _padding0[0x3];
	::System::Int32 PLBKKNONNPL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_OFLBGEEKAMP__CTOR_OFFSET))(this);
	}

	::System::Void NOJFPOPODOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_OFLBGEEKAMP_NOJFPOPODOL_OFFSET))(this);
	}

	::System::Void DJFCPDMDPBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_OFLBGEEKAMP_DJFCPDMDPBE_OFFSET))(this);
	}

	::System::Void OBPBEJGEHBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_OFLBGEEKAMP_OBPBEJGEHBK_OFFSET))(this);
	}

	::System::Void KCHKJHMLHPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_OFLBGEEKAMP_KCHKJHMLHPE_OFFSET))(this);
	}

	::System::Void PGBDJAJHPNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_OFLBGEEKAMP_PGBDJAJHPNI_OFFSET))(this);
	}
};
