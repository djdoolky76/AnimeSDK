#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMPMAJBFNDP.h"

class APNMGOHIMKO;
class MBDNPLFBCNJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFGDLJDGJOO_CLJLAMLJKKK_OFFSET UNITYSDK_OFFSET(0x17DD2DD0)
#define AFGDLJDGJOO_DDLBNLADEOK_OFFSET UNITYSDK_OFFSET(0x17DD2EA0)
#define AFGDLJDGJOO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17DD2D10)
#define AFGDLJDGJOO_JKMDKHOPOIK_OFFSET UNITYSDK_OFFSET(0x17DD2EB0)
#define AFGDLJDGJOO_OABELLJFJPF_OFFSET UNITYSDK_OFFSET(0x17DD2E90)
#define AFGDLJDGJOO__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD2CA0)

inline static constexpr unsigned int AFGDLJDGJOO_TypeDefinitionIndex = 60576;

class AFGDLJDGJOO : public ::GMPMAJBFNDP
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* _KPDJCACJILI_k__BackingField; // 0x40

	::System::Void _ctor(::MBDNPLFBCNJ* DFMKILICPFB, ::APNMGOHIMKO* LHPFMGBDFPN)
	{
		return ((::System::Void(*)(::PVOID, ::MBDNPLFBCNJ*, ::APNMGOHIMKO*))((::PBYTE)hIl2Cpp + AFGDLJDGJOO__CTOR_OFFSET))(this, DFMKILICPFB, LHPFMGBDFPN);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGDLJDGJOO_FINALIZE_OFFSET))(this);
	}

	::System::Void CLJLAMLJKKK(::System::Boolean BFALHDBHDBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFGDLJDGJOO_CLJLAMLJKKK_OFFSET))(this, BFALHDBHDBB);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OABELLJFJPF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGDLJDGJOO_OABELLJFJPF_OFFSET))(this);
	}

	::System::Void DDLBNLADEOK(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + AFGDLJDGJOO_DDLBNLADEOK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JKMDKHOPOIK(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFGDLJDGJOO_JKMDKHOPOIK_OFFSET))(this, MIALFKCCCPI);
	}
};
