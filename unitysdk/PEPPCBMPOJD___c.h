#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEPPCBMPOJD;
namespace System { class Object; }

#define PEPPCBMPOJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF20EC0)
#define PEPPCBMPOJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF20EF0)
#define PEPPCBMPOJD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF20F00)

	class PEPPCBMPOJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ABB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEPPCBMPOJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPPCBMPOJD___C_CTOR_OFFSET))(this);
		}

		::PEPPCBMPOJD* __cctor_b__23_0()
		{
			return ((::PEPPCBMPOJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPPCBMPOJD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
