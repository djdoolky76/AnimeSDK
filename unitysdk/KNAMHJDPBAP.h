#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNAMHJDPBAP__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE3FB0)

inline static constexpr unsigned int KNAMHJDPBAP_TypeDefinitionIndex = 7942;

class KNAMHJDPBAP
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::ConfigModuleLib::Runtime::LoadOp*>* BJFLLNJDKPF; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Foundation::AssetPath, ::System::Type*>, ::ConfigModuleLib::Runtime::LoadOp*>* DMBCFEEAILI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAMHJDPBAP__CTOR_OFFSET))(this);
	}
};
