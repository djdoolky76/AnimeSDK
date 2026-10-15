#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMOMCMJOFGG;
namespace System { class Object; }

#define NMOMCMJOFGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7B2A0)
#define NMOMCMJOFGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7B2E0)
#define NMOMCMJOFGG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB7B2F0)

	class NMOMCMJOFGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMOMCMJOFGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG___C_CTOR_OFFSET))(this);
		}

		::NMOMCMJOFGG* __cctor_b__23_0()
		{
			return ((::NMOMCMJOFGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMCMJOFGG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
