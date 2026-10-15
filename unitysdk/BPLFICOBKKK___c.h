#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPLFICOBKKK;
namespace System { class Object; }

#define BPLFICOBKKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04CC00)
#define BPLFICOBKKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04CC40)
#define BPLFICOBKKK___C___CCTOR_B__51_0_OFFSET UNITYSDK_OFFSET(0x1E04CC50)

	class BPLFICOBKKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x556D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPLFICOBKKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLFICOBKKK___C_CTOR_OFFSET))(this);
		}

		::BPLFICOBKKK* __cctor_b__51_0()
		{
			return ((::BPLFICOBKKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLFICOBKKK___C___CCTOR_B__51_0_OFFSET))(this);
		}

	};
