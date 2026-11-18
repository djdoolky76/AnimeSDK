#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBHPOOFFAFI.h"
#include "unitysdk/System/ValueTuple_2.h"

class MHEHIIIDIDD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFODLMDEGBM_ANDKILLHNGL_OFFSET UNITYSDK_OFFSET(0x10F2A7D0)
#define EFODLMDEGBM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10F2B430)
#define EFODLMDEGBM_LAKJAKCNMPI_OFFSET UNITYSDK_OFFSET(0x10F2A600)
#define EFODLMDEGBM_PIHNJHIGMND_OFFSET UNITYSDK_OFFSET(0x10F2A9C0)
#define EFODLMDEGBM__CTOR_OFFSET UNITYSDK_OFFSET(0x10F2A510)

inline static constexpr unsigned int EFODLMDEGBM_TypeDefinitionIndex = 61423;

class EFODLMDEGBM : public ::PBHPOOFFAFI
{
public:
	::Il2CppArray<::System::String*>* PHIICFNNPMH; // 0x28
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* LDNFJDBHALJ; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* EFLPPBJCLEJ; // 0x38
	::Il2CppArray<::System::Char>* CNHCOGONAIC; // 0x40
	::System::Int32 FHMOCCKBJFD; // 0x48
	::System::Int32 EAHALICJCMM; // 0x4C
	::System::Int32 IPHGFHENCCO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFODLMDEGBM__CTOR_OFFSET))(this);
	}

	::System::Void LAKJAKCNMPI(::System::String* DBCIMNLBHBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFODLMDEGBM_LAKJAKCNMPI_OFFSET))(this, DBCIMNLBHBB);
	}

	::System::Int32 ANDKILLHNGL(::System::String* LCEGOBBEECM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFODLMDEGBM_ANDKILLHNGL_OFFSET))(this, LCEGOBBEECM);
	}

	::System::Void PIHNJHIGMND(::System::String* ILGBBIMEBDA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFODLMDEGBM_PIHNJHIGMND_OFFSET))(this, ILGBBIMEBDA);
	}

	::System::Void BBOMJDBNHIC(::MHEHIIIDIDD* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MHEHIIIDIDD*))((::PBYTE)hIl2Cpp + EFODLMDEGBM_BBOMJDBNHIC_OFFSET))(this, DFMKILICPFB);
	}
};
