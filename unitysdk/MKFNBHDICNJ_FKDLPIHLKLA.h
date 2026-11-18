#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class Action; }
template <typename T1, typename T2> class ELKFEFPPPFL_2;

#define MKFNBHDICNJ_FKDLPIHLKLA_AJOJBNBGIJI_OFFSET UNITYSDK_OFFSET(0x1A695200)
#define MKFNBHDICNJ_FKDLPIHLKLA_EBCLNDFBMEM_OFFSET UNITYSDK_OFFSET(0x1A6957E0)
#define MKFNBHDICNJ_FKDLPIHLKLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68A9A0)

inline static constexpr unsigned int MKFNBHDICNJ_FKDLPIHLKLA_TypeDefinitionIndex = 61375;

class MKFNBHDICNJ_FKDLPIHLKLA : public ::System::Object
{
public:
	::System::Action* DKDBPEPKALE; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FKDLPIHLKLA__CTOR_OFFSET))(this);
	}

	::System::Void AJOJBNBGIJI(::ELKFEFPPPFL_2<::System::UInt32, ::System::UInt32>* LHLPLLCBMBM)
	{
		return ((::System::Void(*)(::PVOID, ::ELKFEFPPPFL_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FKDLPIHLKLA_AJOJBNBGIJI_OFFSET))(this, LHLPLLCBMBM);
	}

	::System::Void EBCLNDFBMEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FKDLPIHLKLA_EBCLNDFBMEM_OFFSET))(this);
	}
};
