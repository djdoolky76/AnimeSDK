#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCGIIEDCHMG;
namespace System { class Object; }

#define OCGIIEDCHMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE14580)
#define OCGIIEDCHMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE145B0)
#define OCGIIEDCHMG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE145C0)

	class OCGIIEDCHMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCGIIEDCHMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGIIEDCHMG___C_CTOR_OFFSET))(this);
		}

		::OCGIIEDCHMG* __cctor_b__23_0()
		{
			return ((::OCGIIEDCHMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGIIEDCHMG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
