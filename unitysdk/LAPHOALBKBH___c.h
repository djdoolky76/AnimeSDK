#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAPHOALBKBH;
namespace System { class Object; }

#define LAPHOALBKBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D4F20)
#define LAPHOALBKBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D4F60)
#define LAPHOALBKBH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8D4F70)

	class LAPHOALBKBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAPHOALBKBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH___C_CTOR_OFFSET))(this);
		}

		::LAPHOALBKBH* __cctor_b__23_0()
		{
			return ((::LAPHOALBKBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPHOALBKBH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
