#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBONHEMLCJG;
namespace System { class Object; }

#define CBONHEMLCJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E071A80)
#define CBONHEMLCJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E071AC0)
#define CBONHEMLCJG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E071AD0)

	class CBONHEMLCJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBONHEMLCJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG___C_CTOR_OFFSET))(this);
		}

		::CBONHEMLCJG* __cctor_b__23_0()
		{
			return ((::CBONHEMLCJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
