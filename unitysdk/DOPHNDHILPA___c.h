#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOPHNDHILPA;
namespace System { class Object; }

#define DOPHNDHILPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2082A0)
#define DOPHNDHILPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2082E0)
#define DOPHNDHILPA___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1E2082F0)

	class DOPHNDHILPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOPHNDHILPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPHNDHILPA___C_CTOR_OFFSET))(this);
		}

		::DOPHNDHILPA* __cctor_b__44_0()
		{
			return ((::DOPHNDHILPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPHNDHILPA___C___CCTOR_B__44_0_OFFSET))(this);
		}

	};
