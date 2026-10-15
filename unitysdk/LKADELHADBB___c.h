#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKADELHADBB;
namespace System { class Object; }

#define LKADELHADBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98BB60)
#define LKADELHADBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98BBA0)
#define LKADELHADBB___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1E98BBB0)

	class LKADELHADBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKADELHADBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKADELHADBB___C_CTOR_OFFSET))(this);
		}

		::LKADELHADBB* __cctor_b__78_0()
		{
			return ((::LKADELHADBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKADELHADBB___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
