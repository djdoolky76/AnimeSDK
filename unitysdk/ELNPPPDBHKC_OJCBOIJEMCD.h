#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFNFAOBLNAE;
class ELNPPPDBHKC_AHEJPNNLPOP;
namespace System { template <typename T> class Func_1; }

#define ELNPPPDBHKC_OJCBOIJEMCD_KEJNCNNDNMD_OFFSET UNITYSDK_OFFSET(0x12363830)
#define ELNPPPDBHKC_OJCBOIJEMCD_OBFJLJGCDKM_OFFSET UNITYSDK_OFFSET(0x123637D0)
#define ELNPPPDBHKC_OJCBOIJEMCD__CTOR_OFFSET UNITYSDK_OFFSET(0x123637C0)

inline static constexpr unsigned int ELNPPPDBHKC_OJCBOIJEMCD_TypeDefinitionIndex = 48233;

class ELNPPPDBHKC_OJCBOIJEMCD : public ::System::Object
{
public:
	::System::Func_1<::EFNFAOBLNAE*>* KAJNEJIFDPK; // 0x10
	::ELNPPPDBHKC_AHEJPNNLPOP* FGBNBFHOKAA; // 0x18
	::System::Int32 ADFLAKIIDAE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_OJCBOIJEMCD__CTOR_OFFSET))(this);
	}

	::System::Void OBFJLJGCDKM(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_OJCBOIJEMCD_OBFJLJGCDKM_OFFSET))(this, HFMHOELKCAJ);
	}

	::EFNFAOBLNAE* KEJNCNNDNMD()
	{
		return ((::EFNFAOBLNAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_OJCBOIJEMCD_KEJNCNNDNMD_OFFSET))(this);
	}
};
