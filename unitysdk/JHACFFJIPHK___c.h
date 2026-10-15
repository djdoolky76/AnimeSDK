#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHACFFJIPHK;
namespace System { class Object; }

#define JHACFFJIPHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E741390)
#define JHACFFJIPHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7413D0)
#define JHACFFJIPHK___C___CCTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x1E7413E0)

	class JHACFFJIPHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHACFFJIPHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHACFFJIPHK___C_CTOR_OFFSET))(this);
		}

		::JHACFFJIPHK* __cctor_b__52_0()
		{
			return ((::JHACFFJIPHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHACFFJIPHK___C___CCTOR_B__52_0_OFFSET))(this);
		}

	};
