#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/ABC0569027A9D02C.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define B4C6097037338033__CTOR_OFFSET UNITYSDK_OFFSET(0x37E9D00)

inline static constexpr unsigned int B4C6097037338033_TypeDefinitionIndex = 17828;

class B4C6097037338033 : public ::System::Object
{
public:
	::HoudiniEngineUnity::HEU_HoudiniAsset* A2ACBA2099564073; // 0x10
	::System::Boolean AF56CB4DBDC9E79A; // 0x18
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* F3D4341A260C4136; // 0x20
	::FA78B0257AA80CDE::ABC0569027A9D02C AA6AE7C7837B4AEC; // 0x28

	::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* B286159CFDC40A9F, ::System::Boolean FEB0D8A630BF3591, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* E390A646808B0C8F)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + B4C6097037338033__CTOR_OFFSET))(this, B286159CFDC40A9F, FEB0D8A630BF3591, E390A646808B0C8F);
	}
};
