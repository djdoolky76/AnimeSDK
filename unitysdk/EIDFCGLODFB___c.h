#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIDFCGLODFB;
namespace System { class Object; }

#define EIDFCGLODFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A7370)
#define EIDFCGLODFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A73B0)
#define EIDFCGLODFB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E2A73C0)

	class EIDFCGLODFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x496F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIDFCGLODFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB___C_CTOR_OFFSET))(this);
		}

		::EIDFCGLODFB* __cctor_b__38_0()
		{
			return ((::EIDFCGLODFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
