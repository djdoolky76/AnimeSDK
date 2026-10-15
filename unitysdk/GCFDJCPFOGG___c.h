#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCFDJCPFOGG;
namespace System { class Object; }

#define GCFDJCPFOGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43CDB0)
#define GCFDJCPFOGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43CDE0)
#define GCFDJCPFOGG___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E43CDF0)

	class GCFDJCPFOGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCFDJCPFOGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFDJCPFOGG___C_CTOR_OFFSET))(this);
		}

		::GCFDJCPFOGG* __cctor_b__53_0()
		{
			return ((::GCFDJCPFOGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFDJCPFOGG___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
