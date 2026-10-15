#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDLGGGGKPHD;
namespace System { class Object; }

#define DDLGGGGKPHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E181A80)
#define DDLGGGGKPHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E181AC0)
#define DDLGGGGKPHD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E181AD0)

	class DDLGGGGKPHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDLGGGGKPHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLGGGGKPHD___C_CTOR_OFFSET))(this);
		}

		::DDLGGGGKPHD* __cctor_b__28_0()
		{
			return ((::DDLGGGGKPHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLGGGGKPHD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
