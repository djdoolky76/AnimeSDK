#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEMLFAEOJLK_BBBKHGAPECH_OFFSET UNITYSDK_OFFSET(0x3BCD30)
#define EEMLFAEOJLK_DDDEPJEPJMJ_OFFSET UNITYSDK_OFFSET(0x3583D0)
#define EEMLFAEOJLK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x654A10)
#define EEMLFAEOJLK_MHMIGDBBJBM_OFFSET UNITYSDK_OFFSET(0x654960)
#define EEMLFAEOJLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6548E0)
#define EEMLFAEOJLK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x654890)
#define EEMLFAEOJLK__CTOR_OFFSET UNITYSDK_OFFSET(0x368140)

inline static constexpr unsigned int EEMLFAEOJLK_TypeDefinitionIndex = 64470;

struct alignas(8) EEMLFAEOJLK
{
	::System::Boolean _OEPCMPNDLCG_k__BackingField; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* LCEGOBBEECM; // 0x18
	::System::Collections::Generic::List_1<::EEMLFAEOJLK>* MNKPAKALGPO; // 0x20

	::System::Void _ctor(::System::String* LCEGOBBEECM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EEMLFAEOJLK__CTOR_OFFSET))(this, LCEGOBBEECM);
	}

	/*
	::System::Void _ctor_1(::System::Collections::Generic::List_1<::EEMLFAEOJLK>* AGAHBJKKLPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EEMLFAEOJLK>*))((::PBYTE)hIl2Cpp + EEMLFAEOJLK__CTOR_1_OFFSET))(this, AGAHBJKKLPM);
	}
	*/

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMLFAEOJLK_TOSTRING_OFFSET))(this);
	}

	::System::Void BBBKHGAPECH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEMLFAEOJLK_BBBKHGAPECH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MHMIGDBBJBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMLFAEOJLK_MHMIGDBBJBM_OFFSET))(this);
	}

	::System::Boolean DDDEPJEPJMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMLFAEOJLK_DDDEPJEPJMJ_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMLFAEOJLK_DPIHOJBBGLA_OFFSET))(this);
	}
};
