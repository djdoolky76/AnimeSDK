#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LAOAKNOBGIJ;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_BFEPLHFPJLF_BOHHCBAONIH_OFFSET UNITYSDK_OFFSET(0x1539E370)
#define IBHGDJGJLEI_BFEPLHFPJLF_LLOIEFJPEOE_OFFSET UNITYSDK_OFFSET(0x1539E280)
#define IBHGDJGJLEI_BFEPLHFPJLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1539E270)

inline static constexpr unsigned int IBHGDJGJLEI_BFEPLHFPJLF_TypeDefinitionIndex = 55757;

class IBHGDJGJLEI_BFEPLHFPJLF : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* JAAHKABDEDE; // 0x10
	::System::Action_1<::LAOAKNOBGIJ*>* DLIDACICJBO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_BFEPLHFPJLF__CTOR_OFFSET))(this);
	}

	::System::Void LLOIEFJPEOE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_BFEPLHFPJLF_LLOIEFJPEOE_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void BOHHCBAONIH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_BFEPLHFPJLF_BOHHCBAONIH_OFFSET))(this, GLAOEHCGCFO);
	}
};
