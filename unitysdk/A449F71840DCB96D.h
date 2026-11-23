#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4C6097037338033.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define A449F71840DCB96D__CTOR_OFFSET UNITYSDK_OFFSET(0x3865600)

inline static constexpr unsigned int A449F71840DCB96D_TypeDefinitionIndex = 17986;

class A449F71840DCB96D : public ::B4C6097037338033
{
public:
	::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* B286159CFDC40A9F, ::System::Boolean FEB0D8A630BF3591, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* E390A646808B0C8F)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + A449F71840DCB96D__CTOR_OFFSET))(this, B286159CFDC40A9F, FEB0D8A630BF3591, E390A646808B0C8F);
	}
};
