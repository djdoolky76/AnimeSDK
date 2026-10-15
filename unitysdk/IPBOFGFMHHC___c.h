#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPBOFGFMHHC;
namespace System { class Object; }

#define IPBOFGFMHHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DDB40)
#define IPBOFGFMHHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DDB70)
#define IPBOFGFMHHC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6DDB80)

	class IPBOFGFMHHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPBOFGFMHHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC___C_CTOR_OFFSET))(this);
		}

		::IPBOFGFMHHC* __cctor_b__33_0()
		{
			return ((::IPBOFGFMHHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBOFGFMHHC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
