#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMBDOJPGNBP_HJMJKJPMHLH_CFOABOLJBKF_OFFSET UNITYSDK_OFFSET(0x14DF31E0)
#define MMBDOJPGNBP_HJMJKJPMHLH__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF31D0)

inline static constexpr unsigned int MMBDOJPGNBP_HJMJKJPMHLH_TypeDefinitionIndex = 58215;

class MMBDOJPGNBP_HJMJKJPMHLH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* HCKDKJHAOMF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBDOJPGNBP_HJMJKJPMHLH__CTOR_OFFSET))(this);
	}

	::System::Int32 CFOABOLJBKF(::System::UInt32 DPGFPHIMDEL, ::System::UInt32 DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MMBDOJPGNBP_HJMJKJPMHLH_CFOABOLJBKF_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
