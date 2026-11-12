#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPFKKMCMBPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x16D66730)

inline static constexpr unsigned int HPFKKMCMBPF_TypeDefinitionIndex = 68618;

	class HPFKKMCMBPF : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_FPCGGLOJHEL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HPFKKMCMBPF")->GetStaticField(0x72E0);
		}

		static ::System::Int32* StaticGet_KKBKEFLBFAO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HPFKKMCMBPF")->GetStaticField(0x72E4);
		}

		static ::System::Int32* StaticGet_JBFJOKCAAAE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HPFKKMCMBPF")->GetStaticField(0x72E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPFKKMCMBPF_CCTOR_OFFSET))();
		}

	};
