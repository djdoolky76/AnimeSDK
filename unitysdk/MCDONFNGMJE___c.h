#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDONFNGMJE;
namespace System { class Object; }

#define MCDONFNGMJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F3B50)
#define MCDONFNGMJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F3B90)
#define MCDONFNGMJE___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1E9F3BA0)

	class MCDONFNGMJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCDONFNGMJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDONFNGMJE___C_CTOR_OFFSET))(this);
		}

		::MCDONFNGMJE* __cctor_b__36_0()
		{
			return ((::MCDONFNGMJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDONFNGMJE___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
