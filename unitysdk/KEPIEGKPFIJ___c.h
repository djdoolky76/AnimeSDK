#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEPIEGKPFIJ;
namespace System { class Object; }

#define KEPIEGKPFIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E812750)
#define KEPIEGKPFIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E812790)
#define KEPIEGKPFIJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8127A0)

	class KEPIEGKPFIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEPIEGKPFIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ___C_CTOR_OFFSET))(this);
		}

		::KEPIEGKPFIJ* __cctor_b__23_0()
		{
			return ((::KEPIEGKPFIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPIEGKPFIJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
