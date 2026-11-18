#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class String; }

#define AODCNDCIDKF_FFMAEEDMKNA_JFPPJGKPHMK_OFFSET UNITYSDK_OFFSET(0x143BC060)
#define AODCNDCIDKF_FFMAEEDMKNA_KFLFHLHHOEA_OFFSET UNITYSDK_OFFSET(0x143BC110)
#define AODCNDCIDKF_FFMAEEDMKNA__CTOR_OFFSET UNITYSDK_OFFSET(0x143BC050)

inline static constexpr unsigned int AODCNDCIDKF_FFMAEEDMKNA_TypeDefinitionIndex = 79600;

class AODCNDCIDKF_FFMAEEDMKNA : public ::System::Object
{
public:
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::String*>* KFKLBNDJHFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_FFMAEEDMKNA__CTOR_OFFSET))(this);
	}

	::System::Void JFPPJGKPHMK(::System::Boolean DJCNCELJPOM, ::System::String* NGHLLDAJJJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_FFMAEEDMKNA_JFPPJGKPHMK_OFFSET))(this, DJCNCELJPOM, NGHLLDAJJJE);
	}

	::System::Void KFLFHLHHOEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_FFMAEEDMKNA_KFLFHLHHOEA_OFFSET))(this);
	}
};
