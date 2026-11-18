#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBFNJNBLNEM;
class OGBJNFNJJMM;
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define EEFMLBOOMLN_PFAJGLKCFOF_OFFSET UNITYSDK_OFFSET(0x141498D0)
#define EEFMLBOOMLN__CTOR_OFFSET UNITYSDK_OFFSET(0x141498C0)

inline static constexpr unsigned int EEFMLBOOMLN_TypeDefinitionIndex = 66860;

class EEFMLBOOMLN : public ::System::Object
{
public:
	// static const ::System::Int32 DDNLBPMPPKM = -0x1; // 0x0
	::System::Tuple_2<::System::Int32, ::OGBJNFNJJMM*>* CNHOJPKKFEB; // 0x10
	::EBFNJNBLNEM* DGCGOJNDKPM; // 0x18
	::System::Int32 CEAIFEDJNLI; // 0x20

	::System::Void _ctor(::EBFNJNBLNEM* CODOLMGJIJM, ::System::Int32 CEAIFEDJNLI)
	{
		return ((::System::Void(*)(::PVOID, ::EBFNJNBLNEM*, ::System::Int32))((::PBYTE)hIl2Cpp + EEFMLBOOMLN__CTOR_OFFSET))(this, CODOLMGJIJM, CEAIFEDJNLI);
	}

	::System::Boolean PFAJGLKCFOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMLBOOMLN_PFAJGLKCFOF_OFFSET))(this);
	}
};
