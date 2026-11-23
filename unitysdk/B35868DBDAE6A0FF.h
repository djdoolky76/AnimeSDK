#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4C6097037338033.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define B35868DBDAE6A0FF__CTOR_OFFSET UNITYSDK_OFFSET(0x3808E40)

inline static constexpr unsigned int B35868DBDAE6A0FF_TypeDefinitionIndex = 17895;

class B35868DBDAE6A0FF : public ::B4C6097037338033
{
public:
	::System::Boolean BE210A9BDF9D2289; // 0x30

	::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* B286159CFDC40A9F, ::System::Boolean FEB0D8A630BF3591, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* E390A646808B0C8F, ::System::Boolean B0283214699718F4)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + B35868DBDAE6A0FF__CTOR_OFFSET))(this, B286159CFDC40A9F, FEB0D8A630BF3591, E390A646808B0C8F, B0283214699718F4);
	}
};
