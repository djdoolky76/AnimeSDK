#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPMOBJOCIAF;
namespace System { class Object; }

#define NPMOBJOCIAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB9F360)
#define NPMOBJOCIAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9F3A0)
#define NPMOBJOCIAF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB9F3B0)

	class NPMOBJOCIAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xED40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPMOBJOCIAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMOBJOCIAF___C_CTOR_OFFSET))(this);
		}

		::NPMOBJOCIAF* __cctor_b__28_0()
		{
			return ((::NPMOBJOCIAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMOBJOCIAF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
