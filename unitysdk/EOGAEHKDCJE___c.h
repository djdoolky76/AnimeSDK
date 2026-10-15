#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOGAEHKDCJE;
namespace System { class Object; }

#define EOGAEHKDCJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FB490)
#define EOGAEHKDCJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FB4D0)
#define EOGAEHKDCJE___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E2FB4E0)

	class EOGAEHKDCJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOGAEHKDCJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGAEHKDCJE___C_CTOR_OFFSET))(this);
		}

		::EOGAEHKDCJE* __cctor_b__48_0()
		{
			return ((::EOGAEHKDCJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOGAEHKDCJE___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
