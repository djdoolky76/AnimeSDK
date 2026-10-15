#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDMGIMOOFBL;
namespace System { class Object; }

#define NDMGIMOOFBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAED060)
#define NDMGIMOOFBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAED0A0)
#define NDMGIMOOFBL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EAED0B0)

	class NDMGIMOOFBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDMGIMOOFBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL___C_CTOR_OFFSET))(this);
		}

		::NDMGIMOOFBL* __cctor_b__48_0()
		{
			return ((::NDMGIMOOFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
