#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PNNPALLKLED_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3506A0)
#define PNNPALLKLED_CDMBJFLNNHD_OFFSET UNITYSDK_OFFSET(0xC350580)
#define PNNPALLKLED_EIMINJCDELC_OFFSET UNITYSDK_OFFSET(0xC350460)

inline static constexpr unsigned int PNNPALLKLED_TypeDefinitionIndex = 51848;

	class PNNPALLKLED : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int64>** StaticGet_JAIMAIPPDOJ()
		{
			return (::Il2CppArray<::System::Int64>**)UnitySDK::FromName("", "PNNPALLKLED")->GetStaticField(0x6FF20);
		}

		static ::Il2CppArray<::System::Int64>** StaticGet_LIGAMFDAPKG()
		{
			return (::Il2CppArray<::System::Int64>**)UnitySDK::FromName("", "PNNPALLKLED")->GetStaticField(0x6FF28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNNPALLKLED_CCTOR_OFFSET))();
		}

		static ::System::Boolean EIMINJCDELC(::System::Int32 a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + PNNPALLKLED_EIMINJCDELC_OFFSET))(a1, a2);
		}

		static ::System::Boolean CDMBJFLNNHD(::System::Int32 a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + PNNPALLKLED_CDMBJFLNNHD_OFFSET))(a1, a2);
		}

	};
