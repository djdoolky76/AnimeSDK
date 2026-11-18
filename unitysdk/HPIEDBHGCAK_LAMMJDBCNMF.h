#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define HPIEDBHGCAK_LAMMJDBCNMF_OAPDFPGOHKN_OFFSET UNITYSDK_OFFSET(0x1470F900)
#define HPIEDBHGCAK_LAMMJDBCNMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1470F8F0)

inline static constexpr unsigned int HPIEDBHGCAK_LAMMJDBCNMF_TypeDefinitionIndex = 41642;

class HPIEDBHGCAK_LAMMJDBCNMF : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* BOIBONJOJKH; // 0x10
	::System::String* AGPCJEHFALP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_LAMMJDBCNMF__CTOR_OFFSET))(this);
	}

	::System::Void OAPDFPGOHKN(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_LAMMJDBCNMF_OAPDFPGOHKN_OFFSET))(this, NGLKIKLLLFL, PIIPCLCCOIG);
	}
};
