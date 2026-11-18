#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJFLOOJJIFO.h"
#include "unitysdk/LOPDDNJIJBA.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBOBCGFOJIK_BPEAGINKOBG_OFFSET UNITYSDK_OFFSET(0x1EB4AA90)
#define PBOBCGFOJIK_DGICCEHHMBA_OFFSET UNITYSDK_OFFSET(0x1EB4AF60)
#define PBOBCGFOJIK_FKHLCDBBBLI_OFFSET UNITYSDK_OFFSET(0x1EB4AF50)
#define PBOBCGFOJIK_HFJKKGKPANC_OFFSET UNITYSDK_OFFSET(0x1EB4AA80)
#define PBOBCGFOJIK_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EB4A6F0)
#define PBOBCGFOJIK_NBACDEGABFO_OFFSET UNITYSDK_OFFSET(0x1EB4A520)
#define PBOBCGFOJIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4A940)

inline static constexpr unsigned int PBOBCGFOJIK_TypeDefinitionIndex = 96547;

class PBOBCGFOJIK : public ::DJFLOOJJIFO
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::LOPDDNJIJBA>* PLDANDLEAJO; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::DJFLOOJJIFO*>* HNMAOGDCCJK; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOBCGFOJIK__CTOR_OFFSET))(this);
	}

	::System::Void NBACDEGABFO(::System::Int32 NDAMEIBNMCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBOBCGFOJIK_NBACDEGABFO_OFFSET))(this, NDAMEIBNMCP);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOBCGFOJIK_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void HFJKKGKPANC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOBCGFOJIK_HFJKKGKPANC_OFFSET))(this);
	}

	static ::PBOBCGFOJIK* BPEAGINKOBG(::System::Collections::Generic::List_1<::LOPDDNJIJBA>* PMCBPEDKNCH)
	{
		return ((::PBOBCGFOJIK*(*)(::System::Collections::Generic::List_1<::LOPDDNJIJBA>*))((::PBYTE)hIl2Cpp + PBOBCGFOJIK_BPEAGINKOBG_OFFSET))(PMCBPEDKNCH);
	}

	::System::Void FKHLCDBBBLI(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBOBCGFOJIK_FKHLCDBBBLI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void DGICCEHHMBA(::System::String* LCMLKICHAKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PBOBCGFOJIK_DGICCEHHMBA_OFFSET))(this, LCMLKICHAKL);
	}
};
