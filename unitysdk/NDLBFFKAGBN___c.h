#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDLBFFKAGBN;
namespace System { class Object; }

#define NDLBFFKAGBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE9BD0)
#define NDLBFFKAGBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE9C10)
#define NDLBFFKAGBN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EAE9C20)

	class NDLBFFKAGBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D6D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDLBFFKAGBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN___C_CTOR_OFFSET))(this);
		}

		::NDLBFFKAGBN* __cctor_b__48_0()
		{
			return ((::NDLBFFKAGBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLBFFKAGBN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
