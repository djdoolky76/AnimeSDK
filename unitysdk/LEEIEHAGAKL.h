#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFFKCODOCCC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEEIEHAGAKL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6486A0)
#define LEEIEHAGAKL_LEGNMDLCKLE_OFFSET UNITYSDK_OFFSET(0xB6485E0)
#define LEEIEHAGAKL_PNCHIFBCBJH_OFFSET UNITYSDK_OFFSET(0xB6484B0)

inline static constexpr unsigned int LEEIEHAGAKL_TypeDefinitionIndex = 57835;

	class LEEIEHAGAKL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::BFFKCODOCCC>** StaticGet_GBKLAKDLIBA()
		{
			return (::System::Collections::Generic::List_1<::BFFKCODOCCC>**)UnitySDK::FromName("", "LEEIEHAGAKL")->GetStaticField(0x5A1C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Int32>** StaticGet_NOGJPJJOMHL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Int32>**)UnitySDK::FromName("", "LEEIEHAGAKL")->GetStaticField(0x5A1C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEEIEHAGAKL_CCTOR_OFFSET))();
		}

		static ::BFFKCODOCCC PNCHIFBCBJH(::System::Int32 a1)
		{
			return ((::BFFKCODOCCC(*)(::System::Int32))((::PBYTE)hIl2Cpp + LEEIEHAGAKL_PNCHIFBCBJH_OFFSET))(a1);
		}

		static ::System::Int32 LEGNMDLCKLE(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Int32(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + LEEIEHAGAKL_LEGNMDLCKLE_OFFSET))(a1);
		}

	};
