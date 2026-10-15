#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMEMIDKDAFG;
namespace System { class Object; }

#define PMEMIDKDAFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAB510)
#define PMEMIDKDAFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAB550)
#define PMEMIDKDAFG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFAB560)

	class PMEMIDKDAFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMEMIDKDAFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEMIDKDAFG___C_CTOR_OFFSET))(this);
		}

		::PMEMIDKDAFG* __cctor_b__28_0()
		{
			return ((::PMEMIDKDAFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEMIDKDAFG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
