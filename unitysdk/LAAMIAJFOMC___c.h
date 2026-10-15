#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAAMIAJFOMC;
namespace System { class Object; }

#define LAAMIAJFOMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C5B80)
#define LAAMIAJFOMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C5BC0)
#define LAAMIAJFOMC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8C5BD0)

	class LAAMIAJFOMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAAMIAJFOMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAMIAJFOMC___C_CTOR_OFFSET))(this);
		}

		::LAAMIAJFOMC* __cctor_b__28_0()
		{
			return ((::LAAMIAJFOMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAMIAJFOMC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
