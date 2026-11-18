#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CLGFCPPFINJ;

#define ADJNAJHAOHE_NLPLDEKIFLE_DHEPEFAOCBF_OFFSET UNITYSDK_OFFSET(0x154E2930)
#define ADJNAJHAOHE_NLPLDEKIFLE__CTOR_OFFSET UNITYSDK_OFFSET(0x154E2920)

inline static constexpr unsigned int ADJNAJHAOHE_NLPLDEKIFLE_TypeDefinitionIndex = 41390;

class ADJNAJHAOHE_NLPLDEKIFLE : public ::System::Object
{
public:
	::System::Int32 GJOKHCLJFML; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_NLPLDEKIFLE__CTOR_OFFSET))(this);
	}

	::System::Boolean DHEPEFAOCBF(::CLGFCPPFINJ* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLGFCPPFINJ*))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_NLPLDEKIFLE_DHEPEFAOCBF_OFFSET))(this, DFMKILICPFB);
	}
};
