#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPGNDMDNPEM;
namespace System { class Object; }

#define NPGNDMDNPEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB9C120)
#define NPGNDMDNPEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9C160)
#define NPGNDMDNPEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB9C170)

	class NPGNDMDNPEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE7A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPGNDMDNPEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM___C_CTOR_OFFSET))(this);
		}

		::NPGNDMDNPEM* __cctor_b__23_0()
		{
			return ((::NPGNDMDNPEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
