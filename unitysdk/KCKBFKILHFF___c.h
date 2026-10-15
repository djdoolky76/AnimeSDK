#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCKBFKILHFF;
namespace System { class Object; }

#define KCKBFKILHFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F8C30)
#define KCKBFKILHFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F8C60)
#define KCKBFKILHFF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7F8C70)

	class KCKBFKILHFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCKBFKILHFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKBFKILHFF___C_CTOR_OFFSET))(this);
		}

		::KCKBFKILHFF* __cctor_b__23_0()
		{
			return ((::KCKBFKILHFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKBFKILHFF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
