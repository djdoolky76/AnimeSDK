#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFDHOCKEPGD;
namespace System { class Object; }

#define NFDHOCKEPGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB00400)
#define NFDHOCKEPGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB00440)
#define NFDHOCKEPGD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB00450)

	class NFDHOCKEPGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFDHOCKEPGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHOCKEPGD___C_CTOR_OFFSET))(this);
		}

		::NFDHOCKEPGD* __cctor_b__23_0()
		{
			return ((::NFDHOCKEPGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDHOCKEPGD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
