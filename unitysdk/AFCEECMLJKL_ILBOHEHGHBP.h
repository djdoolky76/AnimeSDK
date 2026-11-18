#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"

namespace System { class Object; }

#define AFCEECMLJKL_ILBOHEHGHBP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6F1EB0)
#define AFCEECMLJKL_ILBOHEHGHBP__CTOR_OFFSET UNITYSDK_OFFSET(0x6F1EA0)

inline static constexpr unsigned int AFCEECMLJKL_ILBOHEHGHBP_TypeDefinitionIndex = 71519;

struct alignas(8) AFCEECMLJKL_ILBOHEHGHBP
{
	::UnityEngine::PhysicsScene JLDDCFOKKNM; // 0x10
	::System::Byte _padding0[0x4];
	::Unity::Collections::NativeArray_1<::System::Object*> BAGDAKANNJM; // 0x18

	::System::Void _ctor(::Unity::Collections::NativeArray_1<::System::Object*>& HBJOLKHGGDD, ::UnityEngine::PhysicsScene& EMIKCAHJLGB)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Object*>&, ::UnityEngine::PhysicsScene&))((::PBYTE)hIl2Cpp + AFCEECMLJKL_ILBOHEHGHBP__CTOR_OFFSET))(this, HBJOLKHGGDD, EMIKCAHJLGB);
	}

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFCEECMLJKL_ILBOHEHGHBP_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
