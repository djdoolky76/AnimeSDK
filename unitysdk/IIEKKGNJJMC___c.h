#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIEKKGNJJMC;
namespace System { class Object; }

#define IIEKKGNJJMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E686110)
#define IIEKKGNJJMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E686150)
#define IIEKKGNJJMC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E686160)

	class IIEKKGNJJMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIEKKGNJJMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC___C_CTOR_OFFSET))(this);
		}

		::IIEKKGNJJMC* __cctor_b__33_0()
		{
			return ((::IIEKKGNJJMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEKKGNJJMC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
