#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHABCOEGDEH;
namespace System { class Object; }

#define OHABCOEGDEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE5C9D0)
#define OHABCOEGDEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5CA10)
#define OHABCOEGDEH___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DE5CA20)

	class OHABCOEGDEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHABCOEGDEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH___C_CTOR_OFFSET))(this);
		}

		::OHABCOEGDEH* __cctor_b__48_0()
		{
			return ((::OHABCOEGDEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHABCOEGDEH___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
