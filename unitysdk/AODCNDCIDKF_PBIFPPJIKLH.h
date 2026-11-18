#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define AODCNDCIDKF_PBIFPPJIKLH_GEGOLOPGJLL_OFFSET UNITYSDK_OFFSET(0x11BCB6C0)
#define AODCNDCIDKF_PBIFPPJIKLH_JDFEGHFOMPO_OFFSET UNITYSDK_OFFSET(0x11BCB710)
#define AODCNDCIDKF_PBIFPPJIKLH__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCB6B0)

inline static constexpr unsigned int AODCNDCIDKF_PBIFPPJIKLH_TypeDefinitionIndex = 79609;

class AODCNDCIDKF_PBIFPPJIKLH : public ::System::Object
{
public:
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::System::Threading::Tasks::TaskCompletionSource_1<::System::String*>* KFKLBNDJHFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_PBIFPPJIKLH__CTOR_OFFSET))(this);
	}

	::System::Void GEGOLOPGJLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_PBIFPPJIKLH_GEGOLOPGJLL_OFFSET))(this);
	}

	::System::Void JDFEGHFOMPO(::System::String* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_PBIFPPJIKLH_JDFEGHFOMPO_OFFSET))(this, LJBPECKCCEA);
	}
};
