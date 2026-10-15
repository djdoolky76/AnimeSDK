#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLMAMHBLJKP;
namespace System { class Object; }

#define PLMAMHBLJKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA38B0)
#define PLMAMHBLJKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA38F0)
#define PLMAMHBLJKP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFA3900)

	class PLMAMHBLJKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLMAMHBLJKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP___C_CTOR_OFFSET))(this);
		}

		::PLMAMHBLJKP* __cctor_b__28_0()
		{
			return ((::PLMAMHBLJKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
