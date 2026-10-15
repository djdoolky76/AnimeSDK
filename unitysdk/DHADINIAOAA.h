#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define DHADINIAOAA_CTOR_OFFSET UNITYSDK_OFFSET(0xE85D510)
#define DHADINIAOAA_ENFHMANMFGL_OFFSET UNITYSDK_OFFSET(0xE85D0D0)
#define DHADINIAOAA_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xE85D170)
#define DHADINIAOAA_OCABOKGMPMC_OFFSET UNITYSDK_OFFSET(0xE85D020)

	class DHADINIAOAA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHADINIAOAA_CTOR_OFFSET))(this);
		}

		::System::Boolean OCABOKGMPMC(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DHADINIAOAA_OCABOKGMPMC_OFFSET))(this, a1);
		}

		::System::Boolean FPKLDCGAJGP(::Il2CppArray<::System::Byte>* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Object*))((::PBYTE)hIl2Cpp + DHADINIAOAA_FPKLDCGAJGP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 ENFHMANMFGL(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + DHADINIAOAA_ENFHMANMFGL_OFFSET))(this, a1, a2);
		}

	};
