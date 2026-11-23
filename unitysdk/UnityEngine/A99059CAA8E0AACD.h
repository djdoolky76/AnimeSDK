#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E7237933F9238A72.h"

namespace System { class String; }

#define UNITYENGINE_A99059CAA8E0AACD_F2A1D808D0E6333E_OFFSET UNITYSDK_OFFSET(0x40F28A0)
#define UNITYENGINE_A99059CAA8E0AACD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40F2A00)
#define UNITYENGINE_A99059CAA8E0AACD__CTOR_OFFSET UNITYSDK_OFFSET(0x40F2AF0)

namespace UnityEngine
{
	inline static constexpr unsigned int A99059CAA8E0AACD_TypeDefinitionIndex = 20618;

	class A99059CAA8E0AACD : public ::UnityEngine::E7237933F9238A72
	{
	public:
		::System::Void _ctor(::System::String* FB6493F8788CE54A)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_A99059CAA8E0AACD__CTOR_OFFSET))(this, FB6493F8788CE54A);
		}

		::System::Void _ctor_1(::System::IntPtr B05B268EEBF80DAB)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_A99059CAA8E0AACD__CTOR_1_OFFSET))(this, B05B268EEBF80DAB);
		}

		::System::Void F2A1D808D0E6333E(::System::String* FB6493F8788CE54A)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_A99059CAA8E0AACD_F2A1D808D0E6333E_OFFSET))(this, FB6493F8788CE54A);
		}
	};
}
