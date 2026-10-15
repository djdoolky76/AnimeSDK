#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKEAJJLAMH;
namespace System { class Object; }

#define KIKEAJJLAMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E860BC0)
#define KIKEAJJLAMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E860BF0)
#define KIKEAJJLAMH___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E860C00)

	class KIKEAJJLAMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1ADB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKEAJJLAMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEAJJLAMH___C_CTOR_OFFSET))(this);
		}

		::KIKEAJJLAMH* __cctor_b__63_0()
		{
			return ((::KIKEAJJLAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEAJJLAMH___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
