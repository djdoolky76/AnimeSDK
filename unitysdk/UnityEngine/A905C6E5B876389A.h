#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A7CEBCC0BEEAEEF8;

#define UNITYENGINE_A905C6E5B876389A_B6CF9D165A25B6A0_OFFSET UNITYSDK_OFFSET(0x41C2F10)
#define UNITYENGINE_A905C6E5B876389A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int A905C6E5B876389A_TypeDefinitionIndex = 21438;

	class A905C6E5B876389A : public ::System::Object
	{
	public:
		::System::IntPtr F206D41EC0C50691; // 0x10
		::A7CEBCC0BEEAEEF8* F598C99C00F87190; // 0x18

		::System::Void B6CF9D165A25B6A0(::UnityEngine::A905C6E5B876389A* FE72E3EFD8F2D0C7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::A905C6E5B876389A*))((::PBYTE)hIl2Cpp + UNITYENGINE_A905C6E5B876389A_B6CF9D165A25B6A0_OFFSET))(this, FE72E3EFD8F2D0C7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A905C6E5B876389A__CTOR_OFFSET))(this);
		}
	};
}
