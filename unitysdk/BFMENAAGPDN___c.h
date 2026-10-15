#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMENAAGPDN;
namespace System { class Object; }

#define BFMENAAGPDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6EC80)
#define BFMENAAGPDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6ECB0)
#define BFMENAAGPDN___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1EA6ECC0)

	class BFMENAAGPDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x425F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFMENAAGPDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMENAAGPDN___C_CTOR_OFFSET))(this);
		}

		::BFMENAAGPDN* __cctor_b__63_0()
		{
			return ((::BFMENAAGPDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMENAAGPDN___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
