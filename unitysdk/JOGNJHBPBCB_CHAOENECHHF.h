#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AIFGNKADBKN.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define JOGNJHBPBCB_CHAOENECHHF_EIPDKIHMCMA_OFFSET UNITYSDK_OFFSET(0x130A0070)
#define JOGNJHBPBCB_CHAOENECHHF__CTOR_OFFSET UNITYSDK_OFFSET(0x130A0060)

inline static constexpr unsigned int JOGNJHBPBCB_CHAOENECHHF_TypeDefinitionIndex = 87375;

class JOGNJHBPBCB_CHAOENECHHF : public ::System::Object
{
public:
	::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* GJBHEJGENMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGNJHBPBCB_CHAOENECHHF__CTOR_OFFSET))(this);
	}

	::System::Boolean EIPDKIHMCMA(::AIFGNKADBKN EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIFGNKADBKN))((::PBYTE)hIl2Cpp + JOGNJHBPBCB_CHAOENECHHF_EIPDKIHMCMA_OFFSET))(this, EJCBEJMGFAJ);
	}
};
