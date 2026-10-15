#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFJNNOOOGOH;
namespace System { class Object; }

#define LFJNNOOOGOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9420E0)
#define LFJNNOOOGOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E942120)
#define LFJNNOOOGOH___C___CCTOR_B__128_0_OFFSET UNITYSDK_OFFSET(0x1E942130)

	class LFJNNOOOGOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B8F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFJNNOOOGOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJNNOOOGOH___C_CTOR_OFFSET))(this);
		}

		::LFJNNOOOGOH* __cctor_b__128_0()
		{
			return ((::LFJNNOOOGOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJNNOOOGOH___C___CCTOR_B__128_0_OFFSET))(this);
		}

	};
