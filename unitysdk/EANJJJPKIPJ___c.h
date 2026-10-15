#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EANJJJPKIPJ;
namespace System { class Object; }

#define EANJJJPKIPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22F3D0)
#define EANJJJPKIPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22F410)
#define EANJJJPKIPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E22F420)

	class EANJJJPKIPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x499F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EANJJJPKIPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJJJPKIPJ___C_CTOR_OFFSET))(this);
		}

		::EANJJJPKIPJ* __cctor_b__28_0()
		{
			return ((::EANJJJPKIPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJJJPKIPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
