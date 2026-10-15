#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOFHMCJPBCE;
namespace System { class Object; }

#define JOFHMCJPBCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A0170)
#define JOFHMCJPBCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A01A0)
#define JOFHMCJPBCE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7A01B0)

	class JOFHMCJPBCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CDD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOFHMCJPBCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFHMCJPBCE___C_CTOR_OFFSET))(this);
		}

		::JOFHMCJPBCE* __cctor_b__28_0()
		{
			return ((::JOFHMCJPBCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFHMCJPBCE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
