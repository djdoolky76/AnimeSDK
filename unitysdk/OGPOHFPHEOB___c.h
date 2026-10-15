#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGPOHFPHEOB;
namespace System { class Object; }

#define OGPOHFPHEOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE5B640)
#define OGPOHFPHEOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5B680)
#define OGPOHFPHEOB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE5B690)

	class OGPOHFPHEOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGPOHFPHEOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOHFPHEOB___C_CTOR_OFFSET))(this);
		}

		::OGPOHFPHEOB* __cctor_b__23_0()
		{
			return ((::OGPOHFPHEOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPOHFPHEOB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
