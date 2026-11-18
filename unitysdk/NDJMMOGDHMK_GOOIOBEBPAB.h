#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NDJMMOGDHMK;
class PNPFJKPGEHF;
namespace System { template <typename T> class Action_1; }

#define NDJMMOGDHMK_GOOIOBEBPAB_OPJMGMAEAJB_OFFSET UNITYSDK_OFFSET(0xE18F050)
#define NDJMMOGDHMK_GOOIOBEBPAB__CTOR_OFFSET UNITYSDK_OFFSET(0xE18F040)

inline static constexpr unsigned int NDJMMOGDHMK_GOOIOBEBPAB_TypeDefinitionIndex = 51326;

class NDJMMOGDHMK_GOOIOBEBPAB : public ::System::Object
{
public:
	::NDJMMOGDHMK* KLHPEBKNIFB; // 0x10
	::System::Action_1<::PNPFJKPGEHF*>* HEMEBIMCLDB; // 0x18
	::System::Int32 OGDNGAMKFDG; // 0x20
	::System::Int32 LIGLDFCPPOI; // 0x24
	::System::Boolean HDDJCDCMHHF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJMMOGDHMK_GOOIOBEBPAB__CTOR_OFFSET))(this);
	}

	::System::Void OPJMGMAEAJB(::PNPFJKPGEHF* GNJGAIOHFIF)
	{
		return ((::System::Void(*)(::PVOID, ::PNPFJKPGEHF*))((::PBYTE)hIl2Cpp + NDJMMOGDHMK_GOOIOBEBPAB_OPJMGMAEAJB_OFFSET))(this, GNJGAIOHFIF);
	}
};
