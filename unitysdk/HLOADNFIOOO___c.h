#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLOADNFIOOO;
namespace System { class Object; }

#define HLOADNFIOOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C5FC0)
#define HLOADNFIOOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C5FF0)
#define HLOADNFIOOO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5C6000)

	class HLOADNFIOOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLOADNFIOOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO___C_CTOR_OFFSET))(this);
		}

		::HLOADNFIOOO* __cctor_b__33_0()
		{
			return ((::HLOADNFIOOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
