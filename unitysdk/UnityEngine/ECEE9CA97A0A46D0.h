#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_ECEE9CA97A0A46D0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x412C5C0)
#define UNITYENGINE_ECEE9CA97A0A46D0__CTOR_2_OFFSET UNITYSDK_OFFSET(0x412C620)
#define UNITYENGINE_ECEE9CA97A0A46D0__CTOR_OFFSET UNITYSDK_OFFSET(0x412C670)

namespace UnityEngine
{
	inline static constexpr unsigned int ECEE9CA97A0A46D0_TypeDefinitionIndex = 17273;

	class ECEE9CA97A0A46D0 : public ::System::Attribute
	{
	public:
		::System::String* BB0F92067F481B60; // 0x10
		::System::Boolean A364731964AD3F3C; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 A134E5D74404B0AC; // 0x1C

		::System::Void _ctor(::System::String* EA91914111FEB86C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ECEE9CA97A0A46D0__CTOR_OFFSET))(this, EA91914111FEB86C);
		}

		::System::Void _ctor_1(::System::String* EA91914111FEB86C, ::System::Boolean F0014CC18A030112, ::System::Int32 E7B2D56979C20620)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ECEE9CA97A0A46D0__CTOR_1_OFFSET))(this, EA91914111FEB86C, F0014CC18A030112, E7B2D56979C20620);
		}

		::System::Void _ctor_2(::System::String* EA91914111FEB86C, ::System::Boolean F0014CC18A030112)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ECEE9CA97A0A46D0__CTOR_2_OFFSET))(this, EA91914111FEB86C, F0014CC18A030112);
		}
	};
}
