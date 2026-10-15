#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIFHJJILCHH;
namespace System { class Object; }

#define KIFHJJILCHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E859C00)
#define KIFHJJILCHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E859C30)
#define KIFHJJILCHH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E859C40)

	class KIFHJJILCHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIFHJJILCHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFHJJILCHH___C_CTOR_OFFSET))(this);
		}

		::KIFHJJILCHH* __cctor_b__28_0()
		{
			return ((::KIFHJJILCHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFHJJILCHH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
