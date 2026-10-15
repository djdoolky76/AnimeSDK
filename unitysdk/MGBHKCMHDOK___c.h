#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGBHKCMHDOK;
namespace System { class Object; }

#define MGBHKCMHDOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA208D0)
#define MGBHKCMHDOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA20910)
#define MGBHKCMHDOK___C___CCTOR_B__57_0_OFFSET UNITYSDK_OFFSET(0x1EA20920)

	class MGBHKCMHDOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBHKCMHDOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBHKCMHDOK___C_CTOR_OFFSET))(this);
		}

		::MGBHKCMHDOK* __cctor_b__57_0()
		{
			return ((::MGBHKCMHDOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBHKCMHDOK___C___CCTOR_B__57_0_OFFSET))(this);
		}

	};
