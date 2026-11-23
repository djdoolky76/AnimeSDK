#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E09954D9696BF916.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_F6CD081FF38B7CD6_AE1A0863005E0599_OFFSET UNITYSDK_OFFSET(0x4179C80)
#define UNITYENGINE_F6CD081FF38B7CD6_E7483E7CBF06BCFD_OFFSET UNITYSDK_OFFSET(0x4179B80)
#define UNITYENGINE_F6CD081FF38B7CD6_E80B9F472EEFDF74_OFFSET UNITYSDK_OFFSET(0x4179D20)

namespace UnityEngine
{
	inline static constexpr unsigned int F6CD081FF38B7CD6_TypeDefinitionIndex = 17675;

	struct alignas(8) F6CD081FF38B7CD6
	{
		::System::String* F6C28F62B46AA7FC; // 0x10
		::UnityEngine::E09954D9696BF916 Version; // 0x18
		::System::String* EFE12ECD0A6D7D1A; // 0x20
		::System::String* FA231C365AB8167A; // 0x28

		::System::Boolean E7483E7CBF06BCFD(::System::Object* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_F6CD081FF38B7CD6_E7483E7CBF06BCFD_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::String* E80B9F472EEFDF74()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_F6CD081FF38B7CD6_E80B9F472EEFDF74_OFFSET))(this);
		}

		::System::Int32 AE1A0863005E0599()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_F6CD081FF38B7CD6_AE1A0863005E0599_OFFSET))(this);
		}
	};
}
