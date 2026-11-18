#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class GGOFKIFEFFE;
namespace System { class Action; }

#define GGOFKIFEFFE_AKONNGIIBEP_JNLIONBPDCI_OFFSET UNITYSDK_OFFSET(0x13DD6B10)
#define GGOFKIFEFFE_AKONNGIIBEP__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD6B00)

inline static constexpr unsigned int GGOFKIFEFFE_AKONNGIIBEP_TypeDefinitionIndex = 72037;

class GGOFKIFEFFE_AKONNGIIBEP : public ::System::Object
{
public:
	::GGOFKIFEFFE* KLHPEBKNIFB; // 0x10
	::AFMMAIKKACF* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOFKIFEFFE_AKONNGIIBEP__CTOR_OFFSET))(this);
	}

	::System::Void JNLIONBPDCI(::System::Boolean CAAFEGLOALC, ::System::Int32 HCKDKJHAOMF, ::System::Action* AKHFMMCLEIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + GGOFKIFEFFE_AKONNGIIBEP_JNLIONBPDCI_OFFSET))(this, CAAFEGLOALC, HCKDKJHAOMF, AKHFMMCLEIG);
	}
};
