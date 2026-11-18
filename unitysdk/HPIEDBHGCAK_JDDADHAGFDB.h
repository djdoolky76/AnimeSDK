#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define HPIEDBHGCAK_JDDADHAGFDB_OAPDFPGOHKN_OFFSET UNITYSDK_OFFSET(0x15BE63E0)
#define HPIEDBHGCAK_JDDADHAGFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE63D0)

inline static constexpr unsigned int HPIEDBHGCAK_JDDADHAGFDB_TypeDefinitionIndex = 41647;

class HPIEDBHGCAK_JDDADHAGFDB : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* BOIBONJOJKH; // 0x10
	::System::String* AGPCJEHFALP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_JDDADHAGFDB__CTOR_OFFSET))(this);
	}

	::System::Void OAPDFPGOHKN(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_JDDADHAGFDB_OAPDFPGOHKN_OFFSET))(this, NGLKIKLLLFL, PIIPCLCCOIG);
	}
};
