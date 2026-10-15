#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLBAOLFBEGB;
namespace System { class Object; }

#define NLBAOLFBEGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB627B0)
#define NLBAOLFBEGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB627E0)
#define NLBAOLFBEGB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB627F0)

	class NLBAOLFBEGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLBAOLFBEGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB___C_CTOR_OFFSET))(this);
		}

		::NLBAOLFBEGB* __cctor_b__33_0()
		{
			return ((::NLBAOLFBEGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBAOLFBEGB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
