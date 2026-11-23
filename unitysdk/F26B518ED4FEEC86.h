#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4C6097037338033.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define F26B518ED4FEEC86__CTOR_OFFSET UNITYSDK_OFFSET(0x387EA30)

inline static constexpr unsigned int F26B518ED4FEEC86_TypeDefinitionIndex = 18090;

class F26B518ED4FEEC86 : public ::B4C6097037338033
{
public:
	::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* B286159CFDC40A9F, ::System::Boolean FEB0D8A630BF3591, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* E390A646808B0C8F)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + F26B518ED4FEEC86__CTOR_OFFSET))(this, B286159CFDC40A9F, FEB0D8A630BF3591, E390A646808B0C8F);
	}
};
