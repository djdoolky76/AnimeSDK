#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDHDBGECGJA;
namespace System { class Object; }

#define BDHDBGECGJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E916FE0)
#define BDHDBGECGJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E917020)
#define BDHDBGECGJA___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E917030)

	class BDHDBGECGJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDHDBGECGJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHDBGECGJA___C_CTOR_OFFSET))(this);
		}

		::BDHDBGECGJA* __cctor_b__48_0()
		{
			return ((::BDHDBGECGJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHDBGECGJA___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
