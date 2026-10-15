#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOLHAKEGKCL;
namespace System { class Object; }

#define GOLHAKEGKCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F2000)
#define GOLHAKEGKCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F2040)
#define GOLHAKEGKCL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4F2050)

	class GOLHAKEGKCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOLHAKEGKCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL___C_CTOR_OFFSET))(this);
		}

		::GOLHAKEGKCL* __cctor_b__33_0()
		{
			return ((::GOLHAKEGKCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
