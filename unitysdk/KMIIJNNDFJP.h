#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"

#define KMIIJNNDFJP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x165D0)

	struct alignas(8) KMIIJNNDFJP
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> NPLKIAMMBBL; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> KGFCFIKLJKK; // 0x20
		::System::Void Execute(::System::Int32 a1, ::UnityEngine::Jobs::TransformAccess a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + KMIIJNNDFJP_EXECUTE_OFFSET))(this, a1, a2);
		}

	};
