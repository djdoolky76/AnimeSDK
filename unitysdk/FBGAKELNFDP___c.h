#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBGAKELNFDP;
namespace System { class Object; }

#define FBGAKELNFDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E335410)
#define FBGAKELNFDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E335450)
#define FBGAKELNFDP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E335460)

	class FBGAKELNFDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBGAKELNFDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAKELNFDP___C_CTOR_OFFSET))(this);
		}

		::FBGAKELNFDP* __cctor_b__23_0()
		{
			return ((::FBGAKELNFDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAKELNFDP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
