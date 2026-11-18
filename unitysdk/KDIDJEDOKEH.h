#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANIBPNOIJOJ.h"
#include "unitysdk/HLJOBMIPNEL.h"

class CHDFDOGABHI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDIDJEDOKEH_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x17B71150)
#define KDIDJEDOKEH_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x17B712F0)
#define KDIDJEDOKEH_IICFOHJMNOF_OFFSET UNITYSDK_OFFSET(0x17B71190)
#define KDIDJEDOKEH_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x17B71170)
#define KDIDJEDOKEH_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x17B71160)
#define KDIDJEDOKEH_MLMLEKKJJID_OFFSET UNITYSDK_OFFSET(0x17B71180)
#define KDIDJEDOKEH_ONATTACH_OFFSET UNITYSDK_OFFSET(0x17B70E40)
#define KDIDJEDOKEH_ONDETACH_OFFSET UNITYSDK_OFFSET(0x17B70E80)
#define KDIDJEDOKEH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17B70EC0)
#define KDIDJEDOKEH_ONREADY_OFFSET UNITYSDK_OFFSET(0x17B70FF0)
#define KDIDJEDOKEH_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17B71030)
#define KDIDJEDOKEH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B710E0)

inline static constexpr unsigned int KDIDJEDOKEH_TypeDefinitionIndex = 89377;

class KDIDJEDOKEH
{
public:
	::System::String* IHFOOJNAADJ; // 0x28
	::System::String* MENDEJOAPLI; // 0x30
	::System::Collections::Generic::List_1<::System::Single>* ANNNLKBHNCA; // 0x38
	::System::Single ADDEHGMGDJI; // 0x40
	::System::Single HPOBCNBEFJO; // 0x44
	::System::Int32 MBAOPDFMFMM; // 0x48
	::ANIBPNOIJOJ IJMOPLAADGE; // 0x4C
	::HLJOBMIPNEL OBBPKKLHCLD; // 0x50
	::System::Single KGJHONADFLN; // 0x54
	::System::Boolean HPPJHPKIGPL; // 0x58
	::System::Byte _padding0[0x3];
	::System::Single LIHDPNADAKJ; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_ONDETACH_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_ONRECYCLE_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_AFBHCNCIKEK_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void MLMLEKKJJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_MLMLEKKJJID_OFFSET))(this);
	}

	::System::Boolean IICFOHJMNOF(::CHDFDOGABHI*& LKMGPMEKKEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::CHDFDOGABHI*&))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_IICFOHJMNOF_OFFSET))(this, LKMGPMEKKEA);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIDJEDOKEH_ANEOCOIFDDJ_OFFSET))(this);
	}
};
