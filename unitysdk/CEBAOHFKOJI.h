#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMOKAJOLANN.h"
#include "unitysdk/System/Object.h"

class COICIIHCHGO;
class DBEEELCGJOA;
class FCKLGBGHAHN;
class KBBMNEOODNE;
class PFEGALIKFEC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CEBAOHFKOJI_DDAOCLOEGBF_OFFSET UNITYSDK_OFFSET(0x1DB72D80)
#define CEBAOHFKOJI_DDHIEEPGIIG_OFFSET UNITYSDK_OFFSET(0x1DB74A50)
#define CEBAOHFKOJI_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1DB74E40)
#define CEBAOHFKOJI_INEIJLDNEGP_OFFSET UNITYSDK_OFFSET(0x1DB739F0)
#define CEBAOHFKOJI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1DB74D70)
#define CEBAOHFKOJI_OLFBKPLFJDL_OFFSET UNITYSDK_OFFSET(0x1DB74D20)
#define CEBAOHFKOJI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1DB72C30)
#define CEBAOHFKOJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB727E0)
#define CEBAOHFKOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB72B80)

inline static constexpr unsigned int CEBAOHFKOJI_TypeDefinitionIndex = 93354;

class CEBAOHFKOJI : public ::System::Object
{
public:
	::KBBMNEOODNE* NJDJBEKLLLE; // 0x10
	::JMOKAJOLANN CIMNIJJKDCD; // 0x18
	::COICIIHCHGO* DKIEOGCOBKD; // 0x58
	::FCKLGBGHAHN* CCDNKBONPLB; // 0x60
	::System::Collections::Generic::List_1<::DBEEELCGJOA*>* HFMBFJGNFNO; // 0x68
	::System::UInt32 OONMJECGOHH; // 0x70
	::System::Boolean NMCAHJLEJKK; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBAOHFKOJI__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBAOHFKOJI_TOSTRING_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEBAOHFKOJI_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Int32 INEIJLDNEGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBAOHFKOJI_INEIJLDNEGP_OFFSET))(this);
	}

	::System::Void DDAOCLOEGBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBAOHFKOJI_DDAOCLOEGBF_OFFSET))(this);
	}

	::System::Int32 OLFBKPLFJDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBAOHFKOJI_OLFBKPLFJDL_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBAOHFKOJI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBAOHFKOJI_DPIHOJBBGLA_OFFSET))(this);
	}

	::PFEGALIKFEC* DDHIEEPGIIG()
	{
		return ((::PFEGALIKFEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBAOHFKOJI_DDHIEEPGIIG_OFFSET))(this);
	}
};
