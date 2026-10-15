#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHMOEHAHION;
namespace System { class Object; }

#define MHMOEHAHION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA38760)
#define MHMOEHAHION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA387A0)
#define MHMOEHAHION___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA387B0)

	class MHMOEHAHION___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHMOEHAHION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMOEHAHION___C_CTOR_OFFSET))(this);
		}

		::MHMOEHAHION* __cctor_b__33_0()
		{
			return ((::MHMOEHAHION*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMOEHAHION___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
