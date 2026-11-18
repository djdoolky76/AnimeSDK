#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define EKPFDNANCLC_JMKOEEKELEB_OMHPDKPPAON_OFFSET UNITYSDK_OFFSET(0x1426DC20)
#define EKPFDNANCLC_JMKOEEKELEB_PDLEJDFDJJO_OFFSET UNITYSDK_OFFSET(0x1426DB10)
#define EKPFDNANCLC_JMKOEEKELEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1426DB00)

inline static constexpr unsigned int EKPFDNANCLC_JMKOEEKELEB_TypeDefinitionIndex = 73130;

class EKPFDNANCLC_JMKOEEKELEB : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* IGAAKDOIPNN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_JMKOEEKELEB__CTOR_OFFSET))(this);
	}

	::System::Void PDLEJDFDJJO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EKPFDNANCLC_JMKOEEKELEB_PDLEJDFDJJO_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void OMHPDKPPAON(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EKPFDNANCLC_JMKOEEKELEB_OMHPDKPPAON_OFFSET))(this, GLAOEHCGCFO);
	}
};
