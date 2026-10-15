#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEANCDFECGN;
namespace System { class Object; }

#define EEANCDFECGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E264A80)
#define EEANCDFECGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E264AC0)
#define EEANCDFECGN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E264AD0)

	class EEANCDFECGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEANCDFECGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANCDFECGN___C_CTOR_OFFSET))(this);
		}

		::EEANCDFECGN* __cctor_b__23_0()
		{
			return ((::EEANCDFECGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANCDFECGN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
