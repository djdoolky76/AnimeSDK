#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMOPLAHDEPN;
class KHPENGJFKBB;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FOMDMAGLLNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x158FAE80)
#define FOMDMAGLLNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x158FAEC0)
#define FOMDMAGLLNI___C___CTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x158FAED0)

	class FOMDMAGLLNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BD10);
		}

		static ::System::Func_2<::CMOPLAHDEPN*, ::KHPENGJFKBB*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::CMOPLAHDEPN*, ::KHPENGJFKBB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BD18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOMDMAGLLNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMDMAGLLNI___C_CTOR_OFFSET))(this);
		}

		::KHPENGJFKBB* __ctor_b__7_0(::CMOPLAHDEPN* a1)
		{
			return ((::KHPENGJFKBB*(*)(::PVOID, ::CMOPLAHDEPN*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI___C___CTOR_B__7_0_OFFSET))(this, a1);
		}

	};
