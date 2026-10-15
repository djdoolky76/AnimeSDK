#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIICHLNCAKK;
namespace System { class Object; }

#define EIICHLNCAKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A9E80)
#define EIICHLNCAKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A9EC0)
#define EIICHLNCAKK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E2A9ED0)

	class EIICHLNCAKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x499C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIICHLNCAKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIICHLNCAKK___C_CTOR_OFFSET))(this);
		}

		::EIICHLNCAKK* __cctor_b__38_0()
		{
			return ((::EIICHLNCAKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIICHLNCAKK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
