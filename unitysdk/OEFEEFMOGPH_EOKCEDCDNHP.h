#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class OEFEEFMOGPH;
namespace System { class String; }

#define OEFEEFMOGPH_EOKCEDCDNHP_NPLEBCCEODD_OFFSET UNITYSDK_OFFSET(0x15F601D0)
#define OEFEEFMOGPH_EOKCEDCDNHP__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5F910)

inline static constexpr unsigned int OEFEEFMOGPH_EOKCEDCDNHP_TypeDefinitionIndex = 49743;

class OEFEEFMOGPH_EOKCEDCDNHP : public ::System::Object
{
public:
	::System::String* CEKNHIDPNNA; // 0x10
	::OEFEEFMOGPH* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_EOKCEDCDNHP__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask NPLEBCCEODD(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_EOKCEDCDNHP_NPLEBCCEODD_OFFSET))(this, OMMEALOOOOD);
	}
};
