#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOCIBBFJPMP;
namespace System { class Object; }

#define JOCIBBFJPMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79DBF0)
#define JOCIBBFJPMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79DC30)
#define JOCIBBFJPMP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E79DC40)

	class JOCIBBFJPMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCIBBFJPMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP___C_CTOR_OFFSET))(this);
		}

		::JOCIBBFJPMP* __cctor_b__23_0()
		{
			return ((::JOCIBBFJPMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
