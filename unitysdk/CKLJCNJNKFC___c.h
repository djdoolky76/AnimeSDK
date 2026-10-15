#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKLJCNJNKFC;
namespace System { class Object; }

#define CKLJCNJNKFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0EC830)
#define CKLJCNJNKFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EC870)
#define CKLJCNJNKFC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0EC880)

	class CKLJCNJNKFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKLJCNJNKFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLJCNJNKFC___C_CTOR_OFFSET))(this);
		}

		::CKLJCNJNKFC* __cctor_b__28_0()
		{
			return ((::CKLJCNJNKFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLJCNJNKFC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
