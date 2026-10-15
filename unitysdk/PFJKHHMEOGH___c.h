#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFJKHHMEOGH;
namespace System { class Object; }

#define PFJKHHMEOGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF25210)
#define PFJKHHMEOGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF25250)
#define PFJKHHMEOGH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF25260)

	class PFJKHHMEOGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFJKHHMEOGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKHHMEOGH___C_CTOR_OFFSET))(this);
		}

		::PFJKHHMEOGH* __cctor_b__28_0()
		{
			return ((::PFJKHHMEOGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJKHHMEOGH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
