#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DNAGMHIBOFA;
class JKMFLIJBKCK;
namespace System { template <typename T> class Action_1; }

#define DNAGMHIBOFA_NJNIOOJAOKE_CMCEKEJGCBO_OFFSET UNITYSDK_OFFSET(0x12092950)
#define DNAGMHIBOFA_NJNIOOJAOKE_EAFLAABOEPF_OFFSET UNITYSDK_OFFSET(0x12092520)
#define DNAGMHIBOFA_NJNIOOJAOKE__CTOR_OFFSET UNITYSDK_OFFSET(0x12092510)

inline static constexpr unsigned int DNAGMHIBOFA_NJNIOOJAOKE_TypeDefinitionIndex = 56368;

class DNAGMHIBOFA_NJNIOOJAOKE : public ::System::Object
{
public:
	::DNAGMHIBOFA* KLHPEBKNIFB; // 0x10
	::System::Boolean EOEDGMOKOCD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_NJNIOOJAOKE__CTOR_OFFSET))(this);
	}

	::System::Void EAFLAABOEPF(::JKMFLIJBKCK* JFHMCLLOPFJ)
	{
		return ((::System::Void(*)(::PVOID, ::JKMFLIJBKCK*))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_NJNIOOJAOKE_EAFLAABOEPF_OFFSET))(this, JFHMCLLOPFJ);
	}

	::System::Void CMCEKEJGCBO(::System::Action_1<::System::Int32>* NICCNOILMKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_NJNIOOJAOKE_CMCEKEJGCBO_OFFSET))(this, NICCNOILMKC);
	}
};
