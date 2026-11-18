#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOLMHEEOBGL_ACGJPHJNABA_OFFSET UNITYSDK_OFFSET(0x1209D0D0)
#define DOLMHEEOBGL_AELPMCPDKMN_OFFSET UNITYSDK_OFFSET(0x1209D140)
#define DOLMHEEOBGL_BFJJJILPKGN_OFFSET UNITYSDK_OFFSET(0x1209CF90)
#define DOLMHEEOBGL_INKHAIGEAAH_OFFSET UNITYSDK_OFFSET(0x1209C5B0)
#define DOLMHEEOBGL_KNKONEBHCAP_OFFSET UNITYSDK_OFFSET(0x1209D7D0)
#define DOLMHEEOBGL_LPFGGAJMIDK_OFFSET UNITYSDK_OFFSET(0x1209D680)
#define DOLMHEEOBGL_NFAMDNJBJFO_OFFSET UNITYSDK_OFFSET(0x1209C550)
#define DOLMHEEOBGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1209C0C0)

inline static constexpr unsigned int DOLMHEEOBGL_TypeDefinitionIndex = 45652;

class DOLMHEEOBGL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* EFBHDHJCDCP; // 0x10
	::System::Boolean OCHCOBOLKAH; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Object*>* EFBHDHJCDCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DOLMHEEOBGL__CTOR_OFFSET))(this, EFBHDHJCDCP);
	}

	::System::Int32 NFAMDNJBJFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMHEEOBGL_NFAMDNJBJFO_OFFSET))(this);
	}

	::System::Int32 ACGJPHJNABA(::System::Int32 AAIJGGIEOGK)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOLMHEEOBGL_ACGJPHJNABA_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Int32 INKHAIGEAAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMHEEOBGL_INKHAIGEAAH_OFFSET))(this);
	}

	::System::Int32 LPFGGAJMIDK(::System::Int32 AAIJGGIEOGK)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOLMHEEOBGL_LPFGGAJMIDK_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Boolean KNKONEBHCAP(::System::Int32 JFCIBNANGHP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOLMHEEOBGL_KNKONEBHCAP_OFFSET))(this, JFCIBNANGHP);
	}

	::System::Int32 BFJJJILPKGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLMHEEOBGL_BFJJJILPKGN_OFFSET))(this);
	}

	::System::Int32 AELPMCPDKMN(::System::Int32 AAIJGGIEOGK)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOLMHEEOBGL_AELPMCPDKMN_OFFSET))(this, AAIJGGIEOGK);
	}
};
