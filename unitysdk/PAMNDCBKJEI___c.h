#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAMNDCBKJEI;
namespace System { class Object; }

#define PAMNDCBKJEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF0FF0)
#define PAMNDCBKJEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF1020)
#define PAMNDCBKJEI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEF1030)

	class PAMNDCBKJEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMNDCBKJEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI___C_CTOR_OFFSET))(this);
		}

		::PAMNDCBKJEI* __cctor_b__33_0()
		{
			return ((::PAMNDCBKJEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMNDCBKJEI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
