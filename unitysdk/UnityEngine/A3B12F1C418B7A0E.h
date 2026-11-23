#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_A3B12F1C418B7A0E_AE64AA469DCA25E2_OFFSET UNITYSDK_OFFSET(0x411DA40)
#define UNITYENGINE_A3B12F1C418B7A0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int A3B12F1C418B7A0E_TypeDefinitionIndex = 17049;

	class A3B12F1C418B7A0E : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A3B12F1C418B7A0E__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* AE64AA469DCA25E2()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_A3B12F1C418B7A0E_AE64AA469DCA25E2_OFFSET))();
		}
	};
}
