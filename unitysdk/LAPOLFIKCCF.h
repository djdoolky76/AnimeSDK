#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define LAPOLFIKCCF_AKBJLLBEAJL_OFFSET UNITYSDK_OFFSET(0xB5E98B0)
#define LAPOLFIKCCF_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E9C60)
#define LAPOLFIKCCF_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB5E9750)

	class LAPOLFIKCCF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<::System::String*>** StaticGet_LCCALPJDKAH()
		{
			return (::System::Collections::Generic::Queue_1<::System::String*>**)UnitySDK::FromName("", "LAPOLFIKCCF")->GetStaticField(0x2EA80);
		}

		static ::System::Single* StaticGet_GLOLNLDCKEM()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAPOLFIKCCF")->GetStaticField(0x9A40);
		}

		static ::System::Single* StaticGet_EPFHHGKHJOG()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAPOLFIKCCF")->GetStaticField(0x9A44);
		}

		static ::System::Boolean* StaticGet_IJCDEINGADN()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LAPOLFIKCCF")->GetStaticField(0x9A48);
		}

		static ::System::Single* StaticGet_CENECBNFGLD()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAPOLFIKCCF")->GetStaticField(0x9A4C);
		}

		static ::System::Single* StaticGet_PGFBFDJIDLM()
		{
			return (::System::Single*)UnitySDK::FromName("", "LAPOLFIKCCF")->GetStaticField(0x9A50);
		}

		// static const ::System::Object GELOACJEJCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOLFIKCCF_CTOR_OFFSET))(this);
		}

		static ::System::Void ELEPDOMDAGA(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LAPOLFIKCCF_ELEPDOMDAGA_OFFSET))(a1);
		}

		static ::System::String* AKBJLLBEAJL()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + LAPOLFIKCCF_AKBJLLBEAJL_OFFSET))();
		}

	};
