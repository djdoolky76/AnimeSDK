#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOPPBECEADK.h"
#include "unitysdk/NCIAOKMBKED.h"
#include "unitysdk/PJFHNMIKENM_ILAMBPPGOAM.h"
#include "unitysdk/System/ValueTuple_2.h"

class ANAPNFPOMNG;
class PJOHPBGHNHK;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJFHNMIKENM_AFGIPLBFBNN_OFFSET UNITYSDK_OFFSET(0x1EBEF8F0)
#define PJFHNMIKENM_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1EBEF9F0)
#define PJFHNMIKENM_BAEOMKCHECF_OFFSET UNITYSDK_OFFSET(0x1EBEEBF0)
#define PJFHNMIKENM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1EBEFAF0)
#define PJFHNMIKENM_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1EBEF210)
#define PJFHNMIKENM_JMGOKKJGIPA_OFFSET UNITYSDK_OFFSET(0x1EBEFA80)
#define PJFHNMIKENM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EBEE880)
#define PJFHNMIKENM_OMEIBIPJGDH_OFFSET UNITYSDK_OFFSET(0x1EBEF960)
#define PJFHNMIKENM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEF8E0)

inline static constexpr unsigned int PJFHNMIKENM_TypeDefinitionIndex = 29061;

class PJFHNMIKENM : public ::NCIAOKMBKED
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::FOPPBECEADK, ::System::Object*>>* EBCMLNFMPDH; // 0x60
	::System::Boolean BNEDIEDEPNH; // 0x68
	::System::Byte _padding0[0x3];
	::PJFHNMIKENM_ILAMBPPGOAM ECIIFJBIKFG; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHNMIKENM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHNMIKENM_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BAEOMKCHECF(::ANAPNFPOMNG* DACKALLJNNF)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + PJFHNMIKENM_BAEOMKCHECF_OFFSET))(this, DACKALLJNNF);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHNMIKENM_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Single AFGIPLBFBNN(::PJOHPBGHNHK* KLCFJGPCGHD, ::System::Single HODAIDNDKHD)
	{
		return ((::System::Single(*)(::PVOID, ::PJOHPBGHNHK*, ::System::Single))((::PBYTE)hIl2Cpp + PJFHNMIKENM_AFGIPLBFBNN_OFFSET))(this, KLCFJGPCGHD, HODAIDNDKHD);
	}

	::System::Void OMEIBIPJGDH(::ANAPNFPOMNG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + PJFHNMIKENM_OMEIBIPJGDH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHNMIKENM_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Single JMGOKKJGIPA(::PJOHPBGHNHK* KLCFJGPCGHD, ::System::Single HODAIDNDKHD)
	{
		return ((::System::Single(*)(::PVOID, ::PJOHPBGHNHK*, ::System::Single))((::PBYTE)hIl2Cpp + PJFHNMIKENM_JMGOKKJGIPA_OFFSET))(this, KLCFJGPCGHD, HODAIDNDKHD);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFHNMIKENM_ECNOGHHOPPF_OFFSET))(this);
	}
};
