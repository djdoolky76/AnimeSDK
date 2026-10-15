#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLIOPBPOBHB;
namespace System { class Object; }

#define NLIOPBPOBHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB66350)
#define NLIOPBPOBHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB66380)
#define NLIOPBPOBHB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB66390)

	class NLIOPBPOBHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLIOPBPOBHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB___C_CTOR_OFFSET))(this);
		}

		::NLIOPBPOBHB* __cctor_b__38_0()
		{
			return ((::NLIOPBPOBHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIOPBPOBHB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
