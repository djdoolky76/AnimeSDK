#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABFMGPNOIG;
namespace System { class Object; }

#define BABFMGPNOIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AEAA0)
#define BABFMGPNOIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AEAE0)
#define BABFMGPNOIG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7AEAF0)

	class BABFMGPNOIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x442A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BABFMGPNOIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG___C_CTOR_OFFSET))(this);
		}

		::BABFMGPNOIG* __cctor_b__28_0()
		{
			return ((::BABFMGPNOIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
