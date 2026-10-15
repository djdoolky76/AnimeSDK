#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFOOLGFCNDN;
namespace System { class Object; }

#define KFOOLGFCNDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E832620)
#define KFOOLGFCNDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E832650)
#define KFOOLGFCNDN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E832660)

	class KFOOLGFCNDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x151A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFOOLGFCNDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOOLGFCNDN___C_CTOR_OFFSET))(this);
		}

		::KFOOLGFCNDN* __cctor_b__48_0()
		{
			return ((::KFOOLGFCNDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOOLGFCNDN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
