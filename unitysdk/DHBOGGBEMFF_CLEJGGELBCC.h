#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define DHBOGGBEMFF_CLEJGGELBCC_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBC1360)
#define DHBOGGBEMFF_CLEJGGELBCC_COKMDIMBLHN_OFFSET UNITYSDK_OFFSET(0xEBC1120)
#define DHBOGGBEMFF_CLEJGGELBCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7650)
#define DHBOGGBEMFF_CLEJGGELBCC_NBKAFMOEBAM_OFFSET UNITYSDK_OFFSET(0xEBC1280)

inline static constexpr unsigned int DHBOGGBEMFF_CLEJGGELBCC_TypeDefinitionIndex = 49127;

	struct alignas(8) DHBOGGBEMFF_CLEJGGELBCC
	{
		::System::Int32 EJGEFPBLGLP; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* LFLPOOCDHDP; // 0x18
		::System::Boolean NCAHGJBCMJC; // 0x20
		static ::System::Collections::Generic::Queue_1<::System::Object*>** StaticGet_MFPNICMCKJG()
		{
			return (::System::Collections::Generic::Queue_1<::System::Object*>**)UnitySDK::FromName("", "CLEJGGELBCC")->GetStaticField(0x4B030);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CLEJGGELBCC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CLEJGGELBCC_CCTOR_OFFSET))();
		}

		/*
		static ::DHBOGGBEMFF_CLEJGGELBCC COKMDIMBLHN(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::DHBOGGBEMFF_CLEJGGELBCC(*)(::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CLEJGGELBCC_COKMDIMBLHN_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::Void NBKAFMOEBAM(::DHBOGGBEMFF_CLEJGGELBCC a1)
		{
			return ((::System::Void(*)(::DHBOGGBEMFF_CLEJGGELBCC))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CLEJGGELBCC_NBKAFMOEBAM_OFFSET))(a1);
		}
		*/

	};
