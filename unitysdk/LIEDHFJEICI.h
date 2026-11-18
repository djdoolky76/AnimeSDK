#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPFKJGICKLL.h"

class EAIOHODECAO;
class FCLBPEPMALJ;
class PPBBLODOJIC;

#define LIEDHFJEICI_EEIDMEELMDK_OFFSET UNITYSDK_OFFSET(0x1EFACED0)
#define LIEDHFJEICI_IKJDLBMCCGJ_OFFSET UNITYSDK_OFFSET(0x1EFACB30)
#define LIEDHFJEICI__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFACEC0)

inline static constexpr unsigned int LIEDHFJEICI_TypeDefinitionIndex = 95001;

class LIEDHFJEICI : public ::EPFKJGICKLL
{
public:
	::FCLBPEPMALJ* BNPNICBBJOI; // 0x90
	::PPBBLODOJIC* GADKGAMPMBH; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIEDHFJEICI__CTOR_OFFSET))(this);
	}

	::System::Void IKJDLBMCCGJ(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + LIEDHFJEICI_IKJDLBMCCGJ_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void EEIDMEELMDK(::EAIOHODECAO* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + LIEDHFJEICI_EEIDMEELMDK_OFFSET))(this, MIALFKCCCPI);
	}
};
