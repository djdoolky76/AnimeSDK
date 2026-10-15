#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLAIJDHDEBI;
namespace System { class Object; }

#define FLAIJDHDEBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B4C30)
#define FLAIJDHDEBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B4C70)
#define FLAIJDHDEBI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3B4C80)

	class FLAIJDHDEBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLAIJDHDEBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI___C_CTOR_OFFSET))(this);
		}

		::FLAIJDHDEBI* __cctor_b__33_0()
		{
			return ((::FLAIJDHDEBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
