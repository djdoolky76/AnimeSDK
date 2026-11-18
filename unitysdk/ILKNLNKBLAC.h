#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class KCBEGMCCKCA;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class String; }

#define ILKNLNKBLAC_EEIEHIDDOON_OFFSET UNITYSDK_OFFSET(0x714890)
#define ILKNLNKBLAC_HOLMMNONPJI_OFFSET UNITYSDK_OFFSET(0x714830)
#define ILKNLNKBLAC_KBMFBFKMMNI_OFFSET UNITYSDK_OFFSET(0x714990)
#define ILKNLNKBLAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1381BD00)

inline static constexpr unsigned int ILKNLNKBLAC_TypeDefinitionIndex = 71484;

struct alignas(8) ILKNLNKBLAC
{
	static ::System::String** StaticGet_IEILMDHDLDJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ILKNLNKBLAC_TypeDefinitionIndex)->GetStaticField(0x3D350);
	}
	::System::Boolean HHLLKGGIKEA; // 0x10
	::System::Byte _padding0[0x7];
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x18
	::KCBEGMCCKCA* MHPNGBGGMMN; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILKNLNKBLAC__CCTOR_OFFSET))();
	}

	::System::Void HOLMMNONPJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_HOLMMNONPJI_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask EEIEHIDDOON(::System::String* INHDAAAMAAL, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_EEIEHIDDOON_OFFSET))(this, INHDAAAMAAL, AMIDHEAIANO);
	}

	::Cysharp::Threading::Tasks::UniTask KBMFBFKMMNI(::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_KBMFBFKMMNI_OFFSET))(this, AMIDHEAIANO);
	}
};
