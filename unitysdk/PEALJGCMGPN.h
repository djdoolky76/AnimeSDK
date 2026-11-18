#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDOIHMGOABE.h"
#include "unitysdk/JALFJJNEIJL.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEALJGCMGPN_NGLMCMLKINO_OFFSET UNITYSDK_OFFSET(0x17FE7500)
#define PEALJGCMGPN__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE7210)

inline static constexpr unsigned int PEALJGCMGPN_TypeDefinitionIndex = 14597;

class PEALJGCMGPN : public ::HDOIHMGOABE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* EEPLKPNKMCK; // 0x78

	::System::Void _ctor(::JALFJJNEIJL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JALFJJNEIJL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PEALJGCMGPN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Single NGLMCMLKINO(::System::Int32 ECAOEOPMAIO, ::System::Int32 EEIKCCDAFCI)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PEALJGCMGPN_NGLMCMLKINO_OFFSET))(this, ECAOEOPMAIO, EEIKCCDAFCI);
	}
};
