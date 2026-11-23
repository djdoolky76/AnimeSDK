#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FF8B5F1F533F18AD_BBF0E4C79DDF01D7_OFFSET UNITYSDK_OFFSET(0x41547D0)
#define UNITYENGINE_FF8B5F1F533F18AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB750)

namespace UnityEngine
{
	inline static constexpr unsigned int FF8B5F1F533F18AD_TypeDefinitionIndex = 17411;

	struct alignas(4) FF8B5F1F533F18AD
	{
		::System::Int32 B908ECBD99456262; // 0x10
		::System::Int32 FA7E64A4FB43BB73; // 0x14

		::System::Int32 BBF0E4C79DDF01D7()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FF8B5F1F533F18AD_BBF0E4C79DDF01D7_OFFSET))(this);
		}

		::System::Void _ctor(::System::Int32 BC37316376A565D9, ::System::Int32 A96B867D8BBB8B00)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FF8B5F1F533F18AD__CTOR_OFFSET))(this, BC37316376A565D9, A96B867D8BBB8B00);
		}
	};
}
