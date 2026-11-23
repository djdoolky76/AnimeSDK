#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_B6452B6C05DB669F_FE0DCDDFED1891D7_OFFSET UNITYSDK_OFFSET(0x41C2E40)
#define UNITYENGINE_B6452B6C05DB669F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int B6452B6C05DB669F_TypeDefinitionIndex = 21515;

	class B6452B6C05DB669F : public ::System::Object
	{
	public:
		static ::System::String* FE0DCDDFED1891D7(::System::String* F2140D7F8BDE7FDB, ::Il2CppArray<::System::Object*>* F0D3F87128A7C4CA)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_B6452B6C05DB669F_FE0DCDDFED1891D7_OFFSET))(F2140D7F8BDE7FDB, F0D3F87128A7C4CA);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B6452B6C05DB669F__CTOR_OFFSET))(this);
		}
	};
}
