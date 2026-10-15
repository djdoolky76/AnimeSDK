#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOLOFJGPNGL;
namespace System { class Object; }

#define HOLOFJGPNGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EE670)
#define HOLOFJGPNGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EE6A0)
#define HOLOFJGPNGL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5EE6B0)

	class HOLOFJGPNGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOLOFJGPNGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL___C_CTOR_OFFSET))(this);
		}

		::HOLOFJGPNGL* __cctor_b__28_0()
		{
			return ((::HOLOFJGPNGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLOFJGPNGL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
