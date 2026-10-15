#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEHLDBOEFGB;
namespace System { class Object; }

#define EEHLDBOEFGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2698A0)
#define EEHLDBOEFGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2698E0)
#define EEHLDBOEFGB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2698F0)

	class EEHLDBOEFGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEHLDBOEFGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHLDBOEFGB___C_CTOR_OFFSET))(this);
		}

		::EEHLDBOEFGB* __cctor_b__43_0()
		{
			return ((::EEHLDBOEFGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHLDBOEFGB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
