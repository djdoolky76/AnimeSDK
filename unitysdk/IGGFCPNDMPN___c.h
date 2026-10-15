#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGGFCPNDMPN;
namespace System { class Object; }

#define IGGFCPNDMPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64CBC0)
#define IGGFCPNDMPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64CC00)
#define IGGFCPNDMPN___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E64CC10)

	class IGGFCPNDMPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGGFCPNDMPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN___C_CTOR_OFFSET))(this);
		}

		::IGGFCPNDMPN* __cctor_b__32_0()
		{
			return ((::IGGFCPNDMPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGFCPNDMPN___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
