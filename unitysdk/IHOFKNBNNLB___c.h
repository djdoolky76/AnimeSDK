#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHOFKNBNNLB;
namespace System { class Object; }

#define IHOFKNBNNLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6564D0)
#define IHOFKNBNNLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E656510)
#define IHOFKNBNNLB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E656520)

inline static constexpr unsigned int IHOFKNBNNLB___c_TypeDefinitionIndex = 33102;

	class IHOFKNBNNLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHOFKNBNNLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFKNBNNLB___C_CTOR_OFFSET))(this);
		}

		::IHOFKNBNNLB* __cctor_b__28_0()
		{
			return ((::IHOFKNBNNLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFKNBNNLB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
