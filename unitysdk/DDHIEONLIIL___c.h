#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDHIEONLIIL;
namespace System { class Object; }

#define DDHIEONLIIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17D440)
#define DDHIEONLIIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17D480)
#define DDHIEONLIIL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E17D490)

	class DDHIEONLIIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDHIEONLIIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL___C_CTOR_OFFSET))(this);
		}

		::DDHIEONLIIL* __cctor_b__33_0()
		{
			return ((::DDHIEONLIIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
