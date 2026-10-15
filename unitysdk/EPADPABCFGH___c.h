#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPADPABCFGH;
namespace System { class Object; }

#define EPADPABCFGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3015C0)
#define EPADPABCFGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E301600)
#define EPADPABCFGH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E301610)

	class EPADPABCFGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPADPABCFGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH___C_CTOR_OFFSET))(this);
		}

		::EPADPABCFGH* __cctor_b__33_0()
		{
			return ((::EPADPABCFGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPADPABCFGH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
