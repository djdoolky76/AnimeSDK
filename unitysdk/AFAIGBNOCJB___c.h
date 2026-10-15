#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFAIGBNOCJB;
namespace System { class Object; }

#define AFAIGBNOCJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E110E60)
#define AFAIGBNOCJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E110EA0)
#define AFAIGBNOCJB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E110EB0)

	class AFAIGBNOCJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFAIGBNOCJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAIGBNOCJB___C_CTOR_OFFSET))(this);
		}

		::AFAIGBNOCJB* __cctor_b__23_0()
		{
			return ((::AFAIGBNOCJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAIGBNOCJB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
