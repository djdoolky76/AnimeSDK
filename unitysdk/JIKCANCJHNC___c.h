#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIKCANCJHNC;
namespace System { class Object; }

#define JIKCANCJHNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74EA30)
#define JIKCANCJHNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74EA70)
#define JIKCANCJHNC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E74EA80)

	class JIKCANCJHNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIKCANCJHNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC___C_CTOR_OFFSET))(this);
		}

		::JIKCANCJHNC* __cctor_b__43_0()
		{
			return ((::JIKCANCJHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKCANCJHNC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
