#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BMHDDHOEFMI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENLHMABEANA_GHHFEGDMNDD_IKDBOHFNAAG_OFFSET UNITYSDK_OFFSET(0x10F48A90)
#define ENLHMABEANA_GHHFEGDMNDD__CTOR_OFFSET UNITYSDK_OFFSET(0x10F48A80)

inline static constexpr unsigned int ENLHMABEANA_GHHFEGDMNDD_TypeDefinitionIndex = 92063;

class ENLHMABEANA_GHHFEGDMNDD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JBFPEJCOPPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLHMABEANA_GHHFEGDMNDD__CTOR_OFFSET))(this);
	}

	::System::Boolean IKDBOHFNAAG(::BMHDDHOEFMI* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::BMHDDHOEFMI*))((::PBYTE)hIl2Cpp + ENLHMABEANA_GHHFEGDMNDD_IKDBOHFNAAG_OFFSET))(this, IPMMCGDMODG);
	}
};
