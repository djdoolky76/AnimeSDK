#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMHKBOKMCPC;
namespace System { class Object; }

#define BMHKBOKMCPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0280C0)
#define BMHKBOKMCPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E028100)
#define BMHKBOKMCPC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E028110)

	class BMHKBOKMCPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMHKBOKMCPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC___C_CTOR_OFFSET))(this);
		}

		::BMHKBOKMCPC* __cctor_b__33_0()
		{
			return ((::BMHKBOKMCPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
