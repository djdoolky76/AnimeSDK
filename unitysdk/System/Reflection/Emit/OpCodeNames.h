#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define SYSTEM_REFLECTION_EMIT_OPCODENAMES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C29EA00)

namespace System::Reflection::Emit
{
	class OpCodeNames : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_names()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Reflection.Emit", "OpCodeNames")->GetStaticField(0x13E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_OPCODENAMES_CCTOR_OFFSET))();
		}

	};
}
