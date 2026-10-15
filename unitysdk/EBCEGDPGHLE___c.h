#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBCEGDPGHLE;
namespace System { class Object; }

#define EBCEGDPGHLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2334E0)
#define EBCEGDPGHLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E233510)
#define EBCEGDPGHLE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E233520)

	class EBCEGDPGHLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBCEGDPGHLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE___C_CTOR_OFFSET))(this);
		}

		::EBCEGDPGHLE* __cctor_b__33_0()
		{
			return ((::EBCEGDPGHLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
