#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIKKFEINEFD;
namespace System { class Object; }

#define NIKKFEINEFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB35300)
#define NIKKFEINEFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB35330)
#define NIKKFEINEFD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB35340)

inline static constexpr unsigned int NIKKFEINEFD___c_TypeDefinitionIndex = 26696;

	class NIKKFEINEFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x641D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKKFEINEFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKKFEINEFD___C_CTOR_OFFSET))(this);
		}

		::NIKKFEINEFD* __cctor_b__28_0()
		{
			return ((::NIKKFEINEFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKKFEINEFD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
