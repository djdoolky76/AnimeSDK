#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAIPMLDNDFN;
namespace System { class Object; }

#define OAIPMLDNDFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA7670)
#define OAIPMLDNDFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA76B0)
#define OAIPMLDNDFN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EBA76C0)

	class OAIPMLDNDFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAIPMLDNDFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPMLDNDFN___C_CTOR_OFFSET))(this);
		}

		::OAIPMLDNDFN* __cctor_b__28_0()
		{
			return ((::OAIPMLDNDFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIPMLDNDFN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
