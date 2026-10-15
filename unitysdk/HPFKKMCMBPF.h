#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPFKKMCMBPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC26B0)

	class HPFKKMCMBPF : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_FPCGGLOJHEL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HPFKKMCMBPF")->GetStaticField(0x27A0);
		}

		static ::System::Int32* StaticGet_KKBKEFLBFAO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HPFKKMCMBPF")->GetStaticField(0x27A4);
		}

		static ::System::Int32* StaticGet_JBFJOKCAAAE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HPFKKMCMBPF")->GetStaticField(0x27A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPFKKMCMBPF_CCTOR_OFFSET))();
		}

	};
