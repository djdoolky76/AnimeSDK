#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFNFAOBLNAE;
class ELNPPPDBHKC;
namespace System { template <typename T> class Func_1; }

#define ELNPPPDBHKC_AHEJPNNLPOP_AOMKKIAAGLF_OFFSET UNITYSDK_OFFSET(0x1615F830)
#define ELNPPPDBHKC_AHEJPNNLPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1615F820)

inline static constexpr unsigned int ELNPPPDBHKC_AHEJPNNLPOP_TypeDefinitionIndex = 48236;

class ELNPPPDBHKC_AHEJPNNLPOP : public ::System::Object
{
public:
	::ELNPPPDBHKC* LGBLDAMKBPM; // 0x10
	::System::Int32 JHFKDGBCOBA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_AHEJPNNLPOP__CTOR_OFFSET))(this);
	}

	::EFNFAOBLNAE* AOMKKIAAGLF(::EFNFAOBLNAE* HJKPOOOKHPD, ::System::Func_1<::EFNFAOBLNAE*>* KAJNEJIFDPK)
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID, ::EFNFAOBLNAE*, ::System::Func_1<::EFNFAOBLNAE*>*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_AHEJPNNLPOP_AOMKKIAAGLF_OFFSET))(this, HJKPOOOKHPD, KAJNEJIFDPK);
	}
};
