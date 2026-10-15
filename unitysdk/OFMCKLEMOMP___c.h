#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFMCKLEMOMP;
namespace System { class Object; }

#define OFMCKLEMOMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4AA70)
#define OFMCKLEMOMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4AAA0)
#define OFMCKLEMOMP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DE4AAB0)

	class OFMCKLEMOMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFMCKLEMOMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP___C_CTOR_OFFSET))(this);
		}

		::OFMCKLEMOMP* __cctor_b__48_0()
		{
			return ((::OFMCKLEMOMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMCKLEMOMP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
