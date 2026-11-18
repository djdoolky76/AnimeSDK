#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLKACIHMAKM_ACGJPHJNABA_OFFSET UNITYSDK_OFFSET(0xF7ADB00)
#define BLKACIHMAKM_NFAMDNJBJFO_OFFSET UNITYSDK_OFFSET(0xF7AD1D0)
#define BLKACIHMAKM__CTOR_OFFSET UNITYSDK_OFFSET(0xF7AD1C0)

inline static constexpr unsigned int BLKACIHMAKM_TypeDefinitionIndex = 51660;

class BLKACIHMAKM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* EFBHDHJCDCP; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Object*>* EFBHDHJCDCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BLKACIHMAKM__CTOR_OFFSET))(this, EFBHDHJCDCP);
	}

	::System::Int32 NFAMDNJBJFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKACIHMAKM_NFAMDNJBJFO_OFFSET))(this);
	}

	::System::Int32 ACGJPHJNABA(::System::Int32 CKCDHHMPGOD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLKACIHMAKM_ACGJPHJNABA_OFFSET))(this, CKCDHHMPGOD);
	}
};
