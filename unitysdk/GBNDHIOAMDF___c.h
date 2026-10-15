#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBNDHIOAMDF;
namespace System { class Object; }

#define GBNDHIOAMDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E433900)
#define GBNDHIOAMDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E433940)
#define GBNDHIOAMDF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E433950)

	class GBNDHIOAMDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBNDHIOAMDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNDHIOAMDF___C_CTOR_OFFSET))(this);
		}

		::GBNDHIOAMDF* __cctor_b__23_0()
		{
			return ((::GBNDHIOAMDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNDHIOAMDF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
