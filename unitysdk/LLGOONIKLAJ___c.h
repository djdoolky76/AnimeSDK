#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLGOONIKLAJ;
namespace System { class Object; }

#define LLGOONIKLAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99BBA0)
#define LLGOONIKLAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99BBE0)
#define LLGOONIKLAJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E99BBF0)

	class LLGOONIKLAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLGOONIKLAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOONIKLAJ___C_CTOR_OFFSET))(this);
		}

		::LLGOONIKLAJ* __cctor_b__28_0()
		{
			return ((::LLGOONIKLAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOONIKLAJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
