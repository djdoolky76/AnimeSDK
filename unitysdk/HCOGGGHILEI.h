#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define HCOGGGHILEI_BMMHMFJHJED_OFFSET UNITYSDK_OFFSET(0x1DD61830)
#define HCOGGGHILEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD61B30)
#define HCOGGGHILEI_FJDJNHCHBNL_OFFSET UNITYSDK_OFFSET(0x1DD61700)
#define HCOGGGHILEI_KAGBELPHFBB_OFFSET UNITYSDK_OFFSET(0x1DD618B0)
#define HCOGGGHILEI_KJLMKPGKGHB_OFFSET UNITYSDK_OFFSET(0x1DD61AE0)
#define HCOGGGHILEI_MMCMILPKEHO_OFFSET UNITYSDK_OFFSET(0x1DD61A80)

	class HCOGGGHILEI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_OJFBPIFNHKN()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "HCOGGGHILEI")->GetStaticField(0x2BD30);
		}

		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>** StaticGet_JOOMJIJLHBK()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>**)UnitySDK::FromName("", "HCOGGGHILEI")->GetStaticField(0x2BD38);
		}

		// static const ::System::Object BGFIKHHKMEP; // 0x0
		// static const ::System::Object ODAMHEBJGBO; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCOGGGHILEI_CCTOR_OFFSET))();
		}

		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* FJDJNHCHBNL()
		{
			return ((::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*(*)())((::PBYTE)hIl2Cpp + HCOGGGHILEI_FJDJNHCHBNL_OFFSET))();
		}

		static ::System::Boolean BMMHMFJHJED(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HCOGGGHILEI_BMMHMFJHJED_OFFSET))(a1);
		}

		static ::System::Int32 KAGBELPHFBB(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + HCOGGGHILEI_KAGBELPHFBB_OFFSET))(a1);
		}

		static ::System::Int32 MMCMILPKEHO()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HCOGGGHILEI_MMCMILPKEHO_OFFSET))();
		}

		static ::System::Int32 KJLMKPGKGHB(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + HCOGGGHILEI_KJLMKPGKGHB_OFFSET))(a1);
		}

	};
