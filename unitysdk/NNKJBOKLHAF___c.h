#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNKJBOKLHAF;
namespace System { class Object; }

#define NNKJBOKLHAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB83B00)
#define NNKJBOKLHAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB83B30)
#define NNKJBOKLHAF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB83B40)

	class NNKJBOKLHAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNKJBOKLHAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKJBOKLHAF___C_CTOR_OFFSET))(this);
		}

		::NNKJBOKLHAF* __cctor_b__18_0()
		{
			return ((::NNKJBOKLHAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKJBOKLHAF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
