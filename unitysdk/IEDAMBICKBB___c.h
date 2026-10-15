#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEDAMBICKBB;
namespace System { class Object; }

#define IEDAMBICKBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6360F0)
#define IEDAMBICKBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E636130)
#define IEDAMBICKBB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E636140)

	class IEDAMBICKBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEDAMBICKBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB___C_CTOR_OFFSET))(this);
		}

		::IEDAMBICKBB* __cctor_b__28_0()
		{
			return ((::IEDAMBICKBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDAMBICKBB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
