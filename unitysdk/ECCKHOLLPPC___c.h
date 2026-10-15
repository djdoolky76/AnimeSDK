#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECCKHOLLPPC;
namespace System { class Object; }

#define ECCKHOLLPPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24CE00)
#define ECCKHOLLPPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E24CE40)
#define ECCKHOLLPPC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E24CE50)

	class ECCKHOLLPPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECCKHOLLPPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC___C_CTOR_OFFSET))(this);
		}

		::ECCKHOLLPPC* __cctor_b__38_0()
		{
			return ((::ECCKHOLLPPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
