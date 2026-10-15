#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMDGIJLGGID;
namespace System { class Object; }

#define HMDGIJLGGID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CCF20)
#define HMDGIJLGGID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CCF60)
#define HMDGIJLGGID___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E5CCF70)

	class HMDGIJLGGID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMDGIJLGGID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDGIJLGGID___C_CTOR_OFFSET))(this);
		}

		::HMDGIJLGGID* __cctor_b__38_0()
		{
			return ((::HMDGIJLGGID*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDGIJLGGID___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
