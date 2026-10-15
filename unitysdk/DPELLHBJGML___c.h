#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPELLHBJGML;
namespace System { class Object; }

#define DPELLHBJGML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20D490)
#define DPELLHBJGML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20D4C0)
#define DPELLHBJGML___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E20D4D0)

	class DPELLHBJGML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPELLHBJGML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPELLHBJGML___C_CTOR_OFFSET))(this);
		}

		::DPELLHBJGML* __cctor_b__48_0()
		{
			return ((::DPELLHBJGML*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPELLHBJGML___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
