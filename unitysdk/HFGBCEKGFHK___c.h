#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFGBCEKGFHK;
namespace System { class Object; }

#define HFGBCEKGFHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E567E50)
#define HFGBCEKGFHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E567E90)
#define HFGBCEKGFHK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E567EA0)

	class HFGBCEKGFHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFGBCEKGFHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGBCEKGFHK___C_CTOR_OFFSET))(this);
		}

		::HFGBCEKGFHK* __cctor_b__23_0()
		{
			return ((::HFGBCEKGFHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGBCEKGFHK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
