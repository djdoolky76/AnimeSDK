#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEFMLBOOMLN.h"

class EBFNJNBLNEM;
class OGBJNFNJJMM;
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define DMGIGEEJHIE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBA860)

inline static constexpr unsigned int DMGIGEEJHIE_TypeDefinitionIndex = 75652;

class DMGIGEEJHIE : public ::EEFMLBOOMLN
{
public:
	::System::Tuple_2<::System::Int32, ::OGBJNFNJJMM*>* MCMCMEANMDH; // 0x28
	::System::Tuple_2<::System::Int32, ::OGBJNFNJJMM*>* AMGDILGIBKP; // 0x30

	::System::Void _ctor(::EBFNJNBLNEM* CODOLMGJIJM, ::System::Int32 CEAIFEDJNLI)
	{
		return ((::System::Void(*)(::PVOID, ::EBFNJNBLNEM*, ::System::Int32))((::PBYTE)hIl2Cpp + DMGIGEEJHIE__CTOR_OFFSET))(this, CODOLMGJIJM, CEAIFEDJNLI);
	}
};
