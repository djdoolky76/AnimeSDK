#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIBIOBDDCE;
namespace System { class Object; }

#define CIIBIOBDDCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D4190)
#define CIIBIOBDDCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D41D0)
#define CIIBIOBDDCE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0D41E0)

	class CIIBIOBDDCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x176E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIIBIOBDDCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBIOBDDCE___C_CTOR_OFFSET))(this);
		}

		::CIIBIOBDDCE* __cctor_b__28_0()
		{
			return ((::CIIBIOBDDCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBIOBDDCE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
