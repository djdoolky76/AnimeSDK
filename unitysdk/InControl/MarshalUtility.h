#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define INCONTROL_MARSHALUTILITY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA00CF0)
#define INCONTROL_MARSHALUTILITY_COPY_OFFSET UNITYSDK_OFFSET(0x1BA00C00)

namespace InControl
{
	inline static constexpr unsigned int MarshalUtility_TypeDefinitionIndex = 40903;

	class MarshalUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_buffer()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("InControl", "MarshalUtility")->GetStaticField(0x58E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_MARSHALUTILITY_CCTOR_OFFSET))();
		}

		static ::System::Void Copy(::System::IntPtr a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_MARSHALUTILITY_COPY_OFFSET))(a1, a2, a3);
		}

	};
}
