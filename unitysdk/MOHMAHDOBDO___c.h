#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOHMAHDOBDO;
namespace System { class Object; }

#define MOHMAHDOBDO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAAF90)
#define MOHMAHDOBDO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAAFD0)
#define MOHMAHDOBDO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAAAFE0)

	class MOHMAHDOBDO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOHMAHDOBDO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHMAHDOBDO___C_CTOR_OFFSET))(this);
		}

		::MOHMAHDOBDO* __cctor_b__28_0()
		{
			return ((::MOHMAHDOBDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHMAHDOBDO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
