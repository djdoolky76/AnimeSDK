#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILLDFAANIEP;
namespace System { class Object; }

#define ILLDFAANIEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B1460)
#define ILLDFAANIEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B14A0)
#define ILLDFAANIEP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6B14B0)

	class ILLDFAANIEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILLDFAANIEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP___C_CTOR_OFFSET))(this);
		}

		::ILLDFAANIEP* __cctor_b__38_0()
		{
			return ((::ILLDFAANIEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLDFAANIEP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
