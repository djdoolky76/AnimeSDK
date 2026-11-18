#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGAHKDBODHK.h"
#include "unitysdk/BJAIBILPFLJ.h"
#include "unitysdk/DLLDGMJNNCB.h"
#include "unitysdk/HBOMFILGOPJ.h"
#include "unitysdk/JKNKNIKCPKK.h"
#include "unitysdk/LIKDBHKHKMM.h"
#include "unitysdk/LODEPEFMOBE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GNOCMGCKHKO.h"

class IPBNPLCKABD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGAFMFNMCOG_AAJABDADMHA_OFFSET UNITYSDK_OFFSET(0x1A30C800)
#define LGAFMFNMCOG_BHAAGLDLMPJ_OFFSET UNITYSDK_OFFSET(0x1A30C1D0)
#define LGAFMFNMCOG_CLBIJOCLKJF_OFFSET UNITYSDK_OFFSET(0x1A30C6D0)
#define LGAFMFNMCOG_FPHEDPCHKAH_OFFSET UNITYSDK_OFFSET(0x1A30C490)
#define LGAFMFNMCOG_GGDJFOOOKCC_OFFSET UNITYSDK_OFFSET(0x1A2EB8E0)
#define LGAFMFNMCOG_HLFAOMEHAIJ_OFFSET UNITYSDK_OFFSET(0x1A30C2F0)
#define LGAFMFNMCOG_KIIBIIJFAKO_OFFSET UNITYSDK_OFFSET(0x1A30C150)
#define LGAFMFNMCOG_KMMOMGMNANL_OFFSET UNITYSDK_OFFSET(0x1A30C5B0)
#define LGAFMFNMCOG_MEKCOAMNNBH_OFFSET UNITYSDK_OFFSET(0x1A30C410)
#define LGAFMFNMCOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30B7E0)

inline static constexpr unsigned int LGAFMFNMCOG_TypeDefinitionIndex = 74943;

class LGAFMFNMCOG : public ::System::Object
{
public:
	::System::String* MGEDBKBHJPM; // 0x10
	::IPBNPLCKABD* BCIJJGHMPDO; // 0x18
	::System::Collections::Generic::List_1<::DLLDGMJNNCB>* PPKFIGLDMBL; // 0x20
	::System::Collections::Generic::List_1<::LODEPEFMOBE>* HIGOOOEPBEP; // 0x28
	::System::Collections::Generic::List_1<::HBOMFILGOPJ>* OIAEAAKDBAC; // 0x30
	::System::Collections::Generic::List_1<::JKNKNIKCPKK>* JELCCJMFIHB; // 0x38
	::LIKDBHKHKMM LLEPLCNIGKE; // 0x40
	::AGAHKDBODHK NOOLOILNGPL; // 0x44
	::BJAIBILPFLJ MFKOLLFEOGK; // 0x48

	::System::Void _ctor(::GNOCMGCKHKO CPNMOOANEBL)
	{
		return ((::System::Void(*)(::PVOID, ::GNOCMGCKHKO))((::PBYTE)hIl2Cpp + LGAFMFNMCOG__CTOR_OFFSET))(this, CPNMOOANEBL);
	}

	::LODEPEFMOBE GGDJFOOOKCC(::System::String* HIAIKHDFCLN)
	{
		return ((::LODEPEFMOBE(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGAFMFNMCOG_GGDJFOOOKCC_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Int32 KIIBIIJFAKO(::System::String* HIAIKHDFCLN, ::System::Boolean& KAJBCDKJNCJ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + LGAFMFNMCOG_KIIBIIJFAKO_OFFSET))(this, HIAIKHDFCLN, KAJBCDKJNCJ);
	}

	::System::Int32 MEKCOAMNNBH(::System::String* HIAIKHDFCLN, ::System::Boolean& KAJBCDKJNCJ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + LGAFMFNMCOG_MEKCOAMNNBH_OFFSET))(this, HIAIKHDFCLN, KAJBCDKJNCJ);
	}

	::System::Int32 FPHEDPCHKAH(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGAFMFNMCOG_FPHEDPCHKAH_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Int32 BHAAGLDLMPJ(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGAFMFNMCOG_BHAAGLDLMPJ_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Int32 HLFAOMEHAIJ(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGAFMFNMCOG_HLFAOMEHAIJ_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Boolean CLBIJOCLKJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAFMFNMCOG_CLBIJOCLKJF_OFFSET))(this);
	}

	::IPBNPLCKABD* AAJABDADMHA()
	{
		return ((::IPBNPLCKABD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAFMFNMCOG_AAJABDADMHA_OFFSET))(this);
	}

	::System::Int32 KMMOMGMNANL(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGAFMFNMCOG_KMMOMGMNANL_OFFSET))(this, HIAIKHDFCLN);
	}
};
