#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDKNIMHHNPA;
namespace System { class Object; }

#define DDKNIMHHNPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E180970)
#define DDKNIMHHNPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1809B0)
#define DDKNIMHHNPA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E1809C0)

	class DDKNIMHHNPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DF50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDKNIMHHNPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA___C_CTOR_OFFSET))(this);
		}

		::DDKNIMHHNPA* __cctor_b__43_0()
		{
			return ((::DDKNIMHHNPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
